#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 재귀 함수
// 자기자신을 호출하는 부분을 보유한 함수를 가리킨다.
// 이때, 재귀하는 부분과 재귀하지 않는 부분으로
// 두 개의 요소를 만들지 않으면
// 재귀하지 않거나 무한재귀에 빠질 수 있다.
// 재귀하는 부분: 재귀사례
// 재귀하지 않는 부분: 기본사례
// 기본사례에 도달할 수 있는 조건을 주어 함수를 호출하는 것이 아닌
// 값을 반환하는 방식으로 재귀를 끊어 주어야 한다.
int countG = 0;

int sumTotal(int num) {
	// 주어진 변수의 값으로부터 1씩 감소하는 등차수열의
	// 총합을 반환하는 함수
	// 이때 기본사례로 해당 값이 0에 도달하면 0을 반환하도록
	// 설정하여 재귀를 끊을 수 있는 조건을 설정한다.
	// 음수는 받지 않는다.
	if (num < 0) return -1;

	// 함수가 몇 번이나 호출되는지 static 지역변수로 확인해보자.
	static int count = 0;
	count++;

	// 기본 사례
	if (num == 0) {
		countG = count;
		return 0;
	}


	// 재귀 사례
	return num + sumTotal(num - 1);
}

int main() {
	int result = sumTotal(100); // 5050
	printf("result: %d\n", result);
	printf("index: %d\n", countG); // 101

	return 0;
}