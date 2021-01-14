#include <iostream>
#include <string>
#include <Composition.h>
#include <cassert>

using namespace std;

int main(int argc, char** argv) {

    cout << "Lab 4" << endl << endl;

    Composition composition;

    cout << "Letter A to num: " << Composition::lton('A') << endl;
    cout << "Num 8 to letter: " << Composition::ntol(8) << endl;

    cout << endl << endl;

    composition.set('a', 2);
    composition.set('b', 3);
    composition.set('c', 4);

    cout << static_cast<string>(composition);

    composition.drop('b', 3);

    cout << static_cast<string>(composition);

    exit(EXIT_SUCCESS);
}


