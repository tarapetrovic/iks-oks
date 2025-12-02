#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(){
	currentSymbol = 'X';
	currentPlayer = &playerX;
}

void Game::startGame(){

	while (true) {
		cout << endl;
		board.printBoard();
		cout << endl;

		Player::Move move = currentPlayer->makeMove();

		bool success = board.placeMove(move.row, move.column, currentSymbol);

		if (!success) {
			continue; //don't switch players, the same player tries again
		}

		if (board.checkWin(currentSymbol)) {
			cout << endl;
			board.printBoard();
			cout << "\nPlayer " << currentSymbol << " wins!" << endl;
			return;
		}

		if (board.isFull()) {
			cout << endl;
			board.printBoard();
			cout << "\nIt's a draw!" << endl;
			return;
		}

		switchTurns();
	}

}

void Game::switchTurns() {
	if (currentPlayer == &playerX) {
		currentPlayer = &playerO;
		currentSymbol = 'O';
	}
	else {
		currentPlayer = &playerX;
		currentSymbol = 'X';
	}

}
