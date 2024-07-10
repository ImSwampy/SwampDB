#include "hash/hash.h"
#include <bitset>
#include <map>
#include <random>
#include "hash/Byte.h"

void test_hash(size_t loop_number, unsigned int min_size, unsigned int max_size) {

    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890&é~\"#'{([-|è`_\\ç^à@)]^¨$£%ù*,?;.:/!";


    std::map<std::string, Byte::Byte[32]> hashes;

    for (int index = 0; index<loop_number; index++) {
        unsigned length = std::rand()% max_size + min_size;
        auto *random_string = new std::string('a'+rand());


    }
}

int main() {
    std::string str1 = "je suis un kk mou";
    std::string str2 = "joseph likes big woman penis in his butthole";
    std::string str3 = "skibidi toilets";
    Hash hash(str1);
    hash.set_layers(5);
    hash.digest();
    hash.display();
    std::cout << std::endl << std::endl;
    hash.set_content(str2);
    hash.digest();
    hash.display();
    std::cout << std::endl << std::endl;
    hash.set_content(str3);
    hash.digest();
    hash.display();
}