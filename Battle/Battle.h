#ifndef BATTLE
#define BATTLE

#include <bits/stdc++.h>
#include "./../Character/Character.h"
#include "./../Character/Bard/Bard.h"
#include "./../Character/Knight/Knight.h"
#include "./../Character/Mage/Mage.h"
#include "./../Character/Ranger/Ranger.h"

using namespace std;

class Battle
{
public:
    Battle();
    Battle(Character *instance_player);
    void start();

private:
    Character *enemy;
    Character *player;
    void select_enemy();
    void print_title();
    int turn = 1;
};

#endif