#ifndef HASH_H
#define HASH_H
#include "Byte.h"
#include <iostream>


class Hash {
public:
    explicit Hash(std::string &content, unsigned short int layers = 3);
    void fill_hash();
    void string_to_byte();
    void add_content_to_hash();
    void set_layers(int layers);
private:
    unsigned short int layers;
    Byte::Byte hash[256];
    std::string content;
    Byte::Byte *content_byte = new Byte::Byte[content.size()];
};



#endif
