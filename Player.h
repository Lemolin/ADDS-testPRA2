#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include"Move.h"

class Player {
public:
	string name;
	virtual Move* makeMove() = 0;
	virtual string getName() = 0;
};

#endif