#include <cctype>
#include <iostream>
#include "Board.h"

#define ASCII_LETTER_OFFSET 96

Board::Board() {
    for (short i = 0; i < BOARD_SIZE; i++) {
        for (short k = 0; k < BOARD_SIZE; k++) {
            cells[i][k] = false;
        }
    }
}

unsigned short Board::lton(char letter){
    char l = static_cast<char>(std::tolower(letter));

    l -= ASCII_LETTER_OFFSET;

    if (l > 8 || l < 1) {
        cerr << "Wrong letter:" << letter << endl;
        exit(EXIT_FAILURE);
    }

    return static_cast<unsigned short>(l);
}

char Board::ntol(unsigned short number){
    if (number > 8 || number < 1) {
        cerr << "Wrong number:" << number << endl;
        exit(EXIT_FAILURE);
    }

    return static_cast<char>(number + ASCII_LETTER_OFFSET);
}
