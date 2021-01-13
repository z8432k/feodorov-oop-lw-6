#include <iostream>
#include <string>
#include <ComplexNum.h>
#include <complex>
#include <cassert>

using namespace std;

int main(int argc, char** argv) {

    cout << "Lab 3" << endl << endl;

    ComplexNum cn(3, 7);
    complex<double> cn_t {3., 7.};

    ComplexNum cn2(10, 2);
    complex<double> cn2_t {10., 2.};


    auto result = cn + cn2;
    assert(result == cn_t + cn2_t);
    cout << "+ OK: " << static_cast<string>(result) << endl;

    result = cn - cn2;
    assert(result == cn_t - cn2_t);
    cout << "- OK: " << static_cast<string>(result) << endl;

    result = cn / cn2;
    assert(result == cn_t / cn2_t);
    cout << "/ OK: " << static_cast<string>(result) << endl;

    result = cn * cn2;
    assert(result == cn_t * cn2_t);
    cout << "* OK: " << static_cast<string>(result) << endl;

    assert((cn != cn2) == true);
    cout << "!= OK: " << endl;

    string num = "3+7i";
    ComplexNum eq(num);
    assert((cn == eq) == true);
    cout << "== OK: " << endl;

    exit(EXIT_SUCCESS);
}


