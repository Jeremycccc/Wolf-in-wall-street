#ifndef PI_H
#define PI_H

#include <string>
#include <map>

using namespace std;

struct Player{

    string name;

    int liquidity;

    map<int,int> portfolio;

};

extern Player player;

#endif
