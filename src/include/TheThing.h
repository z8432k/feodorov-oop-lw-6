#ifndef FEODOROV_OOP_LW_5_THETHING_H
#define FEODOROV_OOP_LW_5_THETHING_H

#include <cstddef>
#include <string>
#include <vector>
#include <iostream>
#include <ThingGenerator.h>


using namespace std;

template <typename T>
class TheThing {
private:
    vector<T> data {};
    ThingGenerator<T> *generator;
public:
    TheThing(ThingGenerator<T>* generator, size_t cnt) {
        this->generator = generator;

        T item;
        for (size_t i = 1; i <= cnt; i++) {
            item = (*generator)();
            data.push_back(item);
        }
    }
    ~TheThing() = default;

    T operator [] (size_t idx);
    explicit operator string() const;

    void reverse() {
        size_t size = data.size();

        for (size_t i = 0, k = size - 1; i < size / 2; i++, k--) {
            swap(data[i], data[k]);
        }
    }};


#endif //FEODOROV_OOP_LW_5_THETHING_H
