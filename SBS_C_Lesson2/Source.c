#include <stdio.h>
#include <Windows.h>


#define SIZE 10

void main()
{
	const char* dialog[SIZE];

	dialog[0] = "�ȳ��ϼ���.";
	dialog[1] = "�ȳ��ϼ���. Ž���Դϴ�. �������̽���?";
	dialog[2] = "���� ����� ������ϴ�.";
	dialog[3] = "�׷��� ������ ��� ���ؼ� ������?";
	dialog[4] = "â���� ���ؼ� ���Խ��ϴ�.";
	dialog[5] = "������ ���� �Ƴ���?";
	dialog[6] = "����ġ�� �͵� â���� ���ؼ�..";
	dialog[7] = "�������� ������ �ֳ���?";
	dialog[8] = "���̾��Դϴ�. �׷��� �Ƿڸ� �ð���ϴ�.";
	dialog[9] = "�˰ڽ��ϴ�. ���縦 �� ���ڽ��ϴ�.";

	int cnt = 0;

		// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����

		// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����

		// 0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ����

		// 0x8001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����

	while (cnt < SIZE) {
		if (GetAsyncKeyState(VK_SPACE) & 0x0001) {
			if (cnt % 2 == 0) {
				printf("�Ƿ��� : ");
			}
			else {
				printf("Ž�� : ");
			}
			printf("%s\n", dialog[cnt]);
			cnt++;
		}

	}


}