#ifndef PROJEKTPO_HERO_H
#define PROJEKTPO_HERO_H
#include <string>
#include <cstdlib>
#include <ctime>
#include "Item.h"
using namespace std;

class Hero {
    string name;
    int x;
    int y;
protected:
    int health;
public:
    Hero(const string &name, int health);
    //oblicza atak
    virtual int attack()=0;
    //zadaje sobie obrazenia
    virtual void takeDamage(int damage)=0;
    //zwraca ilosc zdrowia
    int getHealth() const;
    //sprawdza czy jednostka zyje
    bool isAlive() const;
    //przemieszcza jednostke
    void move();
    //zwraca nazwę jednostki
    string getName() const;
    //zwraca pozycje x
    int getX() const;
    //zwraca pozycje y
    int getY() const;
    //podnosi przedmiot
    virtual void itemPickUp(Item &it)=0;

};


#endif //PROJEKTPO_HERO_H
