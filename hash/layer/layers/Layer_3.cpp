#include "headers/Layer_3.h"

Layer_3::Layer_3() = default;

void Layer_3::algorithm(Byte::Byte bytes[32]) {
    unsigned short int buffer = 0;

    for (int i = 0; i < 32; i++) {
        bytes[i] = ~bytes[buffer];
        bytes[i] = Byte::add(bytes[i], 0b00000001*buffer);

        if (buffer >= 5) {
            buffer = 0;
        } else {
            buffer++;
        }
    }
}
