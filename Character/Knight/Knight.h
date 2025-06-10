#ifndef KNIGHT
#define KNIGHT

#include <bits/stdc++.h>
#include "./../Character.h"

using namespace std;

class Knight : public Character
{
public:
    Knight();
    Knight(int instance_health, string instance_name, int instance_stamina);
    void do_powerful_attack(Character &enemy) override;

private:
    int stamina;
};

#endif