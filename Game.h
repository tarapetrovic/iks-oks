#pragma once
#include "Board.h"
#include "Player.h"
#include "PlayerX.h"
#include "PlayerO.h"


class Game{
private:
	Board board;
	PlayerX playerX;
	PlayerO playerO;

	char currentSymbol;
	Player* currentPlayer;

	void switchTurns();

public:

	Game();
	void startGame();

};

