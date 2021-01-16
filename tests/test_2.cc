#include <iostream>
#include <string>
#include <cassert>
#include <TheThing.h>
#include <TheThing.h>

using namespace std;

int main(int argc, char** argv) {

    ThingGenerator<short> generator(RANGE_FROM, RANGE_TO);
    TheThing<short> thing(&generator, 12);

    thing.reverse();

    exit(EXIT_SUCCESS);
}


