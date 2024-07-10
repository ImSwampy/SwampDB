#ifndef LAYER_6_H
#define LAYER_6_H

#include "../../Layer.h"
#include "../../../Byte.h"

class Layer_6 : public Layer {
public:
    Layer_6();
    void algorithm(Byte::Byte bytes[32]) override;
};


#endif //LAYER_6_H
