#include "hash/hash.h"
#include "hash/layer/Layer.h"
#include "hash/Byte.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

int main() {
    /*
    std::string str1 = "je suis un kk mou";
    std::string str2 = "joseph likes big woman penis in his butthole";
    std::string str3 = "skibidi toilets";
    Hash hash;
    hash.set_content(str1);
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
    */

    Byte::Byte arr[3][3] = {{1, 1, 1}, {0, 0, 0}, {0, 0, 0}};

    Layer layer(arr);
}