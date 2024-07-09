#include "hash/hash.h"
#include <bitset>

int main() {
    std::string str = "je suis un kk mou";
    Hash hash(str);
    hash.digest();
    hash.display();
}