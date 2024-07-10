#ifndef LAYER_2_H
#define LAYER_2_H

#include "../../Layer.h"
#include "../../../Byte.h"

class Layer_2 : public Layer {
public:
    Layer_2();
    void algorithm(Byte::Byte bytes[32]) override;
};



#endif //LAYER_2_H
