#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ܺ� �Լ� ������Ÿ��
void arrProcess(int* arr, int size, int (*callback)(int));

// ���޵� ���� �Լ�(�ݹ� �Լ�) ����
int square(int num1) {
	return num1 * num1;
}
// �ݹ��Լ�2
int half(int num1) {
	return num1 / 2;
}

// callback �Ű��Լ��� �Լ� ��ü�� �Ű����� Ÿ�԰� ��ȯŸ����
// ������ ������, �� arrProcess �Լ��� ����Ǳ� �������� 
// � ������ �������� �� �� ����.
// ��, �ݹ� �Լ���, �ܺ��Լ��� ����ϴ� ����� �ܿ�
// � �Լ��� ������ ���ؼ� �����ϴ� ���� �ǹ��Ѵ�.
void arrProcess(int* arr, int size, int (*callback)(int)) {
	for (int i = 0; i < size; i++) {
		arr[i] = callback(arr[i]);
	}
}


int main() {
	// �ݹ� �Լ�
	// �Լ��� �Ű������� �Լ��� �����Ͽ� �� �Լ�(�����Լ�)�� 
	// ���޹��� �ܺ��Լ��� �ȿ��� ���Ǵ� �׷� ���� �Լ���
	// �ݹ� �Լ��� �θ���.
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	// �� ��Ҹ� ������ ������ �ݹ��Լ� ����
	arrProcess(&arr, size, half);
	
	// �� ��Ҹ� �����ϴ� �ݹ��Լ��� ����
	arrProcess(&arr, size, square);


	for (int i = 0; i < size; i++) {
		printf("%d: %d\n", i, arr[i]);
	}

	return 0;
}