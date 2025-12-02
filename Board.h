#pragma once
class Board{

private:
	char board[3][3];
	int movesMade = 0;

public:
	Board();
	void printBoard();
	bool placeMove(int row, int column, int symbol);
	bool checkWin(char s);
	bool isFull();

};

