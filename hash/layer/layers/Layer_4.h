#ifndef TEST_LAYER_4_H
#define TEST_LAYER_4_H

#include "../Layer.h"
#include "../../Byte.h"

class Layer_4 : public Layer {
public:
    Layer_4();
    void algorithm(Byte::Byte bytes[256]);
};



#endif
