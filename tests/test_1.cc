#include <iostream>
#include <string>
#include <cassert>
#include <Dim.h>

using namespace std;

int main(int argc, char** argv) {

    cout << "Lab 5" << endl << endl;

    float init[] = {1, -3, 5, 8, 10};

    Dim dim (init, sizeof(init) / sizeof(float));

    cout << dim[0] << endl;

    cout << static_cast<string>(dim) << endl;

    cout << dim.minAt() << endl;

    cout << dim.sum() << endl;

    exit(EXIT_SUCCESS);
}


