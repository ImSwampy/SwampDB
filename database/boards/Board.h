#ifndef TEST_BOARD_H
#define TEST_BOARD_H

#include <vector>
#include "../nodes/Nodes.h"
#include "/board_types/Board_Preset.h"

typedef enum {
    HIERARCHICAL,
    INDIVIDUAL,
    GROUP,
} board_types;

typedef enum {
    UNI_DIRECTIONAL,
    BI_DIRECTIONAL
} link_types;

class Board {
public:
    Board();
    Board(board_types boardTypes, link_types linkType);

    void set_type();
    void get_type();
private:
    Board_Preset board;
    board_types board_type;
    link_types link_type;

};


#endif
