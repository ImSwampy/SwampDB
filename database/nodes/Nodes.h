#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>
#include <unordered_map>
#include "inner_nodes/InnerNode.h"
#include "../../hash/Byte.h"

class Node {
public:
    Node(std::string &node_name, std::vector<InnerNode> &nodes);
    std::string getName() const;
    std::bitset<32> getID() const;
    std::vector<InnerNode> getInnerNodes() const;
private:
    std::string name;
    Byte::Byte ID;
    std::vector<InnerNode> innerNode;
    std::unordered_map<std::bitset<32>, float> links;
};


#endif
