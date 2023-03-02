#include <iostream>
#include <Windows.h>
#include "character.h"
using namespace std;

void gotoxy(int x, int y) {
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main() {
	int select = 0;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                 ■■■               ●●  ■■                            ■" << endl;
	cout << "■               ■    ■             ●    ●■■                            ■" << endl;
	cout << "■             ■      ■               ●●  ■■                            ■" << endl;
	cout << "■           ■        ■                ●   ■■                            ■" << endl;
	cout << "■           ■■■■■■    ●●●●●●●   ■■                            ■" << endl;
	cout << "■         ■■■■■■■■■■          ●   ■■                            ■" << endl;
	cout << "■                           ■    ●●●●   ■■                            ■" << endl;
	cout << "■                           ■    ●  ● ■■■■                            ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■    코딩 하면서 돈벌자~                                                     ■" << endl;
	cout << "■    시작(1), 종료(2)                                                        ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	gotoxy(8, 17);
	cout << "입력:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		gotoxy(8, 18);
		cout << "잘못 입력하였습니다. 다시 입력 하십시오.";
		gotoxy(8, 17);
		cout << "입력:";
		cin >> select;
	}
	if (select == 1) {
		character cha();

	}
	else {
		return 0;
	}
}