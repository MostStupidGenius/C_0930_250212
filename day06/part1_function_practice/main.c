#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �Լ��� ������Ÿ�� ����
// �Ʒ����� �Լ��� �����ϱ� ���� �� ����θ� �̸� �ۼ��Ͽ�
// ���Ŀ� �̸� ������� �Լ��� �����ϱ� ���� �����δ�
// ������ ���赵�̴�.

// ���� �� ���� ���޹޾Ƽ� �� ���� ���� ����� ��ȯ�ϴ� �Լ�
int add(int, int);
// �� ���� �� �ռ� �������� ���� ������ �� ���� ��ȯ
int sub(int, int);
// �� ������ ���� ����� ��ȯ
int multi(int, int);
// ù��° �Ű��������� �ι�° �Ű������� ���� ����� ��ȯ
int divide(int, int);

// ���� �ϳ��� ���޹޾Ƽ� �������� �������� ��ȯ�ϴ�
// triple �Լ��� �ۼ��϶�
int triple(int);

// add�Լ� ����
int add(int num1, int num2) {
	int result;
	result = num1 + num2;
	return result;
}
// �� ���� �� �ռ� �������� ���� ������ �� ���� ��ȯ
int sub(int num1, int num2) {
	//int result = num1 - num2;
	//return result;
	int result = add(num1, -num2);
	return result;
}
// �� ������ ���� ����� ��ȯ
int multi(int num1, int num2) {
	int result = 0;
	result = num1 * num2;
	return result;
}
// ù��° �Ű��������� �ι�° �Ű������� ���� ����� ��ȯ
int divide(int num1, int num2) {
	int result = 0; // �ʱⰪ ����
	// �и� 0�� ���, ������ �߻��� �� �ִ�.
	// ��ȯ������ 0�� ��ȯ�Ѵ�.
	if (num2 == 0) return 0;
	result = num1 / num2;
	return result;
}

int triple(int num) {
	int result = 0;
	result = num * num * num;
	return result;
}

// ������Ÿ���� ���� �ۼ��ϰ� ���߿� �����ϴ� ����
// - ������ �Լ����� �ٸ� �Լ� �ȿ��� ���� ��,
// ���Ǹ� ���� ���, �� ������ ������ ���� 
// ȣ���� ���ϴ� ��찡 �����.
// - ������ ������ ���� �صθ�, ���߿� ���Ǹ� �ϴ���
// �Լ��� ȣ���ϴ� �� ������ ���� �ȴ�.

int main() {
	int result = add(3, 5) == 8;
	printf("add(3, 5)\t:%s\n", result == 1 ? "����" : "����");
	
	result = sub(10, 7) == 3;
	printf("sub(10, 7)\t:%s\n", result == 1 ? "����" : "����");
	
	result = multi(10, 7) == 70;
	printf("multi(10, 7)\t:%s\n", result == 1 ? "����" : "����");
	
	result = divide(13, 3) == 4;
	printf("divide(13, 3)\t:%s\n", result == 1 ? "����" : "����");

	result = triple(3) == 27;
	printf("triple(3)\t:%s\n", result == 1 ? "����" : "����");

	return 0;
}