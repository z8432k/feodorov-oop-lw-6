#include <sstream>
#include <TheThing.h>
#include <iostream>
#include <utility>

template<typename T>
T TheThing<T>::operator[](size_t idx) {
    return data[idx];
}

template<typename T>
TheThing<T>::operator string() const {
    stringstream out;

    for (auto item: data) {
        out << item;
    }

    return out.str();
}



