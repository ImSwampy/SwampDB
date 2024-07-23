#include "Layer.h"

Layer::Layer(Byte::Byte (*layer)[16]) {
    for (unsigned short i = 0; i < 16; ++i) {
        for (unsigned short  j = 0; j < 16; ++j) {
            this->layer[i][j] = layer[i][j];
        }
    }
}

void Layer::rotate_layer(int deg) {
    Byte::Byte top_right = layer[0][15];
    Byte::Byte top_left = layer[0][0];
    Byte::Byte bottom_right = layer[15][0];
    Byte::Byte bottom_left = layer[15][15];
}
