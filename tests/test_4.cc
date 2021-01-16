#include <iostream>
#include <string>
#include <cassert>
#include <limits>
#include <cmath>
#include <TheThing.h>

using namespace std;

int main(int argc, char** argv) {
    float init[] = {3, -3, 0.5, 8, -0.85};
    TheThing dim (init, sizeof(init) / sizeof(float));
    assert(dim.sum() == 8.5);

    float init2[] = {3, -3, 0.5, 8, 0.11, 1, 0.85};
    TheThing dim2 (init2, sizeof(init2) / sizeof(float));
    assert(dim2.sum() == 0);

    float init3[] = {3, 3, 0.5, 8, 0.11, 1, -0.85};
    TheThing dim3 (init3, sizeof(init3) / sizeof(float));
    assert(dim3.sum() == 0);

    float init4[] = {3, -3, 0.5, -8, 0.11, 1, -0.85};
    TheThing dim4 (init4, sizeof(init4) / sizeof(float));
    assert(dim4.sum() == 0.5);

    float init5[] = {3, -3, -0.5, 8, 0.11, 1, -0.85};
    TheThing dim5 (init5, sizeof(init5) / sizeof(float));
    assert(dim5.sum() == 0);

    float init6[] = {-3, 3, 0.5, 8, 0.12, 1, -0.85};
    TheThing dim6 (init6, sizeof(init6) / sizeof(float));
    assert(fabs(dim6.sum() - 12.62) <= std::numeric_limits<float>::epsilon());

    exit(EXIT_SUCCESS);
}


