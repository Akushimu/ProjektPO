#ifndef PROJEKTPO_ITEM_H
#define PROJEKTPO_ITEM_H
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Item {
    friend class Hero;
    string name;
    int x;
    int y;
    int plusHp;
    int plusArm;
public:
    explicit Item(const string &itemName);
    int getX() const;
    int getY() const;
    int getHp() const;
    int getArm() const;
    string getName() const;
    void itemDelete();
};


#endif //PROJEKTPO_ITEM_H
