
#ifndef TEST_INNERNODE_H
#define TEST_INNERNODE_H

#include <variant>
#include <string>

class InnerNode {
public:
    InnerNode(std::string &innerNode_name, std::string &innerNode_type, std::string &innerNode_content);
    std::string getType();
    std::string getName();
    std::string getContent();
    void setContent(std::string &new_content);
    std::string getID();
private:
    std::string name;
    std::string type;
    std::string content;
    std::string ID;
};



#endif //TEST_INNERNODE_H
