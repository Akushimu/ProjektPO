#include "Item.h"

Item::Item(const string &itemName) {
    name = itemName;
    plusHp = rand()%20+1;
    plusArm = rand()%5+1;
    x = rand()%10+1;
    y = rand()%10+1;
}

int Item::getX() const
{
    return x;
}

int Item::getY() const
{
    return y;
}

int Item::getHp() const
{
    return plusHp;
}

int Item::getArm() const
{
    return plusArm;
}

string Item::getName() const
{
    return name;
}

void Item::itemDelete() {
    x = 11;
    y = 11;
}

