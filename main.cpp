#include <iostream>
#include "Hero.h"
#include "Board.h"

using namespace std;

int main() {
    srand( time( NULL ) );
    Warrior p1("Wojownik");
    Rogue p2("Lotr");
    Board b1(&p1,&p2);
    b1.start();

    return 0;
}