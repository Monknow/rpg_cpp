#ifndef MAGE
#define MAGE

#include <bits/stdc++.h>
#include "./../Character.h"

using namespace std;

class Mage : public Character
{
public:
    Mage();
    Mage(int instance_health, string instance_name, int instance_stamina);
    void do_powerful_attack(Character &enemy) override;

private:
    int mana;
};

#endif