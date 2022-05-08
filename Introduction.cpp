#include <iostream>
#include <fstream>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <iomanip>

#include "playerInfo.h"

#include "Introduction.h"

using namespace std;
// This function introduces two main sessions and give a introduction.
// Input: Player's name
// Output: Introduction words

void Introduction(Player &player){


    cout<<"Basically, it all comes down to two things: YOUR GOAL && HOW YOU COULD PLAY"<<endl<<endl;
    sleep(2);


    string User_Name = player.name;


    cout<<"1. Your Goal: You will be given 1,000,000 as your initial bank account deposit. Your goal, is to make them 5000,000."<<endl;
    cout<<"   *******************************************************************************************************************"<<endl;
    sleep(2);
    cout<<"   To be specific, if one day you boost your money to 2,500,000!!! You will be rendered successful on this game. More than that, "<<User_Name<<", you are then, the WOLF OF WALL STREET."<<endl<<endl;
    sleep(6);


    cout<<"\n\n";
    
    cout<<"2. How you could play: There are in total 2 big sections you could explore."<<endl;
    sleep(3);
    cout<<"   *********************************************************************"<<endl;
    ///sleep(2);
    cout<<"   2.1 STOCK MARKET:"<<endl;
    cout<<"       Here(the main arena), you could use your cash to buy/sell up to 5 kinds of stocks. You could do one transaction at a time(trade certain volume of a certain stock)."<<endl<<endl;
    ///sleep(5);
    cout<<"   2.2 NEWS ROOM:"<<endl;
    cout<<"       In news room, you could either: A. Watch news(if any) that may shows the potential movement of stock  OR  B. Buy in advance for some street news, which will lead you to buy the right stock and earn a big fortune."<<endl<<endl;
    sleep(5);

    cout<<"\n\n";

    cout<<"***************************************************************************"<<endl;
    sleep(2);
    cout<<"Hope i make all things clear now. But do not worry if i didn't, small tips will be given after you enter the game page!"<<endl;
    sleep(3);
    cout<<"Now, welcome to our main page. Let's start!"<<endl;
    cout<<"\n\n";

    sleep(2);


}
