#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unistd.h>
#include <thread>
#include <fstream>

#include "playerInfo.h"

#include "GetInfo.h"
#include "Introduction.h"
#include "Welcome_back.h"

#include "StockMarket.h"
#include "NewsRoom.h"

#include "LoadGameStatus.h"
#include "SaveGameStatus.h"
#include "Goodbye.h"



using namespace std;

/// below is part where we will declare all the global variables:

/// int S1, S2, S3, S4, S5; //These are out stock price variables

int insider_flag;

int isvalid;

int S1,S2,S3,S4,S5;

vector<int> s1, s2, s3, s4, s5;

string News_List[5] = {
    "Cellphone Technology companies have made a huge breakthrough on battery problem. They are expecting a boom!",
    "Wheat production increases significantly because of Agricultural science and technology advances",
    "Oil prices rise sharply as Russia-Ukraine situation develops, firms like SINOPEC were greatly benefit",
    "With the joint efforts of many scientists, medical technology has once again experienced great progress",
    "The United States once again is conducting military weapon trade with its neighboring countries "
};

int News = 0;

// This function initialize player's liquidity and portfolios.
// Input: player
// Output: player.liquidity, player.portfolio.
void initialize(Player &player){

    player.liquidity = 1000000;
    player.portfolio[1] = 0;
    player.portfolio[2] = 0;
    player.portfolio[3] = 0;
    player.portfolio[4] = 0;
    player.portfolio[5] = 0;

    for (int i = 0; i<7; i++){

        s1.push_back(0);
        s2.push_back(0);
        s3.push_back(0);
        s4.push_back(0);
        s5.push_back(0);

    }

}


/// Below is the core part of stock trading system: multithreaded price generator;
// This function drives these stocks floating by time.
// Input: S1-5.
// Output: S1-5.
/// Stock1 : Apple (70~100)
void Apple(){ 

    sleep(1);

    while (true){
        if (isvalid == 1 && insider_flag == 0){
            
            S1 = s1[s1.size()-1] + 50;
            s1.push_back(S1);
            s1 = vector<int>(s1.begin() + 1, s1.end());
            sleep(12);

        }
        else if ( News == 0){

            S1 = s1[s1.size()-1] + 30;
            ///cout<<S1<<endl;
            s1.push_back(S1);
            s1 = vector<int>(s1.begin() + 1, s1.end());
            sleep(12);

        }else{

        srand(time(NULL));
        S1 = 100 - rand()%30;
        ///cout<<S1<<endl;
        s1.push_back(S1);
        s1 = vector<int>(s1.begin() + 1, s1.end());
        sleep(15);

        }
    }
}

/// Stock2 : Wheat (30~50)
void Wheat(){ 

    sleep(2);

    while (true){
        if (isvalid == 1 && insider_flag == 1){
            
            S2 = s2[s2.size()-1] + 30;
            s2.push_back(S2);
            s2 = vector<int>(s2.begin() + 1, s2.end());
            sleep(12);

        }
        else if ( News == 1 ){

            S2 = s2[s2.size()-1] + 15;
            ///cout<<S1<<endl;
            s2.push_back(S2);
            s2 = vector<int>(s2.begin() + 1, s2.end());
            sleep(12);

        }else{

        srand(time(NULL));
        S2 = 50 - rand()%20;
        ///cout<<S1<<endl;
        s2.push_back(S2);
        s2 = vector<int>(s2.begin() + 1, s2.end());
        sleep(15);

        }
    }
}


/// Stock3 : SINOPEC (200-250)
void Gas(){ 

    sleep(3);

    while (true){
        if (isvalid == 1 && insider_flag == 2){
            
            S3 = s3[s3.size()-1] + 100;
            s3.push_back(S3);
            s3 = vector<int>(s3.begin() + 1, s3.end());
            sleep(12);

        }
        else if ( News == 2 ){

            S3 = s3[s3.size()-1] + 50;
            ///cout<<S1<<endl;
            s3.push_back(S3);
            s3 = vector<int>(s3.begin() + 1, s3.end());
            sleep(12);

        }else{

        srand(time(NULL));
        S3 = 250 - rand()%50;
        ///cout<<S1<<endl;
        s3.push_back(S3);
        s3 = vector<int>(s3.begin() + 1, s3.end());
        sleep(15);

        }
    }
}


/// Stock4 : Cancer_Detection  (140-180)
void Cancer_Detection(){ 

    sleep(4);

    while (true){
        if (isvalid == 1 && insider_flag == 3){
            
            S4 = s4[s4.size()-1] + 40;
            s4.push_back(S4);
            s4 = vector<int>(s4.begin() + 1, s4.end());
            sleep(12);

        }
        else if ( News == 3){

            S4 = s4[s4.size()-1] + 20;
            ///cout<<S1<<endl;
            s4.push_back(S4);
            s4 = vector<int>(s4.begin() + 1, s4.end());
            sleep(12);

        }else{

        srand(time(NULL));
        S4 = 180 - rand()%40;
        ///cout<<S1<<endl;
        s4.push_back(S4);
        s4 = vector<int>(s4.begin() + 1, s4.end());
        sleep(15);

        }
    }
}


