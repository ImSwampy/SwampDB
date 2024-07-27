#include "hash.h"

Hash::Hash() {
    content = "";
}

Hash::~Hash() {
    delete [] content_byte;
}

void Hash::content_to_bytes() {
    content_size = content.size();
    content_byte = new Byte::Byte[content_size];
    for (size_t i = 0; i < content_size; ++i) {
        content_byte[i] = Byte::Byte(content[i]);
    }
}

void Hash::fill_hash() {
    Byte::Byte layer[16][16];
}

void Hash::display() const {
    for (auto byte : hash) {
        std::cout << byte.to_string() << " ";
    }
}

void Hash::create_layers() {

}

void Hash::digest() {

}

void Hash::set_content(std::string &new_content) {
    content = new_content;
}

Byte::Byte *Hash::get() {
    return hash;
}

void Hash::set_seed(size_t hash_seed) {
    seed = hash_seed;
}
size_t Hash::get_seed() const {
    return seed;
}
