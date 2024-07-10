#include "hash/hash.h"
#include <bitset>

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