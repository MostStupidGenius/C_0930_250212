#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 다중 반복문
	// 반복문 안에 또다른 반복문이 들어있는(nested)
	// 형태를 가리키는 말로, 실무에서는 최대 3중 반복문까지
	// 접할 수 있다.(4중 -> 비효율적)

	// 시간의 시(hour)는 0부터 11까지 반복된다.
	for (int hour = 0; hour < 12; hour++) {
		printf("===%02d시===\n", hour);

		// 시간의 분은 0부터 59분까지 존재한다.
		for (int min = 0; min < 60; min++) {
			printf("%02d시 %2d분\n", hour, min);
		}
	}







	return 0;
}