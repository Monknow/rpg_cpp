#include <bits/stdc++.h>
#include "Mage.h"

using namespace std;

Mage::Mage() : Character()
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;

    mana = 5;
}

Mage::Mage(int instance_health, string instance_name, int instance_mana) : Character(instance_health, instance_name)
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;
    mana = instance_mana;
};

void Mage::do_powerful_attack(Character &enemy)
{
    cout << name << " tries to throw a fireball attack" << endl;

    if (mana > 0)
    {
        powerful_attack.execute(enemy);
        mana--;
    }
    else
    {
        cout << "but it's out of mana" << endl;
    }
};