#include "hash.h"

/*void fill_hash(Bytes::Byte *string[256]) {

    Bytes::Byte swampy_db[8] = {
            0b01110011, 0b01110111, 0b01100001, 0b01101101, 0b01110000, 0b01111001, 0b01100100, 0b01100010
    };

    for (int i = 0; i < 256; i++) {
        string[i] = &swampy_db[i % 8];
    }
};
*/
void Hash::set_layers(int layers) {

}

void Hash::add_content_to_hash() {

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
    for (int i = 0; i < 256; i++) {
        if (hash[i].to_string() == "00000000") {
            hash[i] = swampy_db[i % 8];
        }
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
