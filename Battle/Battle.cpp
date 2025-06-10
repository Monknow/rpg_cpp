#include <bits/stdc++.h>
#include "Battle.h"

using namespace std;

Battle::Battle()
{
    Character *new_player;
    select_enemy();
};

Battle::Battle(Character *instance_player)
{
    player = instance_player;
    select_enemy();
};

void Battle::select_enemy()
{
    int random_enemy_selection = 1 + rand() % 4;
    string enemy_name = "Demon";

    switch (random_enemy_selection)
    {
    case 1:
        enemy = new Bard(20, enemy_name, 5);
        break;
    case 2:
        enemy = new Knight(20, enemy_name, 5);
        break;
    case 3:
        enemy = new Mage(20, enemy_name, 5);
        break;
    case 4:
        enemy = new Ranger(20, enemy_name, 5);
        break;
    }
}

void Battle::print_title()
{

    cout << R"(
 a88888b.                     dP                  dP      .d88888b  oo                     dP            dP                     
d8'   `88                     88                  88      88.    "'                        88            88                     
88        .d8888b. 88d8b.d8b. 88d888b. .d8888b. d8888P    `Y88888b. dP 88d8b.d8b. dP    dP 88 .d8888b. d8888P .d8888b. 88d888b. 
88        88'  `88 88'`88'`88 88'  `88 88'  `88   88            `8b 88 88'`88'`88 88    88 88 88'  `88   88   88'  `88 88'  `88 
Y8.   .88 88.  .88 88  88  88 88.  .88 88.  .88   88      d8'   .8P 88 88  88  88 88.  .88 88 88.  .88   88   88.  .88 88       
 Y88888P' `88888P' dP  dP  dP 88Y8888' `88888P8   dP       Y88888P  dP dP  dP  dP `88888P' dP `88888P8   dP   `88888P' dP       
                                                                                                                                
 By Juandi and Vale :)
)" << '\n';
};

void Battle::start()
{
    print_title();

    while (player->get_health() > 0)
    {
        cout << "------- Turn " << turn << " -------" << endl;

        cout << "+ " << player->get_name() << "'s turn +" << endl;

        int player_attack_selection;

        cout << "Choose attack \n\n 1. Basic attack \n 2. Poweful attack \n\n";
        cin >> player_attack_selection;

        if (player_attack_selection == 1)
        {
            player->do_basic_attack(*enemy);
        }
        else
        {
            player->do_powerful_attack(*enemy);
        }

        cout << enemy->get_name() << " has " << enemy->get_health() << "hp" << endl;

        if (enemy->get_health() <= 0)
        {
            break;
        }

        cout << "\n+ " << enemy->get_name() << "'s turn +" << endl;

        int enemy_attack_selection = 1 + rand() % 2;

        if (player_attack_selection == 1)
        {
            enemy->do_basic_attack(*player);
        }
        else
        {

            enemy->do_powerful_attack(*player);
        }

        cout << player->get_name() << " has " << player->get_health() << "hp" << endl;

        cout << "-----------------------" << "\n\n";
        turn++;
    };

    cout << endl;

    if (player->get_health() > 0)
    {
        cout << player->get_name() << " wins!" << endl;
    };

    if (enemy->get_health() > 0)
    {
        cout << player->get_name() << " loses!" << endl;
    };
};
