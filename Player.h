#pragma once
class Player{

private:
	char symbol;

public:

	struct Move {
		int row;
		int column;
	};

	Player(char symbol);
	char getSymbol() const;

	virtual Move makeMove() = 0;

};

