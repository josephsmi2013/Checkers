using namespace std;

class pieceType
{
public:
	//constructor(s) and destructor
	pieceType();
	~pieceType();

	//setters
	void moveNext();


	//getters
	int getNext() const;


private:
	char color;
};
