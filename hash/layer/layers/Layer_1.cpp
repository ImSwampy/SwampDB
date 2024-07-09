#include "Layer_1.h"

Layer_1::Layer_1() = default;

void Layer_1::algorithm(Byte::Byte *bytes) {
    for (int index = 0; index < 32; index++) {
        auto value = bytes[index].to_ulong();
        if (index % 2 != 0) {
            value = value << 2;
        }  else {
            value = value & 3;
        }
    }

}
