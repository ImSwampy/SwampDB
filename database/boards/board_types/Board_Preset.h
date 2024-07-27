#ifndef TEST_BOARD_PRESET_H
#define TEST_BOARD_PRESET_H

#include <vector>
#include <hash_map>
#include "../../nodes/Nodes.h"

class Board_Preset {
    void add_node(Node *node);
    void remove_node(Byte::Byte *node_ID[]);
    void add_innerNode(Node *node, InnerNode innerNode);
    void remove_innerNode(Node *node, Byte::Byte innerNode_ID);
    Node get_node_data(Byte::Byte node_ID);
    void set_node_data(Byte::Byte node_ID);
private:
    void re_hash(Node *node);
    void re_hash(Byte::Byte *node_ID);
    std::vector<Node> board_content;
    std::unordered_map<Byte::Byte[32], size_t> record;
    std::unordered_map<Byte::Byte[], Byte::Byte[32]> log;
};


struct hashmap_hashing {
    template<typename T1>
    auto operator()(const T1) const -> size_t {

    }
}


#endif //TEST_BOARD_PRESET_H
