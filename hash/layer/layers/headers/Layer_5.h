#ifndef LAYER_5_H
#define LAYER_5_H

#include "../../Layer.h"
#include "../../../Byte.h"

class Layer_5 : public Layer {
public:
    Layer_5();
    void algorithm(Byte::Byte bytes[32]) override;
};

#endif // LAYER_5_H
