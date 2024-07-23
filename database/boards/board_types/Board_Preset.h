#ifndef TEST_BOARD_PRESET_H
#define TEST_BOARD_PRESET_H

#include <vector>
#include "../../nodes/Nodes.h"

class Board_Preset {
    void add_node(Node *node);
    void remove_node(Byte::Byte node_ID);
    void add_innerNode(Node *node, InnerNode innerNode);
    void remove_innerNode(Node *node, Byte::Byte innerNode_ID);
    void get_node_data(Byte::Byte node_ID);
    void set_node_data(Byte::Byte node_ID);
private:
    void re_hash(Node *node);
    void re_hash(Byte::Byte *node_ID);
    std::vector<Node> board_content;
};


#endif //TEST_BOARD_PRESET_H
