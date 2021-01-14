#include <iostream>
#include <string>
#include <cassert>
#include <Dim.h>

using namespace std;

int main(int argc, char** argv) {

    float init[] = {3, -3, 0.5, 8, 0.11, 1, -0.85};

    Dim dim (init, sizeof(init) / sizeof(float));

    string test = "3 -3 0.5 8 0.11 1 -0.85 0 0 0 0 0 0 0";
    string check = static_cast<string>(dim);

    assert(check == test);

    exit(EXIT_SUCCESS);
}


