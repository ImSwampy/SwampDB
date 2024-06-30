#include "InnerNode.h"

InnerNode::InnerNode(std::string &innerNode_name, std::string &innerNode_type, std::string &innerNode_content) : name(innerNode_name), type(innerNode_type), content(innerNode_content) {
    ID = "";
};

std::string InnerNode::getID() {
    return ID;
}

std::string InnerNode::getContent() {
    return content;
}

void InnerNode::setContent(std::string &new_content) {
    content = new_content;
}

std::string InnerNode::getType() {
    return type;
}

std::string InnerNode::getName() {
    return name;
}
