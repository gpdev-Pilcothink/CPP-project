#include <cstring>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class character {
	string name; //�̸�����
	int money; //0������ ����
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
private:
	
protected:

public:
	character(); //������
	void make();
	~character(); //�Ҹ���
};

#endif



