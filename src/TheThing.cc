#include <TheThing.h>
#include <iostream>
#include <utility>

template<typename T>
T TheThing<T>::operator[](size_t idx) {
    return data[idx];
}




