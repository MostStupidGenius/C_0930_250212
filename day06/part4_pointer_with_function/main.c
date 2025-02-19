#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ ���� ���� ������ �ּҰ��� ������
// ������ ������ �� �� ���޹޾�
// �ش� �ּҰ��� ���� ���� �±�ȯ�ϴ� �Լ� �ۼ�
int swap(int* num1, int* num2) {
	// ���޵� �ּҰ��� ���� ���� �����Ͽ� �� ����
	// �ӽ� ���� temp�� ��´�.
	int temp = *num1;

	// *num1�� ����Ǿ����Ƿ� *num2�� ����
	// *num1�� �Űִܳ´�.
	*num1 = *num2;

	// *num2�� ������ temp�� ��Ƴ��� ���� �����Ѵ�.
	*num2 = temp;

	// ���� ����
	return 0;
}

// ���ڸ� ����Ű�� ������ ������ �� �� ���޹޾Ƽ�
// �� ���� �¹ٲٴ� �Լ� �����
void swapChar(char* char1, char* char2) {
	char temp = *char1;
	*char1 = *char2;
	*char2 = temp;
	return;
}

void swapText(char text[]) {
	// ���޵� ���� �迭�� ��� ��
	// 0���� 4��° ��ұ����� ���ڸ�
	// H i ���鹮�� 3���� �ٲٴ� ������ �����Ѵ�.
	char newText[] = "Hi   ";
	for (int i = 0; i < 5; i++) {
		text[i] = newText[i];
	}
}


int main() {
	// �޸�,�� �̿��Ͽ� ���� ���� �� �ٿ� �ʱ�ȭ
	int x = 10, y = 20;

	swap(&x, &y);

	printf("x: %d\ty: %d\n", x, y);

	printf("==���� ��ȯ==\n");

	char h = 'H', w = 'W';
	swapChar(&h, &w);

	printf("h: %c\tw: %c\n", h, w);

	// ���� �迭�� ����� ������ ��ҵ鳢��
	// �±�ȯ�ϵ��� �غ���.
	char text[] = "Hello World";

	// o�� W�� �ٲ۴�.
	swapChar(&text[4], &text[6]);

	printf("text: %s\n", text); // text: HellW oorld

	swapText(&text);

	printf("text: %s\n", text); // text: Hi    oorld

	return 0;
}