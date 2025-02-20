#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);

int add(int num1, int num2) {
	return num1 + num2;
}

int multi(int x, int y) {
	return x * y;
}

int main() {
	// 함수 포인터
	// 함수를 다른 이름으로 사용하거나, 그 함수를 가리키기 위해
	// 함수 포인터를 만들어 함수의 주소를 담을 수 있다.
	// 참조 대상이 되는 함수의 시그니처(매개변수의 개수, 종류, 순서)와
	// 반환타입을 그대로 하여 선언해야 한다.
	int(*funcPtr)(int, int);
	funcPtr = add;
	int result = funcPtr(3, 5);
	printf("3, 5: %d\n", result);

	funcPtr = multi;
	result = funcPtr(3, 5);
	printf("3, 5: %d\n", result);

	return 0;
}