#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include "../Byte.h"


class Layer {
public:
    Layer();
    void fill_layer(Byte::Byte *value);
private:
    Byte::Byte layer[16][16];
};


#endif //LAYER_H
