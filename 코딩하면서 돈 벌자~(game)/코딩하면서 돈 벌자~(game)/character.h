#include <cstring>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class character {
	string name; //이름짓기
	int money; //0원부터 시작
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
private:
	
protected:

public:
	character(); //생성자
	void make();
	~character(); //소멸자
};

#endif



