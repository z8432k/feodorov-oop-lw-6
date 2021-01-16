#ifndef FEODOROV_OOP_LW_5_THETHING_H
#define FEODOROV_OOP_LW_5_THETHING_H

#include <cstddef>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <functional>
#include <algorithm>
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

    explicit operator string() const {
        stringstream out;

        size_t i = 0;
        for (auto item: data) {
            if (i != 0) {
                out << "\t";
            }

            out << item;

            i++;
        }

        return out.str();
    }

    void reverse() {
        size_t size = data.size();

        for (size_t i = 0, k = size - 1; i < size / 2; i++, k--) {
            swap(data[i], data[k]);
        }
    }

    void forEach(function<void (T)> cb) {
        for_each(data.begin(), data.end(), cb);
    }

    size_t countNonZero() {
        size_t result = 0;

        this->forEach([&](T item) -> void {
            if (item != 0) {
                result++;
            }
        });

        return result;
    }
};


#endif //FEODOROV_OOP_LW_5_THETHING_H
