#ifndef FACTORY_PRODUCTION_LINE_SIMULATION_VARS_H
#define FACTORY_PRODUCTION_LINE_SIMULATION_VARS_H

#include "headers.h"

// An enum could be used instead of the next vector and items.
static const vector<string> BELT_SLOT_ITEM_TYPES = {"PIECE_A", "PIECE_B", "EMPTY"};
static const string BELT_SLOT_ITEM_TYPE_COMPLETED_PIECE = "PIECE_A_B";
static const string BELT_SLOT_ITEM_TYPE_PIECE_TAKEN = "PIECE_TAKEN";
static const string BELT_SLOT_ITEM_TYPE_PIECE_A = BELT_SLOT_ITEM_TYPES[0];
static const string BELT_SLOT_ITEM_TYPE_PIECE_B = BELT_SLOT_ITEM_TYPES[1];
static const string BELT_SLOT_ITEM_TYPE_EMPTY = BELT_SLOT_ITEM_TYPES[2];
static const int OFFSET_TIME_REQUIRED_FOR_COMBINING_A_B_PIECES = 4;

static unordered_map<string, string> DRAW_MAP = {
        {"EMPTY",       " "},
        {"PIECE_A",     "A"},
        {"PIECE_B",     "B"},
        {"PIECE_A_B",   "C"},
        {"PIECE_TAKEN", "X"}
};
static const string DRAW_SEPARATOR_LINE = " -------------";
static const string DRAW_SYSTEM_HEADER = "Final System State after the tick:";
static const string DRAW_SYSTEM_HEADER_INITIAL = "Initial System State before the tick:";


static const int BELT_SLOT_ITEM_TYPES_SIZE = BELT_SLOT_ITEM_TYPES.size();
static const int NUMBER_OF_BELTS = 1;
static const int NUMBER_OF_BELT_SIDES = 2;
static const int NUMBER_OF_BELT_SLOTS = 3;
static const int NUMBER_OF_WORKERS_PER_BELT_SIDE = NUMBER_OF_BELT_SLOTS;
static const int NUMBER_OF_SYSTEM_TICKS = 200;

#endif //FACTORY_PRODUCTION_LINE_SIMULATION_VARS_H