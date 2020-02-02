# Factory Production Line Simulation

## About the System components
- **Production Line**: The system has one production line. one production line has one or more belt, each belt has three or more cells, and one worker is responsible for each belt cell's side. a belt cell can have two or more sides.
- **Worker**: One worker has two hands (it can be a robot), so they can hold two items, one in each hand. One worker is dedicatedly responsible for one cell. Based on that, a worker can hold these items combinations in hands:
  - One item from type A, one item from type B => and in that case he can combine them together to have one item of type AB, and an empty hand.
  - One item from type A, type B or type AB (completed item) and an empty hand.
- **Belt**: One belt is multiple cells, each cell is representing the place of the belt with the item in it, it can be empty, taken item, completed item, or a piece of A or B.
- **System Monitor**: Graphical representation and numbers tracker of the system interactions and updates


## Sample Output
**"A"**: Piece of type A.

**"B"**: Piece of type B.

**"C"**: Combined piece: Piece of type A combined with piece of type B.

**" "**: An empty cell.

**"X"**: Taken item: Empty cell that used to have an item in it.

**Note:** You can edit the system config at `src/libs/vars.h` to have more workers, more system ticks, more belts ...
```
Tick #0 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | B |
 -------------
   ^   ^   ^

Tick #0 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #1 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #1 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #2 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | X |
 -------------
   ^   ^   ^

Tick #2 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #3 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #3 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #4 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #4 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #5 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #5 Final System State after the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #6 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #6 Final System State after the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #7 Initial System State before the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #7 Final System State after the tick:
   v   v   v
 -------------
 | C | X |   |
 -------------
   ^   ^   ^

Tick #8 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #8 Final System State after the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #9 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | C |
 -------------
   ^   ^   ^

Tick #9 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #10 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #10 Final System State after the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #11 Initial System State before the tick:
   v   v   v
 -------------
 | A |   |   |
 -------------
   ^   ^   ^

Tick #11 Final System State after the tick:
   v   v   v
 -------------
 | A |   |   |
 -------------
   ^   ^   ^

Tick #12 Initial System State before the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #12 Final System State after the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #13 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | A |
 -------------
   ^   ^   ^

Tick #13 Final System State after the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #14 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #14 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #15 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #15 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #16 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | X |
 -------------
   ^   ^   ^

Tick #16 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #17 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #17 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #18 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #18 Final System State after the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #19 Initial System State before the tick:
   v   v   v
 -------------
 | A | A |   |
 -------------
   ^   ^   ^

Tick #19 Final System State after the tick:
   v   v   v
 -------------
 | A | A |   |
 -------------
   ^   ^   ^

Tick #20 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | A |
 -------------
   ^   ^   ^

Tick #20 Final System State after the tick:
   v   v   v
 -------------
 | C | A | X |
 -------------
   ^   ^   ^

Tick #21 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #21 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #22 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #22 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #23 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #23 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #24 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #24 Final System State after the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #25 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | A |
 -------------
   ^   ^   ^

Tick #25 Final System State after the tick:
   v   v   v
 -------------
 | A | A | A |
 -------------
   ^   ^   ^

Tick #26 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | A |
 -------------
   ^   ^   ^

Tick #26 Final System State after the tick:
   v   v   v
 -------------
 | C | A | A |
 -------------
   ^   ^   ^

Tick #27 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #27 Final System State after the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #28 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #28 Final System State after the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #29 Initial System State before the tick:
   v   v   v
 -------------
 | A |   |   |
 -------------
   ^   ^   ^

Tick #29 Final System State after the tick:
   v   v   v
 -------------
 | A |   |   |
 -------------
   ^   ^   ^

Tick #30 Initial System State before the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #30 Final System State after the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #31 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | A |
 -------------
   ^   ^   ^

Tick #31 Final System State after the tick:
   v   v   v
 -------------
 | A |   | A |
 -------------
   ^   ^   ^

Tick #32 Initial System State before the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #32 Final System State after the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #33 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | A |
 -------------
   ^   ^   ^

Tick #33 Final System State after the tick:
   v   v   v
 -------------
 |   |   | A |
 -------------
   ^   ^   ^

Tick #34 Initial System State before the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #34 Final System State after the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #35 Initial System State before the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #35 Final System State after the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #36 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #36 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #37 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #37 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #38 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #38 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #39 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #39 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #40 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #40 Final System State after the tick:
   v   v   v
 -------------
 | C |   | X |
 -------------
   ^   ^   ^

Tick #41 Initial System State before the tick:
   v   v   v
 -------------
 |   | C |   |
 -------------
   ^   ^   ^

Tick #41 Final System State after the tick:
   v   v   v
 -------------
 |   | C |   |
 -------------
   ^   ^   ^

Tick #42 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #42 Final System State after the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #43 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #43 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #44 Initial System State before the tick:
   v   v   v
 -------------
 | B | X |   |
 -------------
   ^   ^   ^

Tick #44 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #45 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #45 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #46 Initial System State before the tick:
   v   v   v
 -------------
 | B | A | X |
 -------------
   ^   ^   ^

Tick #46 Final System State after the tick:
   v   v   v
 -------------
 | X | A | X |
 -------------
   ^   ^   ^

Tick #47 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | A |
 -------------
   ^   ^   ^

Tick #47 Final System State after the tick:
   v   v   v
 -------------
 | C | X | A |
 -------------
   ^   ^   ^

Tick #48 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #48 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #49 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #49 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #50 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #50 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #51 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #51 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #52 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #52 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #53 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #53 Final System State after the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #54 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | A |
 -------------
   ^   ^   ^

Tick #54 Final System State after the tick:
   v   v   v
 -------------
 | C | A | A |
 -------------
   ^   ^   ^

Tick #55 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #55 Final System State after the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #56 Initial System State before the tick:
   v   v   v
 -------------
 | B | A | C |
 -------------
   ^   ^   ^

Tick #56 Final System State after the tick:
   v   v   v
 -------------
 | X | A | C |
 -------------
   ^   ^   ^

Tick #57 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | A |
 -------------
   ^   ^   ^

Tick #57 Final System State after the tick:
   v   v   v
 -------------
 | X | X | A |
 -------------
   ^   ^   ^

Tick #58 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #58 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #59 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #59 Final System State after the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #60 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | A |
 -------------
   ^   ^   ^

Tick #60 Final System State after the tick:
   v   v   v
 -------------
 | C | A | A |
 -------------
   ^   ^   ^

Tick #61 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #61 Final System State after the tick:
   v   v   v
 -------------
 | X | C | A |
 -------------
   ^   ^   ^

Tick #62 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #62 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #63 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #63 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #64 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #64 Final System State after the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #65 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #65 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #66 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #66 Final System State after the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #67 Initial System State before the tick:
   v   v   v
 -------------
 | B | A | X |
 -------------
   ^   ^   ^

Tick #67 Final System State after the tick:
   v   v   v
 -------------
 | X | A | X |
 -------------
   ^   ^   ^

Tick #68 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | A |
 -------------
   ^   ^   ^

Tick #68 Final System State after the tick:
   v   v   v
 -------------
 | X | X | A |
 -------------
   ^   ^   ^

Tick #69 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #69 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #70 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #70 Final System State after the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #71 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | A |
 -------------
   ^   ^   ^

Tick #71 Final System State after the tick:
   v   v   v
 -------------
 | A | A | A |
 -------------
   ^   ^   ^

Tick #72 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | A |
 -------------
   ^   ^   ^

Tick #72 Final System State after the tick:
   v   v   v
 -------------
 | C | A | A |
 -------------
   ^   ^   ^

Tick #73 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #73 Final System State after the tick:
   v   v   v
 -------------
 | C | C | A |
 -------------
   ^   ^   ^

Tick #74 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | C |
 -------------
   ^   ^   ^

Tick #74 Final System State after the tick:
   v   v   v
 -------------
 |   | C | C |
 -------------
   ^   ^   ^

Tick #75 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | C |
 -------------
   ^   ^   ^

Tick #75 Final System State after the tick:
   v   v   v
 -------------
 | X |   | C |
 -------------
   ^   ^   ^

Tick #76 Initial System State before the tick:
   v   v   v
 -------------
 | B | X |   |
 -------------
   ^   ^   ^

Tick #76 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #77 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #77 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #78 Initial System State before the tick:
   v   v   v
 -------------
 | A | B | X |
 -------------
   ^   ^   ^

Tick #78 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #79 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #79 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #80 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #80 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #81 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #81 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #82 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #82 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #83 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #83 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #84 Initial System State before the tick:
   v   v   v
 -------------
 |   | B | X |
 -------------
   ^   ^   ^

Tick #84 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #85 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #85 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #86 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #86 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #87 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #87 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #88 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #88 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #89 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #89 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #90 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #90 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #91 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #91 Final System State after the tick:
   v   v   v
 -------------
 | C | C | X |
 -------------
   ^   ^   ^

Tick #92 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | C |
 -------------
   ^   ^   ^

Tick #92 Final System State after the tick:
   v   v   v
 -------------
 | X | C | C |
 -------------
   ^   ^   ^

Tick #93 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | C |
 -------------
   ^   ^   ^

Tick #93 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #94 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #94 Final System State after the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #95 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #95 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #96 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #96 Final System State after the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #97 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | X |
 -------------
   ^   ^   ^

Tick #97 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #98 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #98 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #99 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | C |
 -------------
   ^   ^   ^

Tick #99 Final System State after the tick:
   v   v   v
 -------------
 | X |   | C |
 -------------
   ^   ^   ^

Tick #100 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #100 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #101 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #101 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #102 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #102 Final System State after the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #103 Initial System State before the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #103 Final System State after the tick:
   v   v   v
 -------------
 | C |   |   |
 -------------
   ^   ^   ^

Tick #104 Initial System State before the tick:
   v   v   v
 -------------
 | A | C |   |
 -------------
   ^   ^   ^

Tick #104 Final System State after the tick:
   v   v   v
 -------------
 | X | C |   |
 -------------
   ^   ^   ^

Tick #105 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #105 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #106 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #106 Final System State after the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #107 Initial System State before the tick:
   v   v   v
 -------------
 |   | A |   |
 -------------
   ^   ^   ^

Tick #107 Final System State after the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #108 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | X |
 -------------
   ^   ^   ^

Tick #108 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #109 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #109 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #110 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #110 Final System State after the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #111 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #111 Final System State after the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #112 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #112 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #113 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #113 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #114 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #114 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #115 Initial System State before the tick:
   v   v   v
 -------------
 | A | B | X |
 -------------
   ^   ^   ^

Tick #115 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #116 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #116 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #117 Initial System State before the tick:
   v   v   v
 -------------
 | B | A | X |
 -------------
   ^   ^   ^

Tick #117 Final System State after the tick:
   v   v   v
 -------------
 | B | A | X |
 -------------
   ^   ^   ^

Tick #118 Initial System State before the tick:
   v   v   v
 -------------
 | B | B | A |
 -------------
   ^   ^   ^

Tick #118 Final System State after the tick:
   v   v   v
 -------------
 | B | X | A |
 -------------
   ^   ^   ^

Tick #119 Initial System State before the tick:
   v   v   v
 -------------
 | A | B | X |
 -------------
   ^   ^   ^

Tick #119 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #120 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | X |
 -------------
   ^   ^   ^

Tick #120 Final System State after the tick:
   v   v   v
 -------------
 | C | A | X |
 -------------
   ^   ^   ^

Tick #121 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #121 Final System State after the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #122 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | C |
 -------------
   ^   ^   ^

Tick #122 Final System State after the tick:
   v   v   v
 -------------
 | C | A | C |
 -------------
   ^   ^   ^

Tick #123 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #123 Final System State after the tick:
   v   v   v
 -------------
 | A | C | A |
 -------------
   ^   ^   ^

Tick #124 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | C |
 -------------
   ^   ^   ^

Tick #124 Final System State after the tick:
   v   v   v
 -------------
 |   | A | C |
 -------------
   ^   ^   ^

Tick #125 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | A |
 -------------
   ^   ^   ^

Tick #125 Final System State after the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #126 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #126 Final System State after the tick:
   v   v   v
 -------------
 |   | C | C |
 -------------
   ^   ^   ^

Tick #127 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #127 Final System State after the tick:
   v   v   v
 -------------
 |   |   | C |
 -------------
   ^   ^   ^

Tick #128 Initial System State before the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #128 Final System State after the tick:
   v   v   v
 -------------
 |   |   |   |
 -------------
   ^   ^   ^

Tick #129 Initial System State before the tick:
   v   v   v
 -------------
 | B |   |   |
 -------------
   ^   ^   ^

Tick #129 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #130 Initial System State before the tick:
   v   v   v
 -------------
 | B | X |   |
 -------------
   ^   ^   ^

Tick #130 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #131 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #131 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #132 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #132 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #133 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #133 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #134 Initial System State before the tick:
   v   v   v
 -------------
 | A | B | X |
 -------------
   ^   ^   ^

Tick #134 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #135 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | X |
 -------------
   ^   ^   ^

Tick #135 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #136 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #136 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #137 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #137 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #138 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #138 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #139 Initial System State before the tick:
   v   v   v
 -------------
 |   | B | X |
 -------------
   ^   ^   ^

Tick #139 Final System State after the tick:
   v   v   v
 -------------
 | C | B | X |
 -------------
   ^   ^   ^

Tick #140 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | B |
 -------------
   ^   ^   ^

Tick #140 Final System State after the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #141 Initial System State before the tick:
   v   v   v
 -------------
 | B | B | C |
 -------------
   ^   ^   ^

Tick #141 Final System State after the tick:
   v   v   v
 -------------
 | B | B | C |
 -------------
   ^   ^   ^

Tick #142 Initial System State before the tick:
   v   v   v
 -------------
 | B | B | B |
 -------------
   ^   ^   ^

Tick #142 Final System State after the tick:
   v   v   v
 -------------
 | B | B | X |
 -------------
   ^   ^   ^

Tick #143 Initial System State before the tick:
   v   v   v
 -------------
 | A | B | B |
 -------------
   ^   ^   ^

Tick #143 Final System State after the tick:
   v   v   v
 -------------
 | X | B | X |
 -------------
   ^   ^   ^

Tick #144 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | B |
 -------------
   ^   ^   ^

Tick #144 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #145 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #145 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #146 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #146 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #147 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #147 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #148 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #148 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #149 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #149 Final System State after the tick:
   v   v   v
 -------------
 | C | C | X |
 -------------
   ^   ^   ^

Tick #150 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | C |
 -------------
   ^   ^   ^

Tick #150 Final System State after the tick:
   v   v   v
 -------------
 | A | C | C |
 -------------
   ^   ^   ^

Tick #151 Initial System State before the tick:
   v   v   v
 -------------
 | B | A | C |
 -------------
   ^   ^   ^

Tick #151 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #152 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #152 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #153 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #153 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #154 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #154 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #155 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #155 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #156 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #156 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #157 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #157 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #158 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #158 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #159 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | C |
 -------------
   ^   ^   ^

Tick #159 Final System State after the tick:
   v   v   v
 -------------
 | X | C | C |
 -------------
   ^   ^   ^

Tick #160 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #160 Final System State after the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #161 Initial System State before the tick:
   v   v   v
 -------------
 | A | A | X |
 -------------
   ^   ^   ^

Tick #161 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #162 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | X |
 -------------
   ^   ^   ^

Tick #162 Final System State after the tick:
   v   v   v
 -------------
 | C | A | X |
 -------------
   ^   ^   ^

Tick #163 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #163 Final System State after the tick:
   v   v   v
 -------------
 |   | C | A |
 -------------
   ^   ^   ^

Tick #164 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | C |
 -------------
   ^   ^   ^

Tick #164 Final System State after the tick:
   v   v   v
 -------------
 | X | C | C |
 -------------
   ^   ^   ^

Tick #165 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | C |
 -------------
   ^   ^   ^

Tick #165 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #166 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #166 Final System State after the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #167 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #167 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #168 Initial System State before the tick:
   v   v   v
 -------------
 |   | X |   |
 -------------
   ^   ^   ^

Tick #168 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #169 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #169 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #170 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #170 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #171 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #171 Final System State after the tick:
   v   v   v
 -------------
 | C |   | X |
 -------------
   ^   ^   ^

Tick #172 Initial System State before the tick:
   v   v   v
 -------------
 | A | C |   |
 -------------
   ^   ^   ^

Tick #172 Final System State after the tick:
   v   v   v
 -------------
 | X | C | C |
 -------------
   ^   ^   ^

Tick #173 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | C |
 -------------
   ^   ^   ^

Tick #173 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #174 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #174 Final System State after the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #175 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #175 Final System State after the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #176 Initial System State before the tick:
   v   v   v
 -------------
 | A |   |   |
 -------------
   ^   ^   ^

Tick #176 Final System State after the tick:
   v   v   v
 -------------
 | X |   |   |
 -------------
   ^   ^   ^

Tick #177 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #177 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #178 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #178 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #179 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | X |
 -------------
   ^   ^   ^

Tick #179 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #180 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | C |
 -------------
   ^   ^   ^

Tick #180 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #181 Initial System State before the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #181 Final System State after the tick:
   v   v   v
 -------------
 | B | X | X |
 -------------
   ^   ^   ^

Tick #182 Initial System State before the tick:
   v   v   v
 -------------
 |   | B | X |
 -------------
   ^   ^   ^

Tick #182 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #183 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #183 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #184 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | C |
 -------------
   ^   ^   ^

Tick #184 Final System State after the tick:
   v   v   v
 -------------
 | X | X | C |
 -------------
   ^   ^   ^

Tick #185 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | X |
 -------------
   ^   ^   ^

Tick #185 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #186 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #186 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #187 Initial System State before the tick:
   v   v   v
 -------------
 | B |   | C |
 -------------
   ^   ^   ^

Tick #187 Final System State after the tick:
   v   v   v
 -------------
 | B | C | C |
 -------------
   ^   ^   ^

Tick #188 Initial System State before the tick:
   v   v   v
 -------------
 |   | B | C |
 -------------
   ^   ^   ^

Tick #188 Final System State after the tick:
   v   v   v
 -------------
 | C | X | C |
 -------------
   ^   ^   ^

Tick #189 Initial System State before the tick:
   v   v   v
 -------------
 | B | C | X |
 -------------
   ^   ^   ^

Tick #189 Final System State after the tick:
   v   v   v
 -------------
 | X | C | X |
 -------------
   ^   ^   ^

Tick #190 Initial System State before the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #190 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #191 Initial System State before the tick:
   v   v   v
 -------------
 | A |   | X |
 -------------
   ^   ^   ^

Tick #191 Final System State after the tick:
   v   v   v
 -------------
 | X |   | X |
 -------------
   ^   ^   ^

Tick #192 Initial System State before the tick:
   v   v   v
 -------------
 | A | X |   |
 -------------
   ^   ^   ^

Tick #192 Final System State after the tick:
   v   v   v
 -------------
 | X | X |   |
 -------------
   ^   ^   ^

Tick #193 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #193 Final System State after the tick:
   v   v   v
 -------------
 | X | X | X |
 -------------
   ^   ^   ^

Tick #194 Initial System State before the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #194 Final System State after the tick:
   v   v   v
 -------------
 | A | X | X |
 -------------
   ^   ^   ^

Tick #195 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | X |
 -------------
   ^   ^   ^

Tick #195 Final System State after the tick:
   v   v   v
 -------------
 | C | X | X |
 -------------
   ^   ^   ^

Tick #196 Initial System State before the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Tick #196 Final System State after the tick:
   v   v   v
 -------------
 | C | C | X |
 -------------
   ^   ^   ^

Tick #197 Initial System State before the tick:
   v   v   v
 -------------
 | A | C | C |
 -------------
   ^   ^   ^

Tick #197 Final System State after the tick:
   v   v   v
 -------------
 | A | C | C |
 -------------
   ^   ^   ^

Tick #198 Initial System State before the tick:
   v   v   v
 -------------
 |   | A | C |
 -------------
   ^   ^   ^

Tick #198 Final System State after the tick:
   v   v   v
 -------------
 |   | X | C |
 -------------
   ^   ^   ^

Tick #199 Initial System State before the tick:
   v   v   v
 -------------
 |   |   | X |
 -------------
   ^   ^   ^

Tick #199 Final System State after the tick:
   v   v   v
 -------------
 |   | C | X |
 -------------
   ^   ^   ^

Delivered
A number of 20 PIECE_A cells type went out of the belt.
A number of 45 PIECE_A_B cells type went out of the belt.
A number of 98 PIECE_TAKEN cells type went out of the belt.
A number of 37 EMPTY cells type went out of the belt.
Tick #200 Final System State after the tick:
   v   v   v
 -------------
 | B |   | C |
 -------------
   ^   ^   ^

Current Belt Analysis:
A number of 1 PIECE_A_B cells type are still in the current belt.
A number of 1 PIECE_B cells type are still in the current belt.
A number of 1 EMPTY cells type are still in the current belt.

Current Workers Analysis:
Worker At row 0 and column 0 has: PIECE_A 
Worker At row 0 and column 1 has: PIECE_A 
Worker At row 0 and column 2 has: PIECE_B 
Worker At row 1 and column 0 has: PIECE_A 
Worker At row 1 and column 1 has: PIECE_A 
Worker At row 1 and column 2 has: PIECE_B 

Process finished with exit code 0

```

## How does it work
- For each belt in the system, per each tick, every two opponent workers are evaluated for whom can pick the item.
- In case that only one of them can pick the item, then the worker should go with it.
- In case that both of them can pick the item, then the one who can create a complete product has the priority.
- In case that none of them can pick the item, but any of them can place an item, then it makes sense that any of them place the completed item.
 
## Enhancements and issues to solve
- Some getter functions return references, could be replaced with setters
- Some functions receive the arguments passed by value and not constant.
- Some member functions can be constant and/or static.
- The dashboard can be static class.
- Enums could be used instead or the unordered maps for the slots types.
- No unit testing.