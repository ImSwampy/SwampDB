#ifndef LAYER_1_H
#define LAYER_1_H

#include "../Layer.h"

class Layer_1 : public Layer {
public:
    Layer_1();
    void algorithm(int &value, size_t index) override;
};


#endif
