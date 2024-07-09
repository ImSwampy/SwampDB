#ifndef LAYER_4_H
#define LAYER_4_H

#include "../Layer.h"
#include "../../Byte.h"

class Layer_4 : public Layer {
public:
    Layer_4();
    static void algorithm(Byte::Byte bytes[32]);
};



#endif //LAYER_4_H
