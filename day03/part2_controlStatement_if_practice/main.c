#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 실습1 12:09까지
	// 정수형 변수 score를 선언하고
	int score = 0;
	// 그 값을 0에서 100사이의 값으로 입력받아
	scanf("%d", &score);

	// 90이상 100이하 -> A 출력
	if (score >= 90 && score <= 100) {
		printf("A");
	}
	// 80이상 90미만 -> B
	else if (score >= 80) {
		printf("B");
	}
	// 70이상 80미만 -> C
	else if (score >= 70) {
		printf("C");
	}	
	// 70미만 -> F
	else {
		printf("F");
	}
	
	// 도전1. 출력하는 문자를
	// 변수 score_char에 담아서
	// if문이 끝난 뒤에 출력
	// 도전2. else를 쓰지 않고
	// score_char의 초기값 활용해서
	// 결과 출력하기

	return 0;
}