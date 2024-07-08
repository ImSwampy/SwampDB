#ifndef LAYER_2_H
#define LAYER_2_H

#include "../Layer.h"

class Layer_2 : public Layer {
public:
    Layer_2();
    void algorithm(int &value, size_t index) override;
};



#endif //LAYER_2_H
