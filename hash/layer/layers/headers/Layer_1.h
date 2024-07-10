#ifndef LAYER_1_H
#define LAYER_1_H

#include "../../Layer.h"
#include "../../../Byte.h"

class Layer_1 : public Layer {
public:
    Layer_1();
    void algorithm(Byte::Byte bytes[32]) override;
};


#endif
