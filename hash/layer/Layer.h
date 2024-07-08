#ifndef LAYER_H
#define LAYER_H

#include <iostream>

class Layer {
public:
    Layer();

    virtual void algorithm(int &value, size_t index);
};


#endif //LAYER_H
