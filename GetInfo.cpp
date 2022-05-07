#include <iostream>
#include <fstream>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <iomanip>

#include "GetInfo.h"
#include "playerInfo.h"

using namespace std;

// This function greet player and save player's name. 
// Input: Player's nickname
// Output: Greeting words

void GetInfo(Player &player){ 

    string Name;

    cout<<"*****************************"<<endl;
    cout<<"         Greeting!"<<endl;
    cout<<"*****************************"<<endl<<endl;
    
    sleep(1);

    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Hey, I don't know who you are yet, but i should tell you "<<endl;
    cout<<"     that you should be ready to embark on a special journey with me now!"<<endl;
    cout<<"     It's different from any \"adventure\" you heard before,"<<endl;
    cout<<"     Rather, you are gonna fight your way out in a fierce financial market!"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl<<endl;
    sleep(4);

    cout<<"If i could assume you are ready?"<<endl<<"Cool!"<<endl<<endl;
    sleep(2);

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"         NOW, WELCOME TO THE GAME OF \" THE WOLF OF WALL STREET \"! ! !"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl<<endl;
    sleep(4);

    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Before anything is revealed, i kinda...need to know how i should call you, right?"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl<<endl;
    sleep(4);

    cout<<"Now, why don't you just tell me your nickname below~"<<endl;
    sleep(1);
    cout<<"Nickname:";

    cin>>Name;

    player.name = Name;

    cout<<endl<<endl;
    sleep(1);
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"Fantastic, "<<Name<<"!"<<endl;
    cout<<"Without further due, let me quickly brief you about the games through."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl<<endl;

}
