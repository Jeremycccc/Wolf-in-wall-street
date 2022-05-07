#include "Goodbye.h"
#include "playerInfo.h"
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;
// This function works when player quits or wins this game, in order to say goodbye to the player.
// Input: player's name
// Output: farewell words
void Goodbye(Player &player) {
    
    sleep(2);
    cout << "Seems that you either won the game or just need a break~"<<endl;
    cout << "---------------"<<endl;

    sleep(2);
    cout << player.name << endl;
    cout << "Thank you for playing the game this time. See you at next!" << endl;

    sleep(2);
    cout<<endl;
    cout << "*********************************************************"<<endl;
    cout << "Powered by Chen Hanyang & Xie Zhuolun in joint efforts." << endl;
    cout << "All rights reserved." << endl;

    cout<<"\n\n\n\n\n";
    
}
