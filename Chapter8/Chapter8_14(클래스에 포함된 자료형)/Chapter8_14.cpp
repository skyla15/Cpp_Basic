/*
	클래스에 포함된 자료형 
	1) 특정 클래스만 사용하는 데이터 타입일 경우 
	   내부 클래스나 내부 구조체를 이용하여 자료형을 선언하여 사용하는  
*/

#include "stdafx.h"
#include <iostream>
using namespace std;



class Fruit
{
public :
	enum class FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};

	class Inner_Class
	{
		
	};

	struct inner_Struct
	{

	};

private :
	FruitType m_type;

public :
	Fruit(FruitType type)
		: m_type(type)
	{}

	FruitType getType()
	{
		return m_type;
	}
};

/*
	enum 및 enum class 차이
	1) enum class 사용시 해당 소속을 명시하여야함 
	2) 다른 형끼리의 변환 불가능 
	3) 출력을 위해서는 static_cast<int> 를 써서 강제 형변환을 해줘야함 .
*/

enum Font
{
	RED,
	GREEN,
	YELLOW,
};

enum class FontClass
{	
	GREEN,
	YELLOW,
	RED,
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);
	cout << static_cast<int>(apple.getType()) << endl;

	Font R = RED;
	cout << R << endl;

	FontClass R2 = FontClass::RED;
	cout << static_cast<int>(R2) << endl;

    return 0;
}

