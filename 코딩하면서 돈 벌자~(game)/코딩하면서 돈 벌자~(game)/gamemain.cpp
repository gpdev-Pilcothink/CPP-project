#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
gamemain :: gamemain() {
}


void gamemain::run(character *cha) {
	function f;
	system("cls"); //╕╩┼й▒т 40*20
	int x = 40, y = 20;
	int map = 0;
	int select = 0;
	int key = 0;
	cout << "бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бс                                                                            бс" << endl;
	cout << "бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс" << endl;
	while (select != 1) {
		f.gotoxy(x, y);
		cout << "бу";;
		key = _getch();
		if (key == LEFT) {
			f.gotoxy(x, y);
			cout << "  ";
			x-=2;
		}
		if (key == RIGHT) {
			f.gotoxy(x, y);
			cout << "  ";
			x+=2;
		}
		if (key == UP) {
			f.gotoxy(x, y);
			cout << "  ";
			y--;
		}
		if (key == DOWN) {
			f.gotoxy(x, y);
			cout << "  ";
			y++;
		}
		f.gotoxy(20, 25);
		cout << x << ","<< y;
	}
}


gamemain :: ~gamemain() {
}