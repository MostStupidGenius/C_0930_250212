#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���� global variable
// ���������� ���α׷��� ����� ��, data ������ �Ҵ�Ǿ�
// ���α׷��� ����� �� �޸𸮿��� �����ȴ�.
// �����ϸ� �޸𸮰����� ��������� ������
// �ʼ����� ��찡 �ƴ϶�� ���������� ������ ���ؾ� �Ѵ�.
// �̷��� ���� ������ ���� ������ ��� �Լ����� ������ �����ϸ�
// �ش� ������ ���� �����ϴ� ������ ������ ������
// ���� �Լ����� ���°����ν� ����ϰ� �Ѵ�.

int index = 0;

int add(int num1, int num2) { 
	index++;
	return num1 + num2;
}
int sub(int num1, int num2) { 
	index++;
	return num1 - num2;
}


int main() {
	int result = add(3, 7); // �Լ� ��� 1ȸ
	printf("%d\n", result);

	result = sub(31, 21); // �Լ� ��� 2ȸ
	printf("%d\n", result);

	result = add(result, result + 1); // �Լ� ��� 3ȸ
	result = sub(result, 10); // �Լ� ��� 4ȸ
	printf("%d\n", result);

	// ���������� �� Ȯ���ϱ�
	printf("index: %d\n", index); // �Լ� ��� Ƚ���� 4�� ��µȴ�.

	return 0;
}