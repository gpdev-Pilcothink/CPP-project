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
	cout << "�����������������������������������������" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                 ����               �ܡ�  ���                            ��" << endl;
	cout << "��               ��    ��             ��    �ܡ��                            ��" << endl;
	cout << "��             ��      ��               �ܡ�  ���                            ��" << endl;
	cout << "��           ��        ��                ��   ���                            ��" << endl;
	cout << "��           �������    �ܡܡܡܡܡܡ�   ���                            ��" << endl;
	cout << "��         �����������          ��   ���                            ��" << endl;
	cout << "��                           ��    �ܡܡܡ�   ���                            ��" << endl;
	cout << "��                           ��    ��  �� �����                            ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��    �ڵ� �ϸ鼭 ������~                                                     ��" << endl;
	cout << "��    ����(1), ����(2)                                                        ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "�����������������������������������������" << endl;
	gotoxy(8, 17);
	cout << "�Է�:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		gotoxy(8, 18);
		cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�.";
		gotoxy(8, 17);
		cout << "�Է�:";
		cin >> select;
	}
	if (select == 1) {
		character cha();

	}
	else {
		return 0;
	}
}