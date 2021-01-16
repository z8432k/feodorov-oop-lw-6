#ifndef FEODOROV_OOP_LW_6_THINGGENERATOR_H
#define FEODOROV_OOP_LW_6_THINGGENERATOR_H

#include <random>

#define RANGE_FROM -10
#define RANGE_TO 10

using namespace std;


template <typename T>
class ThingGenerator {
private:
    default_random_engine generator;
    uniform_int_distribution<T> *distribution;
public:
    ThingGenerator(T from, T to) {
        distribution = new uniform_int_distribution<T>(from, to);
    }

    ~ThingGenerator() {
        delete distribution;
    }

    T operator()() {
        return (*distribution)(generator);
    };
};

#endif //FEODOROV_OOP_LW_6_THINGGENERATOR_H
