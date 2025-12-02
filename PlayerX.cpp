#include "PlayerX.h"
#include <iostream>

using namespace std;

PlayerX::PlayerX() : Player('X') {}

Player::Move PlayerX::makeMove(){

	Move m;
	cout << "Player X, make your move (row column): ";
	cin >> m.row >> m.column;

	return m;
}
