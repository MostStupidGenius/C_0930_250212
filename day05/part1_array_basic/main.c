#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// part1_arrray_basic


int main() {
	// 배열(Array)
	// "같은 자료형 타입"을 여러 개를 한번에 관리할 수 있도록
	// 묶어놓은 자료구조
	// 선언하는 시점에 길이를 정해놓고 들어가는
	// "고정길이" 자료구조이다.
	// 저장한 값들을 요소라고 부르며, 각 요소에 접근할 때에는
	// 순서값(index)을 이용하여 접근해야 한다.

	// 배열의 선언
	// 요소의타입 변수명[길이];
	// 지정된 길이만큼의 공간을 확보한 배열이 생성된다.
	// 단순 선언시에는 반드시 길이를 작성해주어야 한다.
	// 길이는 0보다 커야 한다.
	int arrInt[3];

	// 선언 및 초기화
	// 요소의타입 변수명[길이] = {값1, 값2,...};
	// 선언과 동시에 초기화를 하는 경우에는
	// 초기화하는 값이 있기 때문에 길이를 정하지 않아도
	// 자동으로 요소의 개수만큼으로 길이가 정해진다.
	// 요소 개수 이상으로 길이 공간을 확보하고 싶다면
	// 초기화를 하면서도 길이를 정해서 넣을 수 있다.
	int arrInt2[10] = {1, 2, 3, 4};

	// 요소로의 접근
	// 요소에 접근할 때에는 배열의 변수명 뒤에 대괄호[]를 적고
	// 대괄호 안에 순서값(인덱스)을 전달하여 해당 인덱스에 해당하는
	// 요소에 접근할 수 있다.
	printf("arrInt2[2] = %d\n", arrInt2[2]);
	printf("arrInt2[4] = %d\n", arrInt2[4]);

	// 배열을 생성할 때, 그 값을 초기화하지 않으면
	// 요소의 자료형에 따라 기본값으로 초기화 된다.
	// 정수 0, 실수 0.0, char \0, 포인터 NULL
	arrInt2[4] = 44;
	printf("arrInt2[4] = %d\n", arrInt2[4]); // 44

	// 배열은 여러 값이 들어있기 때문에 
	// 반복문 for문의 i값을 활용해 각 요소에 순차적으로,
	// 반복적으로 접근할 수 있다.
	// 반복문으로 배열을 다룰 때에는 배열의 길이가 필요하다
	
	// 배열의 길이를 구하는 방법
	// sizeof()
	// 해당 자료형의 길이(byte)를 정수로 반환하는 연산자
	//printf("short: %u\n", sizeof(short)); // 2
	//printf("int: %u\n", sizeof(int)); // 4
	//printf("long: %u\n", sizeof(long)); // 4
	//printf("long long: %u\n", sizeof(long long)); // 8

	// 배열의 길이는 각 요소의 길이에 개수를 곱한 값이다.
	// 역산해서, 배열의 길이에서 각 요소의 길이를 나누면
	// 요소의 개수가 도출될 것이다.

	// sizeof()를 이용한 배열 길이 계산
	int length = sizeof(arrInt2) / sizeof(arrInt2[0]);
	printf("배열의 길이: %d\n", length);

	// 배열을 만들 때, 그 길이를 변수로 해서 만들면
	// 굳이 길이를 계산할 필요가 없지 않을까?
	const int testLength = 11;
	// const로 상수를 선언하여 그 값을 전달해도
	// 배열의 길이로 설정할 수 없다.
	//int arrIntTest[testLength];// 오류!

	for (int i = 0; i < length; i++) {
		printf("%d: %d\n", i, arrInt2[i]);
	}

	// 배열의 인덱스는 왜 0부터 시작하는가?
	// 메모리 상의 배열의 주소와 0번째 요소의 주소가 같기 때문이다.
	// [0]이라는 접근 방법의 의미는,
	// 배열의 주소를 기준으로 0칸 이동한 주소에 접근하겠다
	// 라는 의미로 해석한다.

	// 문자열
	// char 타입의 값이 배열로 만들어진 것을 의미한다.
	// 하지만 C언어에서는 이걸 조금 다르게 해석하여
	// 하나의 자료형으로 취급한다. -> C++에서는 string타입
	// 이러한 char배열의 마지막 요소로 \0(널 문자)를 넣어서
	// 문자열의 끝임을 나타내야 한다.

	// 문자열의 선언과 초기화
	// 문자열은 큰 따옴표로 감싼 값이다.
	char str1[] = "Hello World."; // 자동 길이 계산
	char str2[10] = {'H', 'i', '\0'}; // 수동 초기화
	char str3[20] = "Programming"; // 크기 지정 초기화
	
	// str1의 요소 개수는 13일 것이다.
	length = sizeof(str1) / sizeof(str1[0]);
	printf("str1 length: %d\n", length);

	// 개수를 이용해서 반복문으로 문자열의 문자에 접근
	for (int i = 0; i < length; i++) {
		printf("str[%d]: %c\n", i, str1[i]);
	}

	// 추가
	// 한글 문자열을 다루는 방법
	wchar_t str4[] = L"한글";
	int lengthHan = wcslen(str4);
	printf("%d\n", lengthHan);

	// 문자열을 다루는 함수
	// strlen()
	// 널문자를 제외한 문자열의 길이 반환
	printf("%d\n", strlen("Hello")); // 5

	// strcpy()
	// 문자열의 값을 안전하게 다른 변수로 저장
	char strSource[] = "Hello";
	char strDest[10];

	// strcpy(복사받을변수, 복사할변수)
	// 복사받을 변수로 복사할 변수의 문자열 값을
	// 안전하게 복사한다.
	strcpy(strDest, strSource);
	printf("%s\n", strDest);

	// strcat()
	// concatenate
	// 두 문자열을 하나로 연결하여 새로운 문자열을
	// 첫번째 문자열로 저장
	char strH[] = "Hello";
	char strW[] = "World";
	
	printf("strH length: %d\n", strlen(strH));
	// strH로 두 문자열이 병합된 값이 저장된다.
	strcat(strH, strW);
	
	// 병합이 완료된 경우, strH의 길이가 병합된 길이로 변화한다.
	// 이를 통해 문자열을 안전하게 변환 및 저장할 수 있다.
	printf("strH length: %d\n", strlen(strH));
	printf("strH: %s\n", strH);
	

	// strcmp()
	// compare
	// 두 문자열을 비교하여 사전상에서 두 문자열이
	// 얼마나 떨어져 있는지를 정수로 반환하는 함수
	char apple[] = "apple";
	char banana[] = "banana";
	int distance = strcmp(apple, banana);

	// 사전상 먼저 나오는 단어는 그 숫자가 작다.
	// 나중에 나오는 단어는 그 숫자가 크다.
	// 첫번째 문자열의 숫자에서 두번째 문자열의 숫자를 뺀 값이
	// 도출된다.
	printf("distance: %d\n", distance);
	if (distance < 0) {
		printf("%s가 %s보다 사전상 먼저 나온다.\n", apple, banana);
	}
	else if (distance == 0) {
		printf("%s가 %s와 단어가 같다.\n", apple, banana);
	}
	else if (distance > 0) {
		printf("%s가 %s보다 사전상 나중에 나온다.\n", apple, banana);
	}


	return 0;
}