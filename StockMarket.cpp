#include <iostream>
#include <unistd.h>
#include <string>

#include "StockMarket.h"

#include "playerInfo.h"

using namespace std;
//This function is for the trades in stockmarket, about which stocks and how much player want to purchase
// Input: instrcution
// Output: liquidity and portfolios
void StockMarket(Player &player,int S1,int S2,int S3,int S4,int S5){

    cout<<"I am glad you have seen the current market board."<<endl;
    cout<<" **** Remember not to spend more than your current cash, if so, you will be rendered losing the game. ****"<<endl;
    cout<<endl;
    sleep(1);
    cout<<"*******************************************************************"<<endl;
    cout<<"Do you want to Buy or Sell? (type b to buy / type s to sell / type N if you don't want to right now)"<<endl;
    cout<<"Your Instruction: ";

    string instruction;
    cin>>instruction;

    cout<<endl;
    
    if (instruction == "b"){

        cout<<"Please Input the index of the stock: 1 for Apple; 2 for Wheat and so on"<<endl;
        cout<<"Which Stock:";
        int num;
        cin>>num;
        cout<<endl;
        cout<<"Please Input integer volume you want to purchase: i.e. 135/1010..."<<endl;
        cout<<"The Volume:";
        int volume;
        cin>>volume;
        
        if ( num>=1 && num<=5){

            int S;
            if (num==1){ S=S1;}
            else if(num==2){ S=S2;}
            else if(num==3){ S=S3;}
            else if(num==4){ S=S4;}
            else{ S=S5;}

            player.portfolio[num] += volume;
            player.liquidity -= S * volume;

        }else{

            cout<<endl;
            cout<<"Invalid Input. The session has ended."<<endl;
        }
        
    }else if (instruction == "s"){

        cout<<"Please Input the index of the stock: 1 for Apple; 2 for Wheat and so on"<<endl;
        cout<<"Which Stock:";
        int num;
        cin>>num;
        cout<<endl;
        cout<<"Please Input integer volume you want to sell(no more than what you had in your portfolio): i.e. 135/1010..."<<endl;
        cout<<"The Volume:";
        int volume;
        cin>>volume;

        if ( num>=1 && num<=5){

            int S;
            if (num==1){ S=S1;}
            else if(num==2){ S=S2;}
            else if(num==3){ S=S3;}
            else if(num==4){ S=S4;}
            else{ S=S5;}
            
            if (player.portfolio[num] > volume){
                player.portfolio[num] -= volume;
                player.liquidity += S * volume;
            }else{
                player.liquidity += S * player.portfolio[num];
                player.portfolio[num] = 0;
            }

        }else{

            cout<<endl;
            cout<<"Invalid Input. The session has ended."<<endl;

        }        

    }else
    {
        cout<<"Apparently you are pondering. This session has ended."<<endl;
    }
    
    sleep(4);
    cout<<"\n\n";
}
