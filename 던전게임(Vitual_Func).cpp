#include <iostream>
#include <sstream>
#include <vector>


/*
	다형성
	" 부모 클래스형 포인터 = 자식 클래스 " 
	가상함수를 이용하여 동적 바인딩 사용
*/
using namespace std;

class Sprite
{
protected :
	int x, y; // 현위치 
	char shape;

public :
	Sprite(int x, int y, char shape)
		: x{x}
		, y{y}
		, shape{shape}
	{}
	virtual ~Sprite() {};

	virtual void move(char d) = 0; // 추상 클래스 

	char getShape()	{ return shape; }
	int getX(){ return x; }
	int getY() { return y; }

	// 다른 스프라이트 충돌 여부 확인, 충돌 시 true 반환 
	bool checkCollision(Sprite* other)
	{
		if (x == other->getX() && y == other->getY()) return true;
		else return false;
	}
};

// 주인공 
class Hero : public Sprite
{
public : 
	Hero(int x, int y) : Sprite(x, y, 'H'){}
	void draw()
	{
		cout << 'H' << endl;
	}

	void move(char d)
	{
		if (d == 'a') { x -= 1; }
		else if (d == 'w') { y -= 1; }
		else if (d == 's') { y += 1; }
		else if (d == 'd') { x += 1; }
	}
};

class Treasure : public Sprite
{
public :
	Treasure(int x, int y) : Sprite(x, y, 'T') {}
	void move(char d){}
};

class Enemy : public Sprite
{
public:
	Enemy(int x, int y) : Sprite(x, y, 'E') {}
	void move(char d) {}
};

class Board
{
private:
	char *board;
	int width, height;

public :
	Board(int w, int h)
		: width{ w }
		, height{ h }
	{
		board = new char[width*height];
		clearBoard();
	}
	~Board() { delete board; }

	void setValue(int r, int c, char shape)
	{
		board[r*width + c] = shape;
	}

	void printBoard()
	{
		for (int i = 0; i < height; i++)
		{
			cout << "\t";
			for (int j = 0; j < width; j++)
				cout << board[i*width + j];
			cout << endl;
		}
	}

	void clearBoard()
	{
		for (int i = 0; i < height; i++)
			for (int j = 0; j < width; j++)
				board[i*width + j] = '.';
	}
};

void drawLine(char x)
{
	cout << endl;
	for (int i = 0; i < 100; i++)
		cout << x;
	cout << endl;
}


int main()
{
	// 벡터 사용 모든 스프라이트 저장
	// 다형성을 위하여 포인터를 사용, 다형성은 포인터를 통하여 구현됨 

	vector<Sprite *> list;
	int width, height;

	cout << "보드 크기 입력 : " << endl;
	cout << "가로 : ";
	cin >> width;
	cout << "세로 : ";
	cin >> height;

	Board board(height, width);
	list.push_back(new Hero(0, 0));
	list.push_back(new Treasure(height - 1, width - 1));
	list.push_back(new Enemy(3, 3));

	// 게임 설명 
	drawLine('*');
	cout << " 게임 목표 : 함정(T), 적(E)를 만나지 않고 보물에 도달" << endl;
	cout << " a, s, w, d를 이용하여 이동 가능 " << endl;
	drawLine('*');
	cout << endl;

	// 게임 루프
	while (true)
	{
		board.clearBoard();
		for (auto &e : list)
			board.setValue(e->getY(), e->getX(), e->getShape());
		board.printBoard();

		// 사용자 입력
		char direction;
		cout << "이동키 입력" << endl;
		cin >> direction;

		// 스프라이트 이동
		for (auto& e : list)
			e->move(direction);
		drawLine('-');
	}

	for (auto&e : list)
		delete e;
	list.clear();
	return 0;
}
