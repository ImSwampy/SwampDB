#include "Layer_3.h"

Layer_3::Layer_3() = default;

void Layer_3::algorithm(Byte::Byte *bytes) {

    unsigned short int buffer = 0;

    for (int i = 0; i < 256; i++) {

        bytes[i] = bytes[buffer] & bytes[i];

        if (buffer >= 5) {
            buffer = 0;
        } else {
            buffer++;
        }
    }
}
