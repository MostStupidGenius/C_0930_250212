#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �ǽ�1 12:09����
	// ������ ���� score�� �����ϰ�
	int score = 0;
	// �� ���� 0���� 100������ ������ �Է¹޾�
	scanf("%d", &score);

	// 90�̻� 100���� -> A ���
	if (score >= 90 && score <= 100) {
		printf("A");
	}
	// 80�̻� 90�̸� -> B
	else if (score >= 80) {
		printf("B");
	}
	// 70�̻� 80�̸� -> C
	else if (score >= 70) {
		printf("C");
	}	
	// 70�̸� -> F
	else {
		printf("F");
	}
	
	// ����1. ����ϴ� ���ڸ�
	// ���� score_char�� ��Ƽ�
	// if���� ���� �ڿ� ���
	// ����2. else�� ���� �ʰ�
	// score_char�� �ʱⰪ Ȱ���ؼ�
	// ��� ����ϱ�

	return 0;
}