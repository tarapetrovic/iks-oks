#include "Board.h"
#include <iostream>

using namespace std;

Board::Board(){
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = ' ';
}

void Board::printBoard(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";  
        }
        cout << "\n";
        if (i < 2) cout << "- + - + -\n"; 
    }
}

bool Board::placeMove(int row, int column, int symbol){
    if (row < 0 || row >2 || column < 0 || column >2) {
        cout << "Wrong input!";
        return false;
    }
    if (board[row][column] != ' ') {
        cout << "Field already filled!";
        return false;
    }

    board[row][column] = symbol;
    movesMade++;
    return true;
}

bool Board::checkWin(char s){
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == s && board[i][1] == s && board[i][2] == s) return true; // checking wins by rows
        if (board[0][i] == s && board[1][i] == s && board[2][i] == s) return true; // checking wins by columns
    }

    if (board[0][0] == s && board[1][1] == s && board[2][2] == s) return true; // checking wins by left diagonal
    if (board[0][2] == s && board[1][1] == s && board[2][0] == s) return true; // checking wins by right diagonal

    return false;
}

bool Board::isFull(){
    if (movesMade == 9) {
        return true;
    }
    else return false;
}
