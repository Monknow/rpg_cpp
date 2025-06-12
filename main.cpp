#include <bits/stdc++.h>
#include "./Character/Character.h"
#include "./Character/Bard/Bard.h"
#include "./Character/Knight/Knight.h"
#include "./Character/Mage/Mage.h"
#include "./Character/Ranger/Ranger.h"
#include "./Battle/Battle.h"

using namespace std;

int main()
{
    // Set seed for random numbers on Dice
    srand(time(0));

    // Set as a pointer for late binding
    Character *character;
    int player_selection;
    string player_name;

    cout << "Choose a Character! \n\n 1. Bard \n 2. Knight \n 3. Mage \n 4. Ranger \n\n";
    cin >> player_selection;

    cout << endl;

    cout << "Choose a name: ";
    cin >> player_name;
    cout << endl;

    switch (player_selection)
    {
    case 1:
        character = new Bard(30, player_name, 3);
        break;
    case 2:
        character = new Knight(25, player_name, 4);
        break;
    case 3:
        character = new Mage(15, player_name, 8);
        break;
    case 4:
        character = new Ranger(20, player_name, 5);
        break;
    }

    Battle myBattle(character);

    myBattle.start();
}