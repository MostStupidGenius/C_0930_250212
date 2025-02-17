#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 반복문 for
	// for문은 단순 조건식에 따라 반복할지 여부를 결정했던
	// while문과 다르게, 반복문 안에서만 사용하는 변수를
	// 선언 및 초기화, 조건식, 증감식 등을
	// 형식화하여 하나의 문법으로 만든 반복문이다.
	// for(초기식;조건식;증감식){}

	// 초기식 0, 10 직전까지, 1씩 증가하는 등차수열
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}
	printf("\n");
	
	// 초기식 10, 0 직전까지, 1씩 감소하는 등차수열
	for (int i = 10; i > 0; i -= 1) {
		printf("%d ", i);
	}
	return 0;
}