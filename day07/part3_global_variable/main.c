#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역 변수 global variable
// 전역변수는 프로그램이 실행될 때, data 영역에 할당되어
// 프로그램이 종료될 때 메모리에서 해제된다.
// 남용하면 메모리관리가 힘들어지기 때문에
// 필수적인 경우가 아니라면 전역변수의 남용은 피해야 한다.
// 이러한 전역 변수는 현재 파일의 모든 함수에서 접근이 가능하며
// 해당 변수의 값을 공유하는 성질을 가지기 때문에
// 여러 함수에서 상태값으로써 사용하곤 한다.

int index = 0;

int add(int num1, int num2) { 
	index++;
	return num1 + num2;
}
int sub(int num1, int num2) { 
	index++;
	return num1 - num2;
}


int main() {
	int result = add(3, 7); // 함수 사용 1회
	printf("%d\n", result);

	result = sub(31, 21); // 함수 사용 2회
	printf("%d\n", result);

	result = add(result, result + 1); // 함수 사용 3회
	result = sub(result, 10); // 함수 사용 4회
	printf("%d\n", result);

	// 전역변수의 값 확인하기
	printf("index: %d\n", index); // 함수 사용 횟수인 4가 출력된다.

	return 0;
}