#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정수형 값을 지닌 변수의 주소값을 저장한
// 포인터 변수를 두 개 전달받아
// 해당 주소값의 값을 서로 맞교환하는 함수 작성
int swap(int* num1, int* num2) {
	// 전달된 주소값의 실제 값에 접근하여 그 값을
	// 임시 변수 temp에 담는다.
	int temp = *num1;

	// *num1은 백업되었으므로 *num2의 값을
	// *num1에 옮겨넣는다.
	*num1 = *num2;

	// *num2의 값으로 temp에 담아놨던 값을 대입한다.
	*num2 = temp;

	// 문제 없음
	return 0;
}

// 문자를 가리키는 포인터 변수를 두 개 전달받아서
// 두 값을 맞바꾸는 함수 만들기
void swapChar(char* char1, char* char2) {
	char temp = *char1;
	*char1 = *char2;
	*char2 = temp;
	return;
}

void swapText(char text[]) {
	// 전달된 문자 배열의 요소 중
	// 0부터 4번째 요소까지의 문자를
	// H i 공백문자 3개로 바꾸는 동작을 수행한다.
	char newText[] = "Hi   ";
	for (int i = 0; i < 5; i++) {
		text[i] = newText[i];
	}
}


int main() {
	// 콤마,를 이용하여 여러 변수 한 줄에 초기화
	int x = 10, y = 20;

	swap(&x, &y);

	printf("x: %d\ty: %d\n", x, y);

	printf("==문자 교환==\n");

	char h = 'H', w = 'W';
	swapChar(&h, &w);

	printf("h: %c\tw: %c\n", h, w);

	// 문자 배열을 만들어 내부의 요소들끼리
	// 맞교환하도록 해보자.
	char text[] = "Hello World";

	// o와 W를 바꾼다.
	swapChar(&text[4], &text[6]);

	printf("text: %s\n", text); // text: HellW oorld

	swapText(&text);

	printf("text: %s\n", text); // text: Hi    oorld

	return 0;
}