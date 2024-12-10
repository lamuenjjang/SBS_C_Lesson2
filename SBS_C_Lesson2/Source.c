#include <stdio.h>
#include <Windows.h>


#define SIZE 10

void main()
{
	const char* dialog[SIZE];

	dialog[0] = "안녕하세요.";
	dialog[1] = "안녕하세요. 탐정입니다. 무슨일이시죠?";
	dialog[2] = "강도 사건이 생겼습니다.";
	dialog[3] = "그러면 강도는 어디를 통해서 들어왔죠?";
	dialog[4] = "창문을 통해서 들어왔습니다.";
	dialog[5] = "도망은 어디로 쳤나요?";
	dialog[6] = "도망치는 것도 창문을 통해서..";
	dialog[7] = "도난당한 물건은 있나요?";
	dialog[8] = "다이아입니다. 그래서 의뢰를 맡겼습니다.";
	dialog[9] = "알겠습니다. 조사를 해 보겠습니다.";

	int cnt = 0;

		// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

		// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

		// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

		// 0x8001 : 이전에 누른 적이 있고 호출 시점에는 눌려있는 상태

	while (cnt < SIZE) {
		if (GetAsyncKeyState(VK_SPACE) & 0x0001) {
			if (cnt % 2 == 0) {
				printf("의뢰인 : ");
			}
			else {
				printf("탐정 : ");
			}
			printf("%s\n", dialog[cnt]);
			cnt++;
		}

	}


}