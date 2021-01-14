#include "Dim.h"

Dim::Dim() {
    dim = new float[DIM_ARRAY_SIZE]();
}

Dim::~Dim() {
    delete dim;
}

float Dim::operator[](size_t idx) {
    return dim[idx];
}
