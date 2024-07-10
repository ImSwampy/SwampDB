#include "headers/Layer_5.h"

Layer_5::Layer_5() = default;

void Layer_5::algorithm(Byte::Byte bytes[32]) {
    for (int index = 0; index < 32 / 4; index++) {

        Byte::Byte *curr_byte = &bytes[index];
        Byte::Byte *next_byte = &bytes[index + 1];

        *next_byte = (*next_byte | *curr_byte) >> 1;
        *curr_byte = *curr_byte & bytes[31 - index];
    }
}
