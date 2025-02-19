#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 함수의 프로토타입 선언
// 아래에서 함수를 정의하기 전에 그 선언부를 미리 작성하여
// 이후에 이를 기반으로 함수를 정의하기 위해 만들어두는
// 일종의 설계도이다.

// 정수 두 개를 전달받아서 그 값을 더한 결과를 반환하는 함수
int add(int, int);
// 두 정수 중 앞선 정수에서 뒤의 정수를 뺀 값을 반환
int sub(int, int);
// 두 정수의 곱셈 결과를 반환
int multi(int, int);
// 첫번째 매개변수에서 두번째 매개변수를 나눈 결과를 반환
int divide(int, int);

// 정수 하나를 전달받아서 세제곱한 정수값을 반환하는
// triple 함수를 작성하라
int triple(int);

// add함수 정의
int add(int num1, int num2) {
	int result;
	result = num1 + num2;
	return result;
}
// 두 정수 중 앞선 정수에서 뒤의 정수를 뺀 값을 반환
int sub(int num1, int num2) {
	//int result = num1 - num2;
	//return result;
	int result = add(num1, -num2);
	return result;
}
// 두 정수의 곱셈 결과를 반환
int multi(int num1, int num2) {
	int result = 0;
	result = num1 * num2;
	return result;
}
// 첫번째 매개변수에서 두번째 매개변수를 나눈 결과를 반환
int divide(int num1, int num2) {
	int result = 0; // 초기값 설정
	// 분모가 0인 경우, 문제가 발생할 수 있다.
	// 반환값으로 0을 반환한다.
	if (num2 == 0) return 0;
	result = num1 / num2;
	return result;
}

int triple(int num) {
	int result = 0;
	result = num * num * num;
	return result;
}

// 프로토타입을 먼저 작성하고 나중에 정의하는 이유
// - 선언한 함수들이 다른 함수 안에서 사용될 때,
// 정의만 했을 경우, 그 정의한 순서에 따라서 
// 호출을 못하는 경우가 생긴다.
// - 하지만 선언을 먼저 해두면, 나중에 정의를 하더라도
// 함수를 호출하는 데 문제가 없게 된다.

int main() {
	int result = add(3, 5) == 8;
	printf("add(3, 5)\t:%s\n", result == 1 ? "성공" : "실패");
	
	result = sub(10, 7) == 3;
	printf("sub(10, 7)\t:%s\n", result == 1 ? "성공" : "실패");
	
	result = multi(10, 7) == 70;
	printf("multi(10, 7)\t:%s\n", result == 1 ? "성공" : "실패");
	
	result = divide(13, 3) == 4;
	printf("divide(13, 3)\t:%s\n", result == 1 ? "성공" : "실패");

	result = triple(3) == 27;
	printf("triple(3)\t:%s\n", result == 1 ? "성공" : "실패");

	return 0;
}