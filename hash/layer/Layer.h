#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include "../Byte.h"


class Layer {
public:
    Layer(Byte::Byte (*layer)[16]);

    void rotate_layer(int deg);

private:
    Byte::Byte layer[16][16];
};


#endif //LAYER_H
