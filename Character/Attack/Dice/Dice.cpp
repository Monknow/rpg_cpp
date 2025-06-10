#include <bits/stdc++.h>
#include "Dice.h"

using namespace std;

int Dice::throw_once()
{
    int result = 1 + rand() % 20;
    cout << "Rolled a " << result << "!" << endl;

    return result;
}
