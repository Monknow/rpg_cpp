#include <bits/stdc++.h>
#include "Character.h"

using namespace std;

Character::Character()
{
    health = 20;

    name = "You";
    Attack new_attack(10, name);
    basic_attack = new_attack;
}

Character::Character(int instance_health, string instance_name)
{
    health = instance_health;
    name = instance_name;

    Attack new_attack(10, name);
    basic_attack = new_attack;
};

void Character::receive_damage(int enemy_damage)
{
    health -= enemy_damage;
};

void Character::do_basic_attack(Character &enemy)
{
    cout << name << " tries to do a short sword attack" << endl;
    basic_attack.execute(enemy);
};

void Character::set_health(int new_healt)
{
    health = new_healt;
};

int Character::get_health()
{
    return health;
};

void Character::set_name(string new_name)
{
    name = new_name;
};

string Character::get_name()
{
    return name;
};
