#ifndef TEST_LAYER_3_H
#define TEST_LAYER_3_H

#include "../Layer.h"
#include "../../Byte.h"

class Layer_3 : public Layer {
public:
    Layer_3();
    void algorithm(Byte::Byte bytes[256]);
};



#endif //TEST_LAYER_3_H
