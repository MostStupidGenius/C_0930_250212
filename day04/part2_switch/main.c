#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// switch문
	// 조건문 중 하나로, 어떤 변수의 값이 "정확히"
	// 어떤 값과 일치할 때, 그 코드로 흘러들어가는
	// 문법을 switch문이라 한다.
	// 이때 어떤 값의 앞에는 case를 붙여서 
	// 여러 경우를 표현할 수 있다.
	printf("정수 입력(1~4): ");
	int num = 0;
	scanf("%d", &num);

	//switch (검사할 변수) {case 상수1: 코드}
	switch (num) {
		// num의 값이 만약 1이라면
	case 1: case 5: // case를 여러 개 나열하여
		// OR처럼 동작시킬 수 있다.(또는)
		printf("가장 작은 수\n");
	case 2: case 6:
		printf("두번째 수\n");
	case 3:
		printf("세번째\n");
		break; // 아래로 가는 것을 막고
		// switch문 탈출
	case 4:
		printf("마지막\n");
		break;
	default:
		// else문처럼, 위의 모든 경우가 아닌 경우
		// 이 코드가 실행된다.
		printf("잘못된 값 입력\n");
	}

	return 0;
}