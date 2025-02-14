#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 관계 연산자(비교 연산자)
	// 이항 연산들로 이루어진 연산자로,
	// 두 항의 값을 비교하여 참, 거짓 여부를 반환하는
	// 연산자들이다.
	// 값의 동일 여부, 크기 비교
	
	// 동일 여부
	// 동등연산자 ==
	// 같니? -> 예 or 아니오
	// 반환값은 참(1)과 거짓(0)으로만 반환된다.
	printf("5 == 5 = %d\n", 5 == 5); // 1
	printf("5 == 5.0 = %d\n", 5 == 5.0); // 1

	// !=
	// 다르니?
	printf("\"5\" != 5 = %d\n", "5" != 5); // 1
	printf("65 != \'A\' = %d\n", 65 != 'A'); // 0(거짓)
	// 'A'와 숫자 65는 같은 것으로 취급된다.
	
	// >, <
	// 초과, 미만
	printf("\'A\' < \'C\' = %d\n", 'A' < 'C');
	// 'A'는 65에 매핑되어 있고
	// 'C'는 67에 매핑되어 있다. -> 참(1)

	// 부정연산자
	// !
	// 논리값 앞에 붙어 그 값을 반전시킨다.
	printf("!(\'A\' < \'C\') = %d\n", !('A' < 'C'));
	// 'A' < 'C'에 !를 붙여 그 값을 반전시키는 것은
	// 집합의 개념에서 여집합을 가리키는 것과 동일하다.
	// !를 붙인 것은 < 연산자에서 >= 연산자로 바꾼 것과
	// 동일한 결과를 보여준다.

	// >=, <=
	// 이상, 이하
	// 예제 생략

	// ========논리 연산자=========
	// 부정 연산자(NOT)
	// 논리값 앞에 붙어 그 값을 반전시킨다.
	// 0 -> 1
	// 1 -> 0

	// 논리곱 &&
	// AND 연산자라고 불리며, 두 항의 논리값이 모두 참이면
	// 그 결과 참을 반환한다.
	// -> 하나라도 거짓(0)이면 그 결과 거짓을 반환한다.
	printf("1 && 1 = %d\n", 1 && 1); // 1
	printf("1 && 0 = %d\n", 30 && 0); // 0
	printf("0 && 1 = %d\n", 0 && 100); // 0
	printf("0 && 0 = %d\n", 0 && 0); // 0

	// 논리합 || -> Shift + \ => |
	// 또는
	// 두 값 중 하나라도 참이면 그 결과 참을 반환한다.
	// 두 값이 모두 거짓이어야 비로소 거짓을 반환한다.
	printf("1 || 1 = %d\n", 1 || 1); // 1
	printf("1 || 0 = %d\n", 1 || 0); // 1
	printf("0 || 1 = %d\n", 0 || 1); // 1
	printf("0 || 0 = %d\n", 0 || 0); // 0

	// ========비트 연산자=========
	// & 비트 연산자
	// 전달된 숫자값을 2진법으로 변경했을 때
	// 위 아래로 두 값을 배치하고
	// 같은 자리의 값이 모두 1일 경우
	// 그 결과 자릿수는 1
	// 하나라도 0이라면 그 자릿수는 0으로 연산
	int result = 5 & 3; // 1
	// 5 => 0101
	// 3 => 0011
	// ? => 0001 => 1
	printf("5 & 3 = %d\n", result);

	result = 14 & 11; // 10?
	printf("14 & 11 = %d\n", result);

	// 비트 값의 표현
	// 0b로 시작하여 비트를 표현해야 한다.
	printf("0b0101 | 0b1010 = %d\n", 0b0101 | 0b1010);
	
	// XOR(^)
	// 두 비트가 서로 다르면 1
	// 같으면 0
	printf("0b0110 ^ 0b1111 = %d\n", 0b0110 ^ 0b1111); // 9

	// NOT(~)
	// 단항 연산자로, 정수값 앞에 붙어
	// 비트를 반전시킨다.
	// 1->0, 0->1
	// 2의 보수 -> 컴퓨터에서 정수를 표현할 때 음수를 나타내는 방법
	// 이진수에서 가장 왼쪽 비트를 부호 비트로 사용하여
	// 그 비트가 0이면 양수
	// 1이면 음수로 표현되는 것을 말한다.
	// 2의 보수를 구하는 순서
	// 1. 1의 보수 -> 각 비트를 먼저 반전
	// 2. 1을 더하기 -> 2의 보수

	printf("~0b1001 = %d\n", ~0b00001001);
	// 00001001 -> 11110110(1의 보수)
	// 11110110 + 1 -> 11110111
	
	// 십진법을 기준으로 계산할 때에는 
	// 기존 값에 -1을 곱하고
	// 1을 빼주면 그것이 2의 보수이다.
	printf("~10 = %d\n", ~10); // -11
	
	// 시프트 연산자
	// 비트를 왼쪽 혹은 오른쪽으로 밀어서 이동시키는 연산자다.
	// <<, >>
	// 좌항의 값을 우항의 값만큼 이동시킨다.
	printf("0b0110 << 1 = %d\n", 0b0110 << 1); // 12

	// 삼항연산자
	// 주어진 조건식의 결과값에 따라 반환되는 값을
	// 사용자가 직접 설정하는 커스터마이징 가능한 연산자다.

	// ※조건식이란? 연산 결과 참 혹은 거짓으로 나오는 식을 가리킨다.

	// 조건식 ? 참일경우값 : 거짓일경우값
	// 
	// 입력받은 두 정수 중 더 큰값을 big변수에 담아
	// 출력해보자.
	int num1 = 0, num2 = 0;
	printf("정수1 입력: ");
	scanf("%d", &num1);
	printf("정수2 입력: ");
	scanf("%d", &num2);

	// 만약 num1의 값이 num2의 값보다 크다면
	int big = num1 > num2 ? 
	// (참이라면)num1을 반환
		num1 :
	// (거짓이라면)num2를 반환
		num2;
	// 조건식의 결과에 따라 반환될 값을 선택.
	printf("result: %d\n", big);
	return 0;
}