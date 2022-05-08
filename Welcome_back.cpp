#include <iostream>
#include <string>
#include <unistd.h>
#include "Welcome_back.h"
#include "playerInfo.h"

using namespace std;
// This function welcomes player for entering this game again.
// Input: player
// Output: Welcome

void Welcome_back(Player &player){

    cout<<"**********************************"<<endl;
    cout<<"Welcome Back, "<<player.name<<"!"<<endl;
    cout<<endl;
    cout<<"As you are pretty familiar with the rule now, we will directly lead you to the game!"<<endl;

    cout<<"\n\n";

    sleep(2);

}
