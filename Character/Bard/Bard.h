#ifndef BARD
#define BARD

#include <bits/stdc++.h>
#include "./../Character.h"

using namespace std;

class Bard : public Character
{
public:
    Bard();
    Bard(int instance_health, string instance_name, int instance_stamina);
    void do_powerful_attack(Character &enemy) override;

private:
    int charisma;
};

#endif