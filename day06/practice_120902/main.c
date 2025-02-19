#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string) {
    int answer = 0;
	// �Լ� �ȿ��� ó���ϱ� ���� ���� �ӽ� ���ڹ迭 ����
	char text[100] = "";
	// �ӽ� ������ ���ڿ� ���� ����
	strcpy(text, my_string);
	// �ӽ� ���� ���ڿ��� ���̸� ����
	int length = strlen(text);

	// �ǿ����� ���ڵ��� ���� ���ڹ迭 ����
	char before[5] = "", after[5]="";
	// �ǿ����� ���ڸ� ���� ����
	int beforeNum = 0, afterNum = 0;
	int flag = 0; // �����ڸ� �������� ���θ� Ȯ��

	for (int i = 0; i < length; i++){
		char c = text[i];
		switch (c) {
		case '+':

			flag = 1;
			break;
		case '-':
			flag = -1;
			break;
		case ' ':
			if (flag == 0) {
				before[strlen(before)] = '\0';
				beforeNum = (int)before;
			}
			else {
				after[strlen(after)] = '\0';
				afterNum = (int)after;
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
	
	printf("%d\n", length);
	printf("result: %d\n", beforeNum + (flag * afterNum));

    return answer;
}

int main() {
	int result = solution("3 + 7");
	printf("%d\n", result);
}