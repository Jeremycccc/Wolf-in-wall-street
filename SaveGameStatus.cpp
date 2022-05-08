#include <iostream>
#include <string>
#include <fstream>

#include "SaveGameStatus.h"
#include "playerInfo.h"

using namespace std;
// This function saves player's information, ranging from name, liquidity and stocks.
// Input: name, liquidity, stocks in player.
// Output: name, liquidity, stocks in game-status.

void SaveGameStatus(Player player){

    ofstream fout;
    fout.open("Game-status.txt");

    fout<<player.name<<" "<<player.liquidity<<" "<<player.portfolio[1]<<" "<<player.portfolio[2]<<" "<<player.portfolio[3]<<" "<<player.portfolio[4]<<" "<<player.portfolio[5];
    
    fout.close();
    
}
