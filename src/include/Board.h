#ifndef FEODOROV_OOP_LW_4_BOARD_H
#define FEODOROV_OOP_LW_4_BOARD_H


#define BOARD_SIZE 8

using namespace std;

class Board {
protected:
    bool cells[BOARD_SIZE][BOARD_SIZE];

public:
    Board();
    ~Board() = default;

    static unsigned short lton(char letter);
    static char ntol(unsigned short number);
};


#endif //FEODOROV_OOP_LW_4_BOARD_H
