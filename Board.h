#ifndef PROJEKTPO_BOARD_H
#define PROJEKTPO_BOARD_H
#include <iostream>
#include "Warrior.h"
#include "Rogue.h"
#include "Item.h"
using namespace std;

class Board {
    Warrior * hero1;
    Rogue * hero2;
    Item item;
    Item item2;
public:
    Board(Warrior * h1, Rogue * h2);
    //start symulacji
    void start();
    //zaczyna walke
    void fight();
    //zwraca imie zwyciezcy
    string getWinner() const;
    //sprawdza czy elementy sa na tej samej pozycji
    bool samePos(Warrior * war, Item & it) const;
    bool samePos(Rogue * rog, Item & it) const;
    bool samePos(Warrior * war, Rogue * rog) const;
};


#endif //PROJEKTPO_BOARD_H
