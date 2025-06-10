#ifndef RANGER
#define RANGER

#include <bits/stdc++.h>
#include "./../Character.h"

using namespace std;

class Ranger : public Character
{
public:
    Ranger();
    Ranger(int instance_health, string instance_name, int instance_stamina);
    void do_powerful_attack(Character &enemy) override;

private:
    int stamina;
};

#endif