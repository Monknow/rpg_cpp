#include <bits/stdc++.h>
#include "Ranger.h"

using namespace std;

Ranger::Ranger() : Character()
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;

    stamina = 5;
}

Ranger::Ranger(int instance_health, string instance_name, int instance_stamina) : Character(instance_health, instance_name)
{
    Attack new_powerful_attack(20, name);
    powerful_attack = new_powerful_attack;
    stamina = instance_stamina;
};

void Ranger::do_powerful_attack(Character &enemy)
{
    cout << name << " tries to throw a leap attack" << endl;

    if (stamina > 0)
    {
        powerful_attack.execute(enemy);
        stamina--;
    }
    else
    {
        cout << "but it's out of stamina" << endl;
    }
};