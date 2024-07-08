#include "Layer_4.h"

Layer_4::Layer_4() = default;

void Layer_4::algorithm(Byte::Byte *bytes) {

    for (int i = 0; i < 256; i++) {
        switch (i%4) {
            case 0:
                bytes[i] = Byte::add(bytes[i], i/16);
                break;
            case 1:
                bytes[i] = Byte::subtract(bytes[i], i/16);
                break;
            case 2:
                bytes[i] = Byte::divide(bytes[i], i/16);
                break;
            case 3:
                bytes[i] = Byte::multiply(bytes[i], i/16);
                break;

        }
    }
}
