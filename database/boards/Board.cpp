#include "Board.h"

Board::Board() {
    link_type = UNI_DIRECTIONAL;
}

Board::Board(board_types boardTypes, link_types linkType) : board_type(boardTypes), link_type(linkType) {

};