/// Stock5 : Weapon_Supply  (220-300)
void Weapon(){ 

    sleep(5);

    while (true){
        if (isvalid == 1 && insider_flag == 4){
            
            S5 = s5[s5.size()-1] + 100;
            s5.push_back(S5);
            s5 = vector<int>(s5.begin() + 1, s5.end());
            sleep(12);

        }
        else if ( News == 4){

            S5 = s5[s5.size()-1] + 45;
            ///cout<<S1<<endl;
            s5.push_back(S5);
            s5 = vector<int>(s5.begin() + 1, s5.end());
            sleep(12);

        }else{

        srand(time(NULL));
        S5 = 300 - rand()%80;
        ///cout<<S1<<endl;
        s5.push_back(S5);
        s5 = vector<int>(s5.begin() + 1, s5.end());
        sleep(15);

        }
    }
}


/// below is our news generator that affect the trend of corresponding stocks
// This function generates news by time.
// Input: time
// Output: news
void news(){

    while (true){
        News = News % 5;
        ///cout<<"News = "<<News<<endl;
        sleep(30);
        News += 1;
    }

}
// This function change inside isvalid by time
// Input: time
// Output: isvalid
void inside(){

    sleep(1);

    while ( true ){
        if (isvalid==1){
            sleep(40);
            isvalid = 0;
        }
    }
}
// This function displays news
// Input: news
// Output: display news'information
void DisplayNews(){

    cout<<"************** News Board ******************"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"         The most current news is:        "<<endl;
    cout<<News_List[News];

    cout<<"\n\n";

}

// This function displays stockmarkets and the information of the stocks
// Input: s1-5
// Output: the stock market page
void DisplayStockmarket(){
    
    sleep(1);

    cout<<"********** Stock Price Board ************"<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Stock 1: Apple   -------------------- "<<S1<<endl;
    cout<<"Stock 2: Wheat   -------------------- "<<S2<<endl;
    cout<<"Stock 3: Gas     -------------------- "<<S3<<endl;
    cout<<"Stock 4: Cancer_Detection   --------- "<<S4<<endl;
    cout<<"Stock 5: Weapon  -------------------- "<<S5<<endl;
    sleep(1);
    cout<<"****************************************"<<endl;
    cout<<"Thanks for visiting!"<<endl;
    cout<<"\n\n";

}


// This function introduces two sections: News Board and insider news room
// Input: Choice
// Output: Choice 
int sub_choose(){
    
    int choice;

    cout<<"************************************"<<endl;
    cout<<"We have two subsection here"<<endl;
    cout<<"   The 1st is News Board where you could see the news, which, greatly implies which stocks is probably going up! "<<endl;
    cout<<"   the 2nd is the place where you could buy \"insider news room\". You need to give them money but in return they will tell you secret information about specific stock! "<<endl;
    sleep(1);
    cout<<"************************************"<<endl;
    cout<<"A little heads up: whatever News you saw, quickly make your decision and go to exchange to trade the corresponding stock. Remember, stock price change every 15 seconds: Somes news may turn invalid afterward!"<<endl;
    sleep(1);
    cout<<"Input 1 if you choose News Board and 2 if you choose Insider news room"<<endl;
    cout<<"YOUR CHOICE: ";
    cin>>choice;

    return choice;
}

// This function checks whether player wins or not
// Input : liquidity
// Output : Win or not
bool check_win(Player player){

    if (player.liquidity >= 2500000){
        return true;
    }else{
        return false;
    }

}

// This function is a tutorial for player, teaching how to interact.
// Input: choice
// Output: choice
void tutorial(){
    
    cout<<"\n";
    sleep(1);
    cout<<"*************************************************"<<endl;
    cout<<"So, This is it! Please navigate to the session you want."<<endl;
    cout<<"The navigation rule is:"<<endl;
    cout<<"  input \"1\" to Stock Market"<<endl;
    cout<<"  input \"2\" to News section"<<endl;
    cout<<"  input \"3\" to check your porfolio and liquidity"<<endl;
    cout<<"  input \"4\" to check the previous movement of a certain stock"<<endl;
    cout<<"  input \"0\" to quit the game"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Your Choice is: ";
    cout<<"\n\n";
}

