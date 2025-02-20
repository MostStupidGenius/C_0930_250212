#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// static 예약어
// 전역 변수에 쓰이거나 함수에 쓰이는 경우,
// 외부에서는 접근할 수 없는 대상이 된다.
// 즉, 내부적으로만 해당 변수나 함수에 접근하고자 할 때,
// static을 앞에 붙인다.

// 함수 내부에서의 static 지역 변수
// 일반 지역 변수는 함수가 호출될 때마다 메모리에 할당되어
// 함수가 종료되는 순간, 같이 메모리에서 해제된다.
// 하지만, static 지역변수는 함수가 실행될 때 최초 초기화 1번 이후로는
// 초기화 없이, 그 변수가 메모리에서 해제되지 않고 지속적으로
// 접근 가능한 상태로 유지된다. -> 프로그램 종료까지 해제되지 않는다.
int getValue() {
	int var = 10;
	var++;
	printf("%d ", var);
	return var;
}

int getValueStatic() {
	// 첫 호출에만 초기화되고
	// 이후 함수 사용 시에는 static 초기화 부분은 건너뛴다.
	static int var = 10;
	var++;
	printf("%d ", var);
	return var;
}

int main() {
	printf("===지역 변수===\n");
	for (int i = 0; i < 5; i++) {
		getValue();
	}
	// 11 11 11 11 11
	
	printf("\n===전역 변수===\n");
	for (int i = 0; i < 5; i++) {
		getValueStatic();
	}
	// 11 12 13 14 15
	return 0;
}