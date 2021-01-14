#include <iostream>
#include <string>
#include <cassert>
#include <Dim.h>

using namespace std;

int main(int argc, char** argv) {

    cout << "Lab 5" << endl << endl;

    float init[] = {3, -3, 0.5, 8, 0.11, 1, -0.85};

    Dim dim (init, sizeof(init) / sizeof(float));

    assert(dim.minAt() == 1);

    exit(EXIT_SUCCESS);
}


