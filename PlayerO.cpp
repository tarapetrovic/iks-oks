#include "PlayerO.h"
#include <iostream>

using namespace std;

PlayerO::PlayerO() : Player('O') {}

Player::Move PlayerO::makeMove() {

	Move m;
	cout << "Player O, make your move (row column): ";
	cin >> m.row >> m.column;

	return m;
}
