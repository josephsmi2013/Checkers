#include <iostream>
#include <string>
#include "game.h"
#include "board.h"
using namespace std;

gameType::gameType()
{
	player1Name = "";
	player2Name = "";
	player1Score = 0;
	player2Score = 0;
}


void gameType::createGame()
{
	boardType initializeBoard;
}

void gameType::setPlayers(string newPlayer1Name, string newPlayer2Name)
{
	player1Name = newPlayer1Name;
	player2Name = newPlayer2Name;
}

string *gameType::getPlayers() const
{
	static string players[2];

	players[0] = player1Name;
	players[1] = player2Name;

	return players;
}

void gameType::setScores(int newPlayer1Score, int newPlayer2Score)
{
	player1Score = newPlayer1Score;
	player2Score = newPlayer2Score;
}

int *gameType::getScores() const
{
	static int scores[2];

	scores[0] = player1Score;
	scores[1] = player2Score;

	return scores;
}

void gameType::endGame()
{
	cout << "Thank you for playing" << endl;
	if (player1Score == player2Score)
	{
		cout << "The game has ended in a tie!";
	}
	else if (player1Score > player1Score)
	{
		cout << player1Name + " is the winner!";
	}
	else player2Name + " is the winner!";

}

gameType::~gameType()
{
	//do nothing with destructor
}