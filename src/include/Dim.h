#ifndef FEODOROV_OOP_LW_5_DIM_H
#define FEODOROV_OOP_LW_5_DIM_H


#include <cstddef>
#include <string>

#define DIM_ARRAY_SIZE 14

using namespace std;

class Dim {
private:
    float *dim;
public:
    Dim();
    Dim(const float* init, size_t size);
    ~Dim();

    float operator [] (size_t idx);
    explicit operator string() const;
    size_t minAt() const;
    float sum() const;
    Dim* reorder();

    static const size_t dimSize {DIM_ARRAY_SIZE};
};


#endif //FEODOROV_OOP_LW_5_DIM_H
