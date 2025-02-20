#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* my_string) {
	int answer = 0;
	// �Լ� �ȿ��� ó���ϱ� ���� ���� �ӽ� ���ڹ迭 ����
	char text[100] = "";
	// �ӽ� ������ ���ڿ� ���� ����
	strcpy(text, my_string);
	// �ӽ� ���� ���ڿ��� ���̸� ����
	int length = strlen(text);

	// �ǿ����� ���ڵ��� ���� ���ڹ迭 ����
	char before[100] = "", after[100] = "";
	// �ǿ����� ���ڸ� ���� ����
	int beforeNum = 0, afterNum = 0;
	int flag = 0; // �����ڸ� �������� ���θ� Ȯ��

	for (int i = 0; i < length; i++) {
		char c = text[i];
		printf("%d c: %c\n", i, c);
		switch (c) {
		case '+':
			flag = 1;
			break;
		case '-':
			flag = -1;
			break;
		case ' ':
			// flag�� ���� ����� ���� ���ٸ�
			// ù��° �ǿ����ڷ� ����
			if (flag == 0) {
				before[strlen(before)] = '\0';
				// ���� ���ڿ��� ���ڷ� ����
				beforeNum = atoi(before);
			}
			break;
		default: // �����ڰ� �ƴ� ���
			if (flag == 0) { // ������ ���� �ǿ�����
				// �̹� ��� ������ ������° �ε����� 
				// ���ο� ���� ����
				before[strlen(before)] = c;
			}
			else {
				after[strlen(after)] = c;
			}
		}
	}
	// ��� ���ڿ��� ��ȸ�ϰ� ����
	// �ι�° �ǿ������� ���� ���������� ����
	after[strlen(after)] = '\0';
	afterNum = atoi(after);

	answer = beforeNum + (flag * afterNum);
	return answer;
}

int main() {
	int result = solution("3 + 7");
	printf("%d\n", result);
	result = solution("13 - 7");
	printf("%d\n", result);
	result = solution("31 - 52");
	printf("%d\n", result);

	result = solution("31123123 - 31000000");
	printf("%d\n", result);
}