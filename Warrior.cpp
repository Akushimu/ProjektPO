#include "Warrior.h"

Warrior::Warrior(const string &name) : Hero(name, 120)
{
    maxHp = 120;
    cooldown = 0;
    armor = 5;
}

void Warrior::usePotion()
{
    if (cooldown >= 1)
    {
        cooldown-=1;
    }
    else if (cooldown == 0 and maxHp - health >= 10)
    {
        health += 5 + rand()%5+1;
        cooldown = 3;
    }
}

int Warrior::attack()
{
    if (isAlive()) {
        usePotion();
    }
    return 5 + rand()%10+1;
}

void Warrior::takeDamage(int damage) {
    health -= damage-armor;
}

int Warrior::getArmor()
{
    return armor;
}

void Warrior::itemPickUp(Item &it)
{
    health += it.getHp();
    maxHp += it.getHp();
    armor += it.getArm();
    it.itemDelete();
}