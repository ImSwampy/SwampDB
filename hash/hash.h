#ifndef HASH_H
#define HASH_H
#include "Byte.h"
#include <iostream>
#include <vector>
#include "layer/Layer.h"

class Hash {
public:
    Hash();
    ~Hash();

    void digest();
    Byte::Byte *get();
    void display() const;
    void set_content(std::string &new_content);
    void set_seed(size_t hash_seed);
    size_t get_seed() const;
private:
    void create_layers();
    void fill_hash();
    void content_to_bytes();


    size_t seed;
    size_t content_size;
    Byte::Byte hash[32];
    std::string content;
    Byte::Byte *content_byte;
};



#endif
