#include <iostream>
#include <string>
#include <cassert>
#include <TheThing.h>

using namespace std;

int main(int argc, char** argv) {

    ThingGenerator<short> generator(RANGE_FROM, RANGE_TO);
    TheThing<short> thing(&generator, 12);

    cout << static_cast<string>(thing) << endl;

    thing.forEach([](short x) -> void {
        cout << (( x < 0 ) ? 0 : x * 2) << "\t";
    });

    cout << endl;

    exit(EXIT_SUCCESS);
}


