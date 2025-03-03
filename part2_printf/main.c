#include <stdio.h>

int main() {
	// 출력문
	// 출력문이란, 사용자가 출력하길 원하는 값을 전달하여
	// 그 값이 콘솔창에 나오도록 하는 명령문을 가리킨다.
	// printf();
	// 여기서 f라는 단어 -> format의 첫글자
	// format: 서식
	// printf: "서식에 맞춰서 내용을 출력하라"
	// 서식문자: printf에서 내용을 출력할 때, 그 형식을 미리 지정하여
	// 정확한 위치에 정확한 타입의 값이 삽입되도록 해야 한다.

	// printf(
	// 서식문자를 포함할 수 있는 문자열,
	// 서식문자에 들어갈 값, 값2, 값3,...
	// );
	// 정수형 변수 선언 및 초기화
	int age = 32;
	
	// 변수 age에 담긴 값을 출력문을 통해 출력하고자 한다.
	printf("age: %d, %d, %d, %d\n", age, 1, 2, 3);

	// 줄바꿈 문자(newline)
	// \n
	// 문자열에 내에 작성되어 줄바꿈(아랫줄로 이동)하는 기능을
	// 수행하는 특수한 문자이다.
	printf("줄바꿈없음.");
	printf("그래서 한줄로 나옴.\n");

	// 서식문자
	// 서식문자란, pritnf, scanf처럼 f가 붙어서 서식문자를
	// 지원하는 함수, 기능에서 사용하는 문법으로
	// 정수형 -> %d, %ld
	printf("정수형 %d\n", 31);
	// 실수형 -> %f, %lf
	printf("실수형 %f\n", 3.141592);
	// 문자형 -> %c
	printf("문자형 %c\n", 65); // 'A'
	// 문자열 -> %s
	printf("문자열 %s\n", "Hello World");
	// 8진법 -> %o
	printf("8진법 %o\n", 64); // 100
	// 16진법 -> %x
	printf("16진법(소문자) %x\n", 63); // 3f
	printf("16진법(대문자) %X\n", 63); // 3F

	// unicode -> %u
	printf("유니코드 %u\n", 'A'); // 65

	return 0;
}