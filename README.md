# Factory Production Line Simulation

## About the System components
- **Production Line**: The system has one production line. one production line has one or more belt, each belt has three or more cells, and one worker is responsible for each belt cell's side. a belt cell can have two or more sides.
- **Worker**: One worker has two hands (it can be a robot), so they can hold two items, one in each hand. One worker is dedicatedly responsible for one cell. Based on that, a worker can hold these items combinations in hands:
  - One item from type A, one item from type B => and in that case he can combine them together to have one item of type AB, and an empty hand.
  - One item from type A, type B or type AB (completed item) and an empty hand.
- **Belt**: One belt is multiple cells, each cell is representing the place of the belt with the item in it, it can be empty, taken item, completed item, or a piece of A or B.
- **System Monitor**: Graphical representation and numbers tracker of the system interactions and updates


  