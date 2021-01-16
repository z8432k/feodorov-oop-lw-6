#include <iostream>
#include <string>
#include <TheThing.h>

using namespace std;

int main(int argc, char** argv) {
    ThingGenerator<short> generator(RANGE_FROM, RANGE_TO);
    TheThing<short> thing(&generator, 12);

    cout << static_cast<string>(thing) << endl;

    cout << thing.countNonZero() << endl;

    exit(EXIT_SUCCESS);
}


