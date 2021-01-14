#include <sstream>
#include "Dim.h"
#include <iostream>
#include <utility>
#include <cmath>


Dim::Dim() {
    dim = new float[dimSize];
}

Dim::~Dim() {
    delete dim;
}

float Dim::operator[](size_t idx) {
    return dim[idx];
}

Dim::Dim(const float init[], size_t size) : Dim() {
    for (size_t i = 0; i < dimSize && i < size; i++) {
        dim[i] = init[i];
    }
}

Dim::operator string() const {
    stringstream out;

    for (size_t i = 0; i < dimSize; i++) {
        out << dim[i] << " ";
    }

    return out.str();
}

size_t Dim::minAt() const {
    size_t pos {0};
    float min {dim[pos]};

    for (size_t i = 1; i < dimSize; i++) {
        if (dim[i] < min) {
            min = dim[i];
            pos = i;
        }
    }

    return pos;
}

float Dim::sum() const {
    float sum {0};
    bool loop {false};

    for (size_t i = 1; i < dimSize; i++) {
        if (dim[i] < 0 && !loop) {
            loop = true;
            continue;
        }

        if (dim[i] < 0 && loop) {
            loop = false;
            break;
        }

        if (loop) {
            sum += dim[i];
        }
    }

    if (loop) {
        sum = 0;
    }

    return sum;
}

void Dim::reorder() {
    float *candidate = &dim[0];
    float *current;

    for (size_t i = 1; i < dimSize; i++) {
        current = &dim[i];

        if (candidate == current) {
            continue;
        }

        if (fabs(*current) <= 1) {
            swap(*candidate, *current);
            candidate++;
        }
    }
}

