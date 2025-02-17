#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 실습1
	// 정수형 변수 score를 선언하고
	int score = 0;
	// 그 값을 0에서 100사이의 값으로 입력받아
	printf("점수 입력(0~100): ");
	int _ = scanf("%d", &score);

	// 90이상 100이하 -> A 출력
	//if (score >= 90 && score <= 100) {
	//	printf("A");
	//}
	//// 80이상 90미만 -> B
	//else if (score >= 80) {
	//	printf("B");
	//}
	//// 70이상 80미만 -> C
	//else if (score >= 70) {
	//	printf("C");
	//}	
	//// 70미만 -> F
	//else {
	//	printf("F");
	//}
	
	// 도전1. 출력하는 문자를
	// 변수 score_char에 담아서
	// 도전2. else를 쓰지 않고
	// score_char의 초기값 활용해서
	// 결과 출력하기
	// if문이 끝난 뒤에 출력
	// 기본값으로 F를 설정하여 값이 변경되지 않았을 때
	// else에 해당했던 값으로 표현되도록 미리 설정한다.
	char score_char = 'F';

	if (score >= 90 && score <= 100) {
		score_char = 'A';
	}
	// 80이상 90미만 -> B
	else if (score >= 80) {
		score_char = 'B';
	}
	// 70이상 80미만 -> C
	else if (score >= 70) {
		score_char = 'C';
	}
	// 70미만 -> F
	// 기본값으로 F가 들어있기 때문에 else문으로 값을 넣어줄 필요가 없다.
	//else {
	//	score_char = 'F';
	//}
	// 출력문으로 일괄처리
	printf("점수: %c\n", score_char);

	printf("%c\n", score >= 90 ? 'A' : 
		score >= 80 ? 'B' : 
		score >=70 ? 'C' : 
			'F');
	return 0;
}