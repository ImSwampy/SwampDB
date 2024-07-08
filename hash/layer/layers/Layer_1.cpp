#include "Layer_1.h"

Layer_1::Layer_1() = default;

void Layer_1::algorithm(int &value, size_t index) {
    if (index % 2 != 0) {
        value = value << 2;
    }  else {
        value = value & 3;
    }
}


