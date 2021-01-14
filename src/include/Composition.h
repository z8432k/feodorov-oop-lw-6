#ifndef FEODOROV_OOP_LW_4_COMPOSITION_H
#define FEODOROV_OOP_LW_4_COMPOSITION_H

#include <string>
#include <Board.h>

using namespace std;


class Composition : public Board {
public:
    explicit operator string() const;
    void set(char p1, unsigned short p2);
    void drop(char p1, unsigned short p2);

private:
    bool* cell(char p1, unsigned short p2);
};


#endif //FEODOROV_OOP_LW_4_COMPOSITION_H