// This function let player know his information
// Input: name, liquidity and portfolios
// Output: name, liquidity and portfolios
void check_Info(Player player){

    cout<<"*********** Welcome to information checking counter *************"<<endl;
    cout<<endl;
    sleep(1);

    cout<<player.name<<", your current liquid cash is: "<<player.liquidity<<endl;
    cout<<endl;
    cout<<player.name<<", your current holding number of each stocks are: "<<endl;
    cout<<"      Stock 1: "<<player.portfolio[1]<<endl;
    cout<<"      Stock 2: "<<player.portfolio[2]<<endl;
    cout<<"      Stock 3: "<<player.portfolio[3]<<endl;
    cout<<"      Stock 4: "<<player.portfolio[4]<<endl;
    cout<<"      Stock 5: "<<player.portfolio[5]<<endl;
    sleep(1);
    cout<<endl;
    cout<<"Thanks for your visit."<<endl;
    cout<<"\n\n";

}

// This function ask player if he/she wants to check the stock price for the lastest 7 period
// Input: choice
// Output: s1-5
void check_movement(){

    cout<<"********** Welcome to stock movement checking counter ***********"<<endl;
    cout<<"you will be given the stock price for the lastest 7 period here."<<endl;
    cout<<endl;
    sleep(1);

    cout<<"please tell me which stock are you looking to inspect:"<<endl;
    cout<<"(Input 1 if you want to inspect stock 1, input 2 if you want stock 2 and so on [DO NOT INPUT LETTER HERE OR YOU HAVE TO REBOOT THE GAME])"<<endl;
    cout<<endl;
    int number;
    cout<<"Your choice: ";
    cin>>number;
    sleep(1);

    if (number>=1 && number <=5){

        cout<<"The stock "<<number<<"'s price of last 7 period is given below:"<<endl;

        vector<int> s;
        if (number==1){ s=s1;}
        else if(number==2){ s=s2;}
        else if(number==3){ s=s3;}
        else if(number==4){ s=s4;}
        else{ s=s5;}

        vector<int>::iterator itr_price = s.begin();

        while (itr_price != s.end()){

            cout<<*itr_price<<" -> ";
            itr_price++;

        }
        
        cout<<endl;
        sleep(1);
        cout<<"Thanks for inspecting. This session is over."<<endl;

    }else{

        cout<<"Your input is of wrong format. The session is ended, please navigate again."<<endl;

    }
    
    cout<<"\n\n";

}


/// BELOW IS OUR MAIN FUNCTION

int main(){

    Player player;

    insider_flag = 100;

    isvalid = 0;


    // Check for if the game status file is empty: Where we will determine the flag
    ///*********
    // Load the game status into our global variable
    ///*********
    ifstream read("Game-status.txt");

    bool isEmpty = read.peek() == EOF;

    // The second stage is the entry of the player to the game (flag suggest whether it's his first time playing)
    if ( isEmpty ) {

        // We first need to introduce the user to our game setting

        initialize(player);

        GetInfo(player);
    
        Introduction(player);

        ///initialize(player);

        // Then we will present the main control tab: 
        // We have officially brought the user to the game panel
        /// Tutorial() comes together with DisplayMainPage();

    }
    else{

        for (int i = 0; i<7; i++){

        s1.push_back(0);
        s2.push_back(0);
        s3.push_back(0);
        s4.push_back(0);
        s5.push_back(0);

        }

        LoadGameStatus(player);
        
        Welcome_back(player);
        
        // If the file is not empty, it means instructions is no longer needed

    }

    thread pricer1(Apple);
    thread pricer2(Wheat);
    thread pricer3(Gas);
    thread pricer4(Cancer_Detection);
    thread pricer5(Weapon);

    thread news_generator(news);
 
    thread insider_adjustor(inside);


    //Give out the first instruction
    tutorial();

    int index;

    cin>>index;
    
    // He will be able to access any subpage by the instruction he gave
    while ( index != 0 ){

            if ( index == 1 ){
                DisplayStockmarket();
                StockMarket(player,S1,S2,S3,S4,S5);
                if (check_win(player)){
                    cout<<"After checking your liquidity, we verified that you have earned 2,500,000. Congrats, you won."<<endl;
                    break;
                }
                tutorial();
                cin>>index;
            }
            else if ( index == 2 ){
                if (sub_choose() == 1){
                    DisplayNews();} //Display Newsroom and Buy insider news are functions triggered inside Newsroom function
                else if (sub_choose() == 2){
                    NewsRoom(player,isvalid,insider_flag);}
                else{
                    cout<<"Wrong Input, the session has ended, you should navigate again."<<endl;
                }
                tutorial();
                cin>>index;
            }
            else if( index == 3){
                check_Info(player);
                tutorial();
                cin>>index;
            }
            else if( index == 4){
                check_movement();
                tutorial();
                cin>>index;
            }
            else{
                cout<<"Your input format is wrong. The current session is ended, please input again."<<endl;
                tutorial();
                cin>>index;
            }
            // To be enriched...
    }

    Goodbye(player);

    SaveGameStatus(player);

    return 0;

}
