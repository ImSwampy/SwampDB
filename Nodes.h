#ifndef NODE_H
#define NODE_H

#include <string>
#include <bitset>
#include <vector>
#include <unordered_map>
#include "InnerNode.h"

class Node {
public:
    Node(std::string &node_name, std::vector<InnerNode> &nodes);
    std::string getName() const;
    std::bitset<32> getID() const;
    std::vector<InnerNode> getInnerNodes() const;
private:
    std::string name;
    std::bitset<32> ID;
    std::vector<InnerNode> innerNode;
    std::unordered_map<std::bitset<32>, float> links;
};


#endif
