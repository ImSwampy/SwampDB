#include <any>
#include <iostream>
#include <bitset>
#include <list>
#include "InnerNode.h"

void fill_hash(std::bitset<8> *string[256]) {

    std::bitset<8> swampy_db[8] = {
        0b01110011, 0b01110111, 0b01100001, 0b01101101, 0b01110000, 0b01111001, 0b01100100, 0b01100010
    };

    for (int i = 0; i < 256; i++) {
        string[i] = &swampy_db[i % 8];
    }
};

void add_content_to_hash(std::bitset<8> *hash[256], const std::string &content) {

}

int main() {
    std::bitset<8> *final_string[256];

    fill_hash(final_string);

    for (int i = 0; i < 256; i++) {
        std::cout << *final_string[i] << " ";
    }
}