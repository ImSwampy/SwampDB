#include <iostream>
#include <bitset>
#include <list>
#include "InnerNode.h"

int main() {
    //std::string str;
    //std::getline(std::cin, str);
    std::bitset<8> final_string[256];
    std::bitset<8> swampy_db[8] = {0b01110011, 0b01110111, 0b01100001, 0b01101101, 0b01110000, 0b01111001, 0b01100100, 0b01100010 };

    std::cout << swampy_db[0] << std::endl;

    for (int i = 0; i < 256; i+=8) {
        for (int j = 0; j < 8; j++) {
            final_string[j] = swampy_db[j];
            std::cout << swampy_db[j] << " ";
        }
    }
}