#include "Board.h"
#include <windows.h>

Board::Board(Warrior * h1, Rogue * h2) :item("Pierscien"), item2("Naszyjnik")
{
    hero1=h1;
    hero2=h2;
}

bool Board::samePos(Warrior * war, Item & it) const
{
    if (war->getX() == it.getX() and war->getY() == it.getY())
        return true;
    return false;
}

bool Board::samePos(Rogue * rog, Item & it) const
{
    if (rog->getX() == it.getX() and rog->getY() == it.getY())
        return true;
    return false;
}

bool Board::samePos(Warrior * war, Rogue * rog) const
{
    if (war->getX() == rog->getX() and war->getY() == rog->getY())
        return true;
    return false;
}

void Board::fight() {
    while (hero1->isAlive() and hero2->isAlive())
    {
        Sleep(2000);
        int hp1=hero1->getHealth();
        int hp2=hero2->getHealth();
        int armor=hero1->getArmor();
        int attack1=hero2->attack();
        int attack2=hero1->attack();
        hero1->takeDamage(attack1);
        hero2->takeDamage(attack2);
        if (hp1-(attack1-armor)!=hero1->getHealth())
        {
            cout << hero1->getName() << " uleczyl sie o " <<  hero1->getHealth()-(hp1-(attack1-armor))<< " pkt zycia." << endl;
        }
        cout << hero1->getName() << " otrzymal " << attack1-armor << " pkt obrazen, zostalo mu " << hero1->getHealth() << " pkt zycia. " << std::endl;
        if (hp2!=hero2->getHealth())
            cout << hero2->getName() << " otrzymal " << attack2 << " pkt obrazen, zostalo mu " << hero2->getHealth() << " pkt zycia. " << std::endl;
        else
            cout << hero2->getName() << " wykonal unik. " << std::endl;
    }
}

string Board::getWinner() const {
        if (hero1->isAlive())
            return hero1->getName();
        else if (hero2->isAlive())
            return hero2->getName();
        else
        return "Remis";
}

void Board::start()
    {
        do {
            cout << hero1->getName() << " znajduje sie na pozycji " << hero1->getX() << "," << hero1->getY() << endl;
            cout << hero2->getName() << " znajduje sie na pozycji " << hero2->getX() << "," << hero2->getY() << endl;
            hero1->move();
            if (samePos(hero1,item)) {
                hero1->itemPickUp(item);
                cout << hero1->getName() << " podniosl "<< item.getName() << " zyskujac " << item.getHp() << " pkt zdrowia i " << item.getArm() << " pkt pancerza." << endl;
            }
            if (samePos(hero1,item2)) {
                hero1->itemPickUp(item2);
                cout << hero1->getName() << " podniosl "<< item2.getName() << " zyskujac " << item2.getHp() << " pkt zdrowia i " << item2.getArm() << " pkt pancerza." << endl;
            }
            hero2->move();
            if (samePos(hero2,item)) {
                hero2->itemPickUp(item);
                cout << hero2->getName() << " podniosl "<< item.getName() << " zyskujac " << item.getHp() << " pkt zdrowia." << endl;
            }
            if (samePos(hero2,item2)) {
                hero2->itemPickUp(item2);
                cout << hero2->getName() << " podniosl "<< item2.getName() << " zyskujac " << item2.getHp() << " pkt zdrowia." << endl;
            }
            Sleep(500);
        } while (!samePos(hero1, hero2));
        cout << " Spotkanie na pozycji " << hero1->getX() << "," << hero1->getY() << endl;
        fight();
        cout << "Wygral " << getWinner() << endl;
}


