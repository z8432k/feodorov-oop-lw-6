#include "Composition.h"
// #include "Board.h"

Composition::operator string() const {
    string out = "  A B C D E F G H\n";

    for (short i = 0; i < BOARD_SIZE; i++) {
        out.append(to_string(i + 1) + " ");

        for (short k = 0; k < BOARD_SIZE; k++) {
            if (cells[i][k]) {
                out.append("# ");
            }
            else {
                out.append("  ");
            }
        }

        out.append("\n");
    }

    return out;
}

void Composition::set(char p1, unsigned short p2) {
    *cell(p1, p2) = true;
}

void Composition::drop(char p1, unsigned short p2) {
    *cell(p1, p2) = false;
}

bool *Composition::cell(char p1, unsigned short p2) {
    return &cells[p2 - 1][lton(p1) - 1];
}
