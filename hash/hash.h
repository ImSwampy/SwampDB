#ifndef HASH_H
#define HASH_H
#include "Byte.h"
#include <iostream>
#include <vector>
#include "layer/Layer.h"
#include "layer/layers/Layer_1.h"
#include "layer/layers/Layer_2.h"
#include "layer/layers/Layer_3.h"
#include "layer/layers/Layer_4.h"
#include "layer/layers/Layer_5.h"


class Hash {
public:
    explicit Hash(std::string &content, unsigned short int layers = 3);
    void digest();
    void display();
private:
    void fill_hash();
    void string_to_byte();
    void add_content_to_hash();
    void set_layers(int layer_num);
    void layers_filter();

    unsigned short int layers;
    Byte::Byte hash[32];
    std::string content;
    Byte::Byte *content_byte = new Byte::Byte[content.size()];
};



#endif
