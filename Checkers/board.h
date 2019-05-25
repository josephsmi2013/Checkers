
using namespace std;

class boardType
{
public:
	//constructor(s) and destructor
	boardType();
	~boardType();

	//setters
	void setSquare(int, int, char);


	//getters
	char getSquare(int, int) const;
	char getBoard() const;


private:
	static const int ROWS = 9;
	static const int COLUMNS = 9;
	char boardArray[ROWS][COLUMNS];
	int xCoordinate;
	int yCoordinate;
	char color;

};
