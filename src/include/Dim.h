#ifndef FEODOROV_OOP_LW_5_DIM_H
#define FEODOROV_OOP_LW_5_DIM_H


#include <cstddef>

#define DIM_ARRAY_SIZE 12

class Dim {
private:
    float *dim;
public:
    Dim();
    ~Dim();

    float operator [] (size_t idx);
};


#endif //FEODOROV_OOP_LW_5_DIM_H
