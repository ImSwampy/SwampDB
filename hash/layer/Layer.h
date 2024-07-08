#ifndef TEST_LAYER_H
#define TEST_LAYER_H

#include <iostream>

class Layer {
public:
    Layer();

    virtual void algorithm(int &value, size_t index);
};


#endif //TEST_LAYER_H
