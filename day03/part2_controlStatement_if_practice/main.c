#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �ǽ�1
	// ������ ���� score�� �����ϰ�
	int score = 0;
	// �� ���� 0���� 100������ ������ �Է¹޾�
	printf("���� �Է�(0~100): ");
	int _ = scanf("%d", &score);

	// 90�̻� 100���� -> A ���
	//if (score >= 90 && score <= 100) {
	//	printf("A");
	//}
	//// 80�̻� 90�̸� -> B
	//else if (score >= 80) {
	//	printf("B");
	//}
	//// 70�̻� 80�̸� -> C
	//else if (score >= 70) {
	//	printf("C");
	//}	
	//// 70�̸� -> F
	//else {
	//	printf("F");
	//}
	
	// ����1. ����ϴ� ���ڸ�
	// ���� score_char�� ��Ƽ�
	// ����2. else�� ���� �ʰ�
	// score_char�� �ʱⰪ Ȱ���ؼ�
	// ��� ����ϱ�
	// if���� ���� �ڿ� ���
	// �⺻������ F�� �����Ͽ� ���� ������� �ʾ��� ��
	// else�� �ش��ߴ� ������ ǥ���ǵ��� �̸� �����Ѵ�.
	char score_char = 'F';

	if (score >= 90 && score <= 100) {
		score_char = 'A';
	}
	// 80�̻� 90�̸� -> B
	else if (score >= 80) {
		score_char = 'B';
	}
	// 70�̻� 80�̸� -> C
	else if (score >= 70) {
		score_char = 'C';
	}
	// 70�̸� -> F
	// �⺻������ F�� ����ֱ� ������ else������ ���� �־��� �ʿ䰡 ����.
	//else {
	//	score_char = 'F';
	//}
	// ��¹����� �ϰ�ó��
	printf("����: %c\n", score_char);

	printf("%c\n", score >= 90 ? 'A' : 
		score >= 80 ? 'B' : 
		score >=70 ? 'C' : 
			'F');
	return 0;
}