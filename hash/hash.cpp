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
    if (content_size == 0 || content_byte == nullptr) {
        std::cerr << "You need to convert content to bytes first!" << std::endl;
        return;
    }

    unsigned short int hash_index = 0;
    for (int index = 0; index < content.size(); index++) {
        if (hash_index >= 32) {
            hash_index = 0;
        }

        hash[hash_index] = Byte::add(hash[hash_index], content_byte[index]);
        hash_index++;
    }
}


void Hash::convert_content_to_bytes() {
    content_size = content.size();
    content_byte = new Byte::Byte[content_size];
    for (size_t i = 0; i < content_size; ++i) {
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
    Layer *local_layers[] = {new Layer_1(), new Layer_2(), new Layer_3(), new Layer_4(), new Layer_5()};
    for (int i = 0; i < layers; i++) {
        local_layers[i]->algorithm(hash);
    }
    for (Layer *layer : local_layers) {
        delete &layer;
    }
}


void Hash::digest() {
    fill_hash();
    convert_content_to_bytes();
    add_content_to_hash();
    layers_filter();
}

void Hash::set_content(std::string &new_content) {
    content = new_content;
}

Hash::~Hash() {
    delete [] content_byte;
}
