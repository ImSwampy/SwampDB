#include "Nodes.h"

Node::Node(std::string &node_name, std::vector<InnerNode> &nodes) : name(node_name), innerNode(nodes) {

}

std::string Node::getName() const {
    return name;
}

std::bitset<256> Node::getID() const {
    return ID;
}

std::vector<InnerNode> Node::getInnerNodes() const {
    return innerNode;
}
