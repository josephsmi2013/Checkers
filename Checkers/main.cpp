#include <iostream>
#include <iomanip>
#include "game.h"
#include"board.h"
using namespace std;

void printBoard();
void printMainMenu();
void printTurnMenu(char);
void setPlayers(gameType);
void printScores(gameType);

int main()
{
	cout << "Welcome to Digi Checkers! We hope you enjoy it" << endl;
	cout << "Below is the initial board" << endl;
	
	gameType newGame;
	newGame.createGame();

	printBoard();

	setPlayers(newGame);

	printScores(newGame);

	char nextTurn = 'r';
	printMainMenu();

	int userInput;
	cin >> userInput;

	while (userInput != 0)
	{
		switch (userInput)
		{
		case 1:
			printTurnMenu(nextTurn);

			if (nextTurn == 'r')
			{
				nextTurn = 'b';
			}
			else
			{
				nextTurn = 'r';
			}
			
			break;
		default:
			cout << "Invalid selection. Please try again" << endl;
		}

		printMainMenu();
		cin >> userInput;
	}


	//set the return value
	return 0;

}

void printBoard()
{


	/*boardType newBoard;
	arrayStruct board = newBoard.getBoard;


	cout << endl << endl;

	for (int i = 1; i < ROWS; i++)
	{
		cout << i << ' ';

		for (int j = 1; j < COLUMNS; j++)
		{
			cout << '|' << ' ' << board.boardArray[i][j] << ' ';
		}

		cout << endl << ' ' << ' ' << setfill('-') << setw(32) << '-' << endl;

	}

	cout << ' ' << ' ' << ' ' << ' ';

	for (int i = 1; i < ROWS; i++)
	{
		cout << i << ' ' << ' ' << ' ';
	}

	cout << endl << endl;*/
}

void printMainMenu()
{
	cout << "To make a selection choose from the following" << endl;
	cout << "1: Take the next turn" << endl;
	cout << "0: Exit the game." << endl;
}

void printTurnMenu(char nextTurn)
{
	cout << "Next turn: " << nextTurn << endl;

	cout << "Enter the coordinates of the piece to move" << endl;
	string sourceXInput;
	string sourceYInput;

	cin >> sourceXInput >> sourceYInput;

	cout << "Enter the coordinates of the destination square" << endl;
	string destXInput;
	string destYInput;

	cin >> destXInput >> destYInput;

}

void setPlayers(gameType newGame)
{
	cout << endl << "Please provide both player names" << endl;
	string Player1Name;
	string Player2Name;
	cin >> Player1Name >> Player2Name;

	newGame.setPlayers(Player1Name, Player2Name);
}

void printScores(gameType newGame) 
{

	string *playersPointer = newGame.getPlayers();
	int *ScoresPointer = newGame.getScores();

	cout << "************************************" << endl;
	cout << "***" << playersPointer[0] << " Score: " << to_string(ScoresPointer[0]) << "***";
	cout << "***" << playersPointer[1] << " Score: " << to_string(ScoresPointer[0]) << "***" << endl;
	cout << "************************************" << endl;
}


