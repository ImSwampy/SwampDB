#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include "../Byte.h"


class Layer {
public:
    Layer();
    virtual void algorithm(Byte::Byte Bitset[32]) = 0;
};


#endif //LAYER_H
