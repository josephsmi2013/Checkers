#include "piece.h"
using namespace std;


//set initial values using constructor
pieceType::pieceType() 
{
	color = ' ';
}

void pieceType::moveNext() 
{

}

int pieceType::getNext() const
{
	return 1;
}

//destructor
pieceType::~pieceType()
{
	//Do nothing for now
}