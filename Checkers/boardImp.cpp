#include "board.h"
#include <iomanip>
using namespace std;


//set initial values using constructor
boardType::boardType()
{
	fill(*boardArray, *boardArray + sizeof(boardArray), ' ');

	boardArray[1][2] = 'b';
	boardArray[1][4] = 'b';
	boardArray[1][6] = 'b';
	boardArray[1][8] = 'b';

	boardArray[2][1] = 'b';
	boardArray[2][3] = 'b';
	boardArray[2][5] = 'b';
	boardArray[2][7] = 'b';

	boardArray[3][2] = 'b';
	boardArray[3][4] = 'b';
	boardArray[3][6] = 'b';
	boardArray[3][8] = 'b';

	boardArray[6][1] = 'r';
	boardArray[6][3] = 'r';
	boardArray[6][5] = 'r';
	boardArray[6][7] = 'r';

	boardArray[7][2] = 'r';
	boardArray[7][4] = 'r';
	boardArray[7][6] = 'r';
	boardArray[7][8] = 'r';

	boardArray[8][1] = 'r';
	boardArray[8][3] = 'r';
	boardArray[8][5] = 'r';
	boardArray[8][7] = 'r';

	xCoordinate = 0;
	yCoordinate = 0;
	color = ' ';
}

void boardType::setSquare(int newXCoordinate, int newYCoordinate, char newColor)
{

	xCoordinate = newXCoordinate;
	yCoordinate = newYCoordinate;
	color = newColor;

	boardArray[xCoordinate][yCoordinate] = color;
}

//get the color for a square
char boardType::getSquare(int xCoordinate, int yCoordinate) const
{
	return boardArray[xCoordinate][yCoordinate];
}


char boardType::getBoard() const
{
	//return boardArray;
	return 'r';
}

//do nothing with destructor
boardType::~boardType()
{
}