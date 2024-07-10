#include "headers/Layer_2.h"

Layer_2::Layer_2() = default;

void Layer_2::algorithm(Byte::Byte bytes[32]) {
    for (int index = 0; index < 32; index++){
        switch (index%5) {
            case 0:
                bytes[index] = ~bytes[index];
                break;
            case 1:
                bytes[index] = bytes[index].to_ulong() + ((int)index << 3 );
                break;
            case 2:
                break;
            case 3:
                bytes[index] = bytes[index].to_ulong() ^ (int)index;
                break;
            case 4:
                bytes[index] = bytes[index].to_ulong() + 3;
                break;
        }
    }

}
