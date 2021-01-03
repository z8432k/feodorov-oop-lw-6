#ifndef FEODOROV_OOP_LW_3
#define FEODOROV_OOP_LW_23

#include <string>

using namespace std;

class ComplexNum {
private:
    double r;
    double i;

public:
    ComplexNum() = default;
    // Copy
    ComplexNum(double r, double i);

    ~ComplexNum() = default;
};


#endif //FEODOROV_OOP_LW_2
