#include <iostream>
#include <cstdlib>
#include <string>
#include "gamestory1.h"
#include "character.h"
using namespace std;

void gamestory1::run() {
	system("cls");
	int select = 0;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■ 나는 21살 농사를 지으며 하루 하루 겨우 먹고 살아가는 농사꾼이다.                                   ■" << endl;
	cout << "■ 어린시절 부모님은 알 수 없는 이유로 어디론가 사라졌다.                                             ■" << endl;
	cout << "■ 마을 사람들의 이야기로는 부모님이 산책을 하러 마을 밖으로 나간 후 행방을 알 수 없다고 했다.        ■" << endl;
	cout << "■ 부모님은 사라지셨지만, 마을사람들이 나를 거둬주었기에 지금까지 잘 살 수 있었다.                    ■" << endl;
	cout << "■ 어느날 농작물을 재배하던 도중 하늘이 매우 검은 구름으로 가득 매워지는것을 보았다.                  ■" << endl;
	cout << "■ 그리고 동시에 아주 세찬비가 내렸고, 마을 사람들은 홍수를 대비해 준비를 하고 있었다.                ■" << endl;
	cout << "■ 갑자기! 매우 강력한 붉은 번개가 내 집을 내리쳤다. 동시에 내 집은 밤하늘처럼  검은색으로 변했다.    ■" << endl;
	cout << "■ 나는 옆에 있던 삽으로 있는 힘껏 내집의 벽을 내리쳤지만, 튕겨져 나갔다.                             ■" << endl;
	cout << "■ 이러한 상황에 마을사람들뿐만 아니라 나또한 겁에 질렸다.                                            ■" << endl;
	cout << "■ 갑자기 나는 머릿속에 부모님이 어린시절 나에게 해주었던 이야기가 떠올랐다.                          ■" << endl;
	cout << "■ 바로 '검은행성' 이야기이다.                                                                        ■" << endl;
	cout << "■ 검은 행성 이야기는 검은 구름으로 뒤덮인 행성에서 일어나는 아주 무서운 이야기이다.                  ■" << endl;
	cout << "■ 마치 이 상황과 너무 비슷하게 느껴졌다.                                                             ■" << endl;
	cout << "■ 동시에 나는 부모님이 갑자기 사라지게된 이유가 지금 이상황과 관련이 있을거라고 생각하였다.          ■" << endl;
	cout << "■ 마을 사람들은 이 상황에 대해 회의를 개최하였고, 나는 튕겨져 나간 삽을 줏으러 가고 있다.            ■" << endl;
	cout << "■ 삽을 줍는 순간 검게 변한 집의 문이 아주 큰 바람소리를 내며 덜컹 열리더니 나를 날려보냈다.          ■" << endl;
	cout << "■ 다행히 다치진 않았고, 팔에 약간의 상처를 입었다.                                                   ■" << endl;
	cout << "■ 문이 열렸음에도 사원의 안은 너무나도 어두워 안에 무엇이 있는지 확인 할 수 없었다.                  ■" << endl;
	cout << "■ 누군가는 이 검게 변해버린 나의 집안에 무엇이 있는지 어떻게 된건지 확인 해야한다.                   ■" << endl;
	cout << "■ 왜냐하면 집 주변에 피어오르는 검은 연기가 점점 늘어나는 기분이 느껴졌기 때문이다.                  ■" << endl;
	cout << "■ 우리 마을 사람들은 나 말고 모두 가족을 이루며 안정적이고 행복한 생황을 하고 있다.                  ■" << endl;
	cout << "■ 나는 누나도 형도 동생도 없다. 나는 잃을게 없다. 그리고 궁금했다 부모님의 행방을....                ■" << endl;
	cout << "■ 또한 이 검게 변해버린 나의 집이 마치 날 매우 강하게 끌어당기는 것 같았다.                          ■" << endl;
	cout << "■ 그리고 이 집은 내 집이기 때문에 마을 사람들에게 내가 집 안에 들어가겠다 하였다.                    ■" << endl;
	cout << "■ 마을 사람들은 위험해 보인다며 반대하였지만, 눈빛은 그렇지 않아 보였다.                             ■" << endl;
	cout << "■ 따라서 나는 검게 변한 내 집을 탐사하기 위해 마을 사람들과 이야기하며 생필품을 챙기고 있었다.       ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "캐릭터 생성(1), 종료 (2):" << endl;
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
		cout << "캐릭터 생성(1), 종료 (2):" << endl;
		cin >> select;
	}
	if (select == 1) {
		character story;
		story.run();
	}
	return;
}