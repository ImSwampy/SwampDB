#ifndef TEST_NODE_H
#define TEST_NODE_H

#include <string>
#include <bitset>
#include <vector>
#include <unordered_map>
#include "InnerNode.h"

class Node {
public:
    Node(std::string &node_name, std::vector<InnerNode> &nodes);
    std::string getName() const;
    std::bitset<256> getID() const;
    std::vector<InnerNode> getInnerNodes() const;
private:
    std::string name;
    std::bitset<256> ID;
    std::vector<InnerNode> innerNode;
    std::unordered_map<std::bitset<256>, float> links;
};


#endif
