#ifndef PROJEKTPO_ROGUE_H
#define PROJEKTPO_ROGUE_H

#include "Hero.h"

class Rogue : public Hero {
    friend class Board;
    //szansa na unik
    int dodge;
    //szansa na cios krytyczny
    int critic;
public:
    int attack() override;
    explicit Rogue(const string &name);
    void takeDamage(int damage) override;
    void itemPickUp(Item &it) override;
};


#endif //PROJEKTPO_ROGUE_H
