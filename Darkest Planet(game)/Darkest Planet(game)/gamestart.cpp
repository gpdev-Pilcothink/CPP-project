#include <iostream>
#include "gamestory1.h"
using namespace std;

int main()
{
	int select = 0;
	cout << "��������������������������������������������������" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��       ����         ��        ����     ��    ��     ����       ����   ������      ��" << endl;
	cout << "��       ��    ��     ��  ��      ��   ��    ��  ��      ��     ��    ��            ��          ��" << endl;
	cout << "��       ��    ��    �����     ����     ���        �����      ����       ��          ��" << endl;
	cout << "��       ��    ��   ��      ��    ��   ��    ��  ��      ��                 ��      ��          ��" << endl;
	cout << "��       ����    ��        ��   ��    ��   ��    ��      ����      ����       ��          ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��          �����     ��              ��         ��        ��   �����   ������        ��" << endl;
	cout << "��          ��     ��    ��            ��  ��       �� ��     ��   ��             ��            ��" << endl;
	cout << "��          �����     ��           �����      ��   ��   ��   �����       ��            ��" << endl;
	cout << "��          ��           ��          ��      ��     ��     �� ��   ��             ��            ��" << endl;
	cout << "��          ��           �����   ��        ��    ��        ��   �����       ��            ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                         �ܡܡ�                                               ��" << endl;
	cout << "��                                      �ܡܡܡܡܡ�                                            ��" << endl;
	cout << "��                                    �ܡܡܡܡܡܡܡ�                                          ��" << endl;
	cout << "��                                    �ܡܡܡܡܡܡܡ�                                          ��" << endl;
	cout << "��                                      �ܡܡܡܡܡ�                                            ��" << endl;
	cout << "��                                         �ܡܡ�                                               ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��������������������������������������������������" << endl;
	cout << "����(1), ���� (2):" << endl;
	cin >> select;
	while (cin.fail() == true || (select !=1 && select !=2) ) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
		cout << "����(1), ����(2) :" << endl;
		cin >> select;
	}

	if (select == 1) {
		gamestory1 story;
		story.run();
	}
	return 0;
}