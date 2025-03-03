#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 연산자
	// 연산자란, 피 연산이 되는 값들을 
	// 연산자가 정해놓은 연산방식에 따라
	// 결과를 반환하는 특수한 기호들을 가리킨다.
	
	// 산술 연산자(Arithmethic Operator)
	// +, -, *, /
	// 덧셈+, 뺄셈-
	// 곱셈*, 나눗셈/
	printf("%d\n", 3 * 5); // 15
	printf("%d\n", -3 * -3); // 9
	// 소괄호()로 연산을 감싸면 가장 먼저 실행한다.
	// 최우선 연산자(그룹 연산자)
	// 덧셈, 뺄셈과 곱셈, 나눗셈 중, 곱셈쪽을 먼저 연산하기 때문에
	// 만약 덧셈, 뺄셈을 먼저 연산하고자 한다면
	// 소괄호로 묶어서 연산해야 한다.
	printf("%d\n", 1 - 3 * 2 + 3); // -2
	printf("%d\n", (1 - 3) * (2 + 3)); // -10

	// 나눗셈 /
	// 정수 나눗셈 -> 몫 연산자
	printf("%d\n", 30 / 4); // 7 ... 2
	// 실제 출력은 7이 출력된다.

	// 실수 나눗셈 -> 소수점으로 표현된다.
	// 서식문자로 제한하지 않으면 소숫점 6번째 자릿수까지 표현된다.
	printf("%.2f\n", 100.0 / 8.0);

	// 나머지 연산자 %
	// 정수값 피연산자에 대해서만 사용할 수 있으며
	// 연산결과 우항의 피연산자로 나눈 몫에 따른 나머지를 반환한다.
	// 주로 우항의 값이 좌항의 약수인지 확인할 때 사용된다.
	printf("%d\n", 12 % 3); // 4...0
	// 나머지가 0이라는 의미는, 두 수가
	// 배수와 약수의 관계라는 의미이다.
	// 또한 짝수인지 홀수인지 여부를 파악할 때
	// 가장 많이 쓰인다.
	printf("%d\n", 123456 % 2); // 2로 나눴을 때의 결과값이
	// 0이라면 짝수, 1이라면 홀수가 된다.

	return 0;
}