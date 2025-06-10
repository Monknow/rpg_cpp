#include <bits/stdc++.h>
#include "Attack.h"
#include "./../Character.h"

using namespace std;

Attack::Attack()
{
    base_damage = 10;
    attacker = "You";

    Dice new_dice;
    dice = new_dice;
};

Attack::Attack(int instance_base_damage, string instance_attacker)
{
    base_damage = instance_base_damage;
    attacker = instance_attacker;
    Dice new_dice;
    dice = new_dice;
};

int Attack::calculate_damage()
{
    if (dice.throw_once() > 10)
    {
        cout << attacker << " got a successful attack " << endl;

        int true_damage = base_damage * dice.throw_once() / 20;
        cout << "and did " << true_damage << " damage!" << endl;
        return true_damage;
    }
    else
    {
        cout << attacker << " failed!" << endl;
        return 0;
    }
};

void Attack::execute(Character &enemy)
{
    enemy.receive_damage(calculate_damage());

    enemy.set_health(max(enemy.get_health(), 0));
}