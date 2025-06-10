#ifndef CHARACTER
#define CHARACTER

#include <bits/stdc++.h>
#include "./Attack/Attack.h"

using namespace std;

class Character
{
public:
    Character();
    Character(int instance_health, string instance_name);
    void receive_damage(int enemy_damage);
    void set_health(int new_healt);
    int get_health();
    void set_name(string new_name);
    string get_name();
    void do_basic_attack(Character &enemy);
    virtual void do_powerful_attack(Character &enemy) = 0;

protected:
    int health;
    string name;
    Attack basic_attack;
    Attack powerful_attack;
};

#endif