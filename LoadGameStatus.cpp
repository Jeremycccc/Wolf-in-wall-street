#include <iostream>
#include <string>
#include <fstream>

#include "LoadGameStatus.h"
#include "playerInfo.h"

using namespace std;
// This function loads game status when the Game-status is not empty, in order to load the game status and continue the game process.
// Input: name, liquidity, stocks in Game-stautus.
// Output: name, liquidity, stocks in player.
void LoadGameStatus(Player &player){

    ifstream fin;
    fin.open("Game-status.txt");
    
    string N;
    int L;
    int a1,a2,a3,a4,a5;

    fin>>N;
    fin>>L;
    fin>>a1>>a2>>a3>>a4>>a5;

    player.name = N;
    player.liquidity = L;
    player.portfolio[1] = a1;
    player.portfolio[2] = a2;
    player.portfolio[3] = a3;
    player.portfolio[4] = a4;
    player.portfolio[5] = a5;

    fin.close();

}
