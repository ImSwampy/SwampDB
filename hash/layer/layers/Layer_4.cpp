#include "headers/Layer_4.h"

Layer_4::Layer_4() = default;

void Layer_4::algorithm(Byte::Byte bytes[32]) {
    for (int i = 0; i < 32; i++) {
        switch (i%4) {
            case 0:
                bytes[i] = Byte::add(bytes[i], i);
                break;
            case 1:
                bytes[i] = Byte::subtract(bytes[i], i);
                break;
            case 2:
                bytes[i] = Byte::divide(bytes[i], i);
                break;
            case 3:
                bytes[i] = Byte::multiply(bytes[i], i);
                break;

        }
    }
}
