#include <bits/stdc++.h>
#include "Dice.h"

using namespace std;

int Dice::throw_once()
{
    // Random integer between 1 and 20
    int result = 1 + rand() % 20;
    cout << "Rolled a " << result << "!" << endl;

    return result;
}
