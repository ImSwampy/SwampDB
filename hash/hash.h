#ifndef HASH_H
#define HASH_H
#include "Byte.h"
#include <iostream>
#include <vector>
#include "layer/Layer.h"
#include "layer/layers/headers/Layer_1.h"
#include "layer/layers/headers/Layer_2.h"
#include "layer/layers/headers/Layer_3.h"
#include "layer/layers/headers/Layer_4.h"
#include "layer/layers/headers/Layer_5.h"


class Hash {
public:
    Hash();
    explicit Hash(std::string &content);
    explicit Hash(std::string &content, unsigned short int layers = 3);
    ~Hash();

    void digest();
    Byte::Byte *get();
    void display();
    void set_content(std::string &new_content);
    void set_layers(int layer_num);
private:
    void fill_hash();
    void convert_content_to_bytes();
    void add_content_to_hash();
    void layers_filter();

    unsigned short int layers;
    size_t content_size;
    Byte::Byte hash[32];
    std::string content;
    Byte::Byte *content_byte;
};



#endif
