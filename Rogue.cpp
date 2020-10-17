#include "Rogue.h"

Rogue::Rogue(const string &name) : Hero(name, 80)
{
    dodge = 5;
    critic = 5;
}

void Rogue::takeDamage(int damage) {
    if (rand() % dodge+1 != dodge)
    health -= damage;
}

int Rogue::attack() {
    if (rand() % critic+1 == critic)
        return 2*(10+rand()%10+1);
    else
        return 10+rand()%10+1;

}

void Rogue::itemPickUp(Item &it)
{
    health += it.getHp();
    it.itemDelete();
}