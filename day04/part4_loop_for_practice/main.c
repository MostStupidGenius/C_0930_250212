#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 실습1.
	// 시작값 0, 100 직전까지, 1씩 증가
	// +조건: 짝수만 출력할 것.(if)
	// i % 2 == 0 => true => 짝수
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");
	// 실습2.
	// 시작값 100, 0직전까지, 2씩 감소
	// +조건: i의 값이 3의 배수일 때만 출력
	for (int i = 100; i > 0; i -= 2) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n===실습3===\n");
	// 실습3.
	// 시작값 0, 100 직전까지, 1씩 증가
	// +조건: i의 값이 2의 배수이거나 3의 배수일 때만 출력
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}