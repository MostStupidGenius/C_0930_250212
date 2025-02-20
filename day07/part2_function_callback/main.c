#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 외부 함수 프로토타입
void arrProcess(int* arr, int size, int (*callback)(int));

// 전달될 내부 함수(콜백 함수) 정의
int square(int num1) {
	return num1 * num1;
}
// 콜백함수2
int half(int num1) {
	return num1 / 2;
}

// callback 매개함수는 함수 자체의 매개변수 타입과 반환타입은
// 정해져 있지만, 이 arrProcess 함수가 실행되기 전까지는 
// 어떤 동작을 수행할지 알 수 없다.
// 즉, 콜백 함수란, 외부함수를 사용하는 사용자 단에
// 어떤 함수를 쓸지를 정해서 전달하는 것을 의미한다.
void arrProcess(int* arr, int size, int (*callback)(int)) {
	for (int i = 0; i < size; i++) {
		arr[i] = callback(arr[i]);
	}
}


int main() {
	// 콜백 함수
	// 함수에 매개변수로 함수를 전달하여 그 함수(내부함수)가 
	// 전달받은 외부함수의 안에서 사용되는 그런 내부 함수를
	// 콜백 함수라 부른다.
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	// 각 요소를 반으로 나누는 콜백함수 전달
	arrProcess(&arr, size, half);
	
	// 각 요소를 제곱하는 콜백함수를 전달
	arrProcess(&arr, size, square);


	for (int i = 0; i < size; i++) {
		printf("%d: %d\n", i, arr[i]);
	}

	return 0;
}