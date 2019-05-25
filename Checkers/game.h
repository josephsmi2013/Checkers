#include <string>
using namespace std;

class gameType
{
public:
	gameType();
	~gameType();

	//setters
	void setPlayers(string, string);
	void setScores(int, int);

	//getters
	string *getPlayers() const;
	int *getScores() const;

	//other member functions
	void createGame();
	void endGame();

private:
	string player1Name;
	string player2Name;
	int player1Score;
	int player2Score;
};