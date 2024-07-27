#include "Layer.h"

Layer::Layer() = default;


void Layer::fill_layer(Byte::Byte *value) {
    for (unsigned short i = 0; i < 16; ++i) {
        for (unsigned short  j = 0; j < 16; ++j) {
            layer[i][j] = value[i+j];
        }
    }
}
