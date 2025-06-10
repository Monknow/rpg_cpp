#ifndef ATTACK
#define ATTACK

#include <bits/stdc++.h>
#include "./Dice/Dice.h"

using namespace std;

class Character; // Forward declaration to avoid circular dependencies

class Attack
{
public:
    Attack();
    Attack(int instance_base_damage, string instance_attacker);
    void execute(Character &enemy);

protected:
    int calculate_damage();
    int base_damage;
    string attacker;
    Dice dice;
};

#endif