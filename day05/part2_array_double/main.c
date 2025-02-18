#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 이중 배열
	// 배열의 요소로 또다른 배열을 가지는 자료구조로
	// 실제로 메모리에 저장될 때에는 연속된 공간에 저장된다.
	int arrInts[][4] = {
		{1, 2, 3, 4},
		{4, 5, 6},
		{7, 8, 9}
	};

	printf("%d\n", arrInts[1][3]);
	//printf("%d\n", arrInts);// 배열을 출력하는 방법으로는
	// 그 요소의 값을 확인할 수 없다.

	for (int i = 0; i < 3; i++) {
		printf("{");
		for (int j = 0; j < 4; j++) {
			printf("%d, ", arrInts[i][j]);
		}
		printf("}\n");
	}

	printf("\n");
	// 메모리 상에서 모두 연속된 공간을 차지하기 때문에
	// 행과 열의 길이를 정확하게 정해놓고
	// 값을 한 줄로 표현해도
	// 컴파일러가 알아서 그 값을 배치한다.
	int arrInts2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	for (int i = 0; i < 3; i++) {
		printf("{");
		for (int j = 0; j < 4; j++) {
			printf("%d, ", arrInts2[i][j]);
		}
		printf("}\n");
	}


	return 0;
}