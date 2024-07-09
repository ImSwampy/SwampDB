#include "hash.h"

void Hash::set_layers(int layer_num) {
    if (1 > layer_num) {
        layers = 1;
        std::cerr << "Hash need at least 1 layer !" << std::endl;
    } else if (layer_num > 9) {
        layers = 9;
        std::cerr << "Hash need at maximum 9 layers !" << std::endl;
    }
}



void Hash::add_content_to_hash() {
    unsigned short int hash_index = 0;
    for (int index = 0; index < content_byte->size(); index++) {
        if (hash_index >= 255) {
            hash_index = 0;
        }
        hash[hash_index] = Byte::add(hash[hash_index], content_byte[index]);
    }
}

void Hash::string_to_byte() {
    for (size_t i = 0; i < content.size(); i++) {;
        content_byte[i] = Byte::Byte(content[i]);
    }
}

void Hash::fill_hash() {
    Byte::Byte swampy_db[8] = {
            0b01110011, 0b01110111, 0b01100001, 0b01101101, 0b01110000, 0b01111001, 0b01100100, 0b01100010
    };
    for (int i = 0; i < 32; i++) {
        hash[i] = swampy_db[i % 8];
    }
}

Hash::Hash(std::string &content, unsigned short int layers) : content(content), layers(layers)  {
    if (1 > layers) {
        layers = 1;
        std::cerr << "Hash need at least 1 layer !" << std::endl;
    } else if (layers > 9) {
        layers = 9;
        std::cerr << "Hash need at maximum 9 layers !" << std::endl;
    }
}

void Hash::display() {
    for (auto byte : hash) {
        std::cout << byte.to_string() << " ";
    }
}

void Hash::layers_filter() {
    Layer *local_layers[5] = {new Layer_1(), new Layer_2(), new Layer_3(), new Layer_4(), new Layer_5()};
    for (int i = 0; i <= layers-1; i++) {
        local_layers[i]->algorithm(hash);
    }

}

void Hash::digest() {
    fill_hash();
    string_to_byte();
    add_content_to_hash();
    layers_filter();
}
