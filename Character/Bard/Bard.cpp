#include <bits/stdc++.h>
#include "Bard.h"

using namespace std;

Bard::Bard() : Character()
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;

    charisma = 5;
}

Bard::Bard(int instance_health, string instance_name, int instance_charisma) : Character(instance_health, instance_name)
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;
    charisma = instance_charisma;
};

void Bard::do_powerful_attack(Character &enemy)
{
    cout << name << " tries to sing a deterring song attack" << endl;

    if (charisma > 0)
    {
        powerful_attack.execute(enemy);
        charisma--;
    }
    else
    {
        cout << "but it's out of charisma" << endl;
    }
};