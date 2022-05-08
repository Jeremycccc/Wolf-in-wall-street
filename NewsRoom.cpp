#include "NewsRoom.h"

#include <iostream>
#include <unistd.h>
#include <string>

#include "playerInfo.h"

using namespace std;
// This function displays newsroom page and the news will influence stocks' price to a large extent.
// Input: news
// Output : newsroom page

void NewsRoom(Player &player,int &isvalid,int &insider_flag){

    cout<<endl;
    cout<<"*************** Now you are talking to the \"the secret people\" ****************"<<endl;
    cout<<"Mr.secret: Let's make it quick. I do not have much time.";
    cout<<"Mr.secret: I will charge $10000 and you will get a big NEWS. Now hand me the money"<<endl;
    sleep(3);
    cout<<endl;
    cout<<"*************** You will later find yourself -10000 in liquid cash"<<endl;
    cout<<endl;
    player.liquidity -= 10000;
    sleep(1);
    cout<<"Mr.secret: Very good. listen up now:"<<endl;

    srand(time(NULL));
    insider_flag = rand() % 5;
    isvalid = 1;
    sleep(3);
    cout<<"Stock No."<<insider_flag+1<<" is going to go up crazy. GO BUY IT NOW and maybe SELL OUT IN 20 seconds later!"<<endl;
    sleep(2);
    cout<<"*************************************"<<endl;
    cout<<"Mr.secret: If you want to come back, remember come back around 40 seconds later, or you will make this $1000 spent wasted."<<endl;
    cout<<endl;
    cout<<"\n\n";

    sleep(3);

}
