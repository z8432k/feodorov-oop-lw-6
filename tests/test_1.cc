#include <iostream>
#include <string>
#include <cassert>
#include <ThingGenerator.h>


using namespace std;

int main(int argc, char** argv) {
    ThingGenerator<short> gen(RANGE_FROM, RANGE_TO);

    gen();
    gen();
    gen();
    gen();
    gen();
    gen();

    exit(EXIT_SUCCESS);
}


