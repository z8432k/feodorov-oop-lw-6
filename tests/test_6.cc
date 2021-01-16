#include <string>
#include <cassert>
#include <TheThing.h>
#include <stdexcept>

using namespace std;

int main(int argc, char** argv) {
    float init[] {3, -3, 0.5, 8, -0.85};
    TheThing dim (init, sizeof(init) / sizeof(float));

    try {
        dim[DIM_ARRAY_SIZE];
    }
    catch (out_of_range &e) {
        exit(EXIT_SUCCESS);
    }

    exit(EXIT_FAILURE);
}


