#include "Layer_2.h"

Layer_2::Layer_2() = default;

void Layer_2::algorithm(int &value, size_t index) {
    switch (index%5) {
        case 1:
            value = value >> 1;
            break;
        case 2:
            value = value + ((int)index << 3 );
            break;
        case 3:
            break;
        case 4:
            value = value ^ (int)index;
            break;
        case 5:
            value = value + 3;
            break;
    }
}
