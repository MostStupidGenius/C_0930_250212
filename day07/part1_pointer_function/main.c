#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);

int add(int num1, int num2) {
	return num1 + num2;
}

int multi(int x, int y) {
	return x * y;
}

int main() {
	// �Լ� ������
	// �Լ��� �ٸ� �̸����� ����ϰų�, �� �Լ��� ����Ű�� ����
	// �Լ� �����͸� ����� �Լ��� �ּҸ� ���� �� �ִ�.
	// ���� ����� �Ǵ� �Լ��� �ñ״�ó(�Ű������� ����, ����, ����)��
	// ��ȯŸ���� �״�� �Ͽ� �����ؾ� �Ѵ�.
	int(*funcPtr)(int, int);
	funcPtr = add;
	int result = funcPtr(3, 5);
	printf("3, 5: %d\n", result);

	funcPtr = multi;
	result = funcPtr(3, 5);
	printf("3, 5: %d\n", result);

	return 0;
}