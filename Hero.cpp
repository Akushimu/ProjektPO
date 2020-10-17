#include "Hero.h"

Hero::Hero(const string &name, int health)
{
    this->name = name;
    this->health = health;
    x=rand() % 10+1;
    y=rand() % 10+1;
}

int Hero::getHealth() const {
    return health;
}

bool Hero::isAlive() const {
    if (health > 0)
        return true;
    else
        return false;
}

string Hero::getName() const {
    return name;
}

void Hero::move()
{
    int dice=rand() % 4+1;

    switch(dice) {
        case 1:
            x += 1;
            break;
        case 2:
            x -= 1;
            break;
        case 3:
            y+=1;
            break;
        case 4:
            y-=1;
            break;
        default:
            break;
    }
    switch(x) {
        case 11:
            --x;
            break;
        case 0:
            ++x;
            break;
    }
    switch(y) {
        case 11:
            --y;
            break;
        case 0:
            ++y;
            break;
    }
}

int Hero::getX() const
{
    return x;
}

int Hero::getY() const
{
    return y;
}
