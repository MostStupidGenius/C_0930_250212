#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 함수(function)
// 자주 사용하는 코드를 덩어리째 따로 정의하여
// 이름을 붙이고 그 이름을 통해 반복적으로 기능을
// 사용하고자 미리 정의해놓는 코드 블록
// main() 함수 바깥★에
// 반환값의타입 함수명(매개변수1,변수2,...){실행할 코드 로직}
// 반환값이 있는 경우, 그 타입을 적는다.
// 반환값이 없는 경우, void를 적는다.
void addPrint(int a, int b) {
	// 전달받은 두 정수를 더한 결과를 출력한다.
	printf("%d\n", a + b);
	// 반환이 없는 경우, 함수 가장 마지막에 자동으로
	// return;이 들어간다.
	return;
	// return 예약어의 기능
	// 1. 뒤따라 오는 값을 함수를 사용했던 위치에
	// 전달하고 치환한다.
	// 2. return이 위치한 함수를 종료하고
	// 반환할 값이 있다면 반환하고
	// 없다면 함수 종료만 수행한다.

	// return을 사용한 코드 아래의 내용은
	// 함수가 이미 종료되었기 때문에
	// 도달할 수가 없다. -> 실행될 수가 없다
	// unreachable code or dead code
	printf("도달할 수 없는 코드\n");
}

// 배열을 선언과 정의를 할 때, 
// 중괄호{}, 즉 바디를 적지 않으면 이건 선언에 해당한다.
// 선언을 먼저하고 이후에 정의를 따로 할 수도 있다.
// 매x, 반x
void printName() {
	printf("홍길동\n");
}

// 매o, 반x
void print(int num); // 선언만

// 매x, 반o
char* getName(); // 반환값이 문자열

// 매o, 반o
char* makeFullName(char* lastName, char* firstName);

// 바디{}가 생겼으므로 이는 정의를 하는 것이다.
void print(int num) {
	printf("%d\n", num);
}

// 선언을 먼저 하고 정의를 하는 것은
// 각 함수 안에서 다른 함수를 호출하는 경우에 유용하다.
// 미구현(선언만)된 함수를 호출하면 서로 간에 정의 순서에 따른 문제가
// 발생하지 않는다.

char* getName() {
	char name[] = "홍길동";
	return name;
}

//char* makeFullName(char lastName, char firstName) {
//	char fullName[3]; // 반환할 문자열 변수
//	//strcat(fullName, lastName); // 성 붙이기
//	//strcat(fullName, firstName);// 이름 붙이기
//	fullName[0] = lastName;
//	fullName[1] = firstName;
//	fullName[2] = '\0';
//	return fullName; // 성과 이름을 합한 문자열 반환
//}

int add(int a, int b) {
	int result = 0; // 반환할 변수 선언

	result = a + b; // 로직

	return result; // 결과 변수 반환
}

int main() {
	// 함수의 사용
	// 함수는 함수명과 함께 소괄호()를 적으면
	// 함수를 사용하는 것이 된다.
	// 아무리 함수명을 사용했더라도 소괄호가 없으면
	// 사용이 아니라 그 함수 자체를 가리키게 되는 것이다.

	// if, for, while 등의 문법적인 단어 뒤에 소괄호가
	// 있는 게 아니라면 그외의 경우,
	// 단어와 함께 소괄호를 사용하는 모든 경우는
	// 함수를 사용하는 것으로 생각해도 무방하다.
	addPrint(3, 5);
	//printf("fullName: %s\n", makeFullName('h', 'o'));


	// addPrint()함수는 내부에서 출력만 하고 함수가 종료된다.
	// 하지만 add()함수는 로직에 대한 결과를 
	// 함수를 사용했던 쪽으로 되돌려주어(return) 그 값을 활용할 수 있도록
	// 할 수 있다.
	printf("%d\n", add(3, 5)*7);

	return 0;
}