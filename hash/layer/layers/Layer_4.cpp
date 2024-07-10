#include "headers/Layer_4.h"

Layer_4::Layer_4() = default;

void Layer_4::algorithm(Byte::Byte bytes[32]) {
    Byte::Byte *byte = nullptr;
    for (int i = 0; i < 32; i++) {
        byte = &bytes[i];
        switch (i%4) {
            case 0:
                *byte = Byte::add(bytes[i], i);
                break;
            case 1:
                *byte = Byte::subtract(bytes[i], i);
                break;
            case 2:
                *byte = Byte::divide(bytes[i], i);
                break;
            case 3:
                *byte = Byte::multiply(bytes[i], i);
                break;

        }
    }
}
