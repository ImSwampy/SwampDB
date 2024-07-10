#include "headers/Layer_1.h"

Layer_1::Layer_1() = default;

void Layer_1::algorithm(Byte::Byte bytes[32]) {
    for (int index = 0; index < 32; index++) {
        auto *value = &bytes[index];
        if (index % 2 != 0) {
            *value = (value->to_ulong() << 2);
        }  else {
            *value = value->to_ulong() & 3;
        }
    }

}
