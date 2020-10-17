#ifndef PROJEKTPO_WARRIOR_H
#define PROJEKTPO_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {
    friend class Board;
    //czas odnowienia mikstury
    int cooldown;
    int maxHp;
    //uzycie mikstury leczacej
    void usePotion();
    int armor;
public:
    int attack() override;
    //zwraca wartosc pancerza
    int getArmor();
    void takeDamage(int damage) override;
    explicit Warrior(const string &name);
    void itemPickUp(Item &it) override;




};


#endif //PROJEKTPO_WARRIOR_H
