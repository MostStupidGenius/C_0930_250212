#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
	int answer = 0;
	// 함수 안에서 처리하기 위해 만든 임시 문자배열 변수
	char text[100] = "";
	// 임시 변수에 문자열 값을 복사
	strcpy(text, my_string);
	// 임시 변수 문자열의 길이를 추출
	int length = strlen(text);

	// 피연산할 숫자들을 담을 문자배열 변수
	char before[100] = "", after[100] = "";
	// 피연산할 숫자를 담을 변수
	int beforeNum = 0, afterNum = 0;
	int flag = 0; // 연산자를 만났는지 여부를 확인

	for (int i = 0; i < length; i++) {
		char c = text[i];
		printf("%d c: %c\n", i, c);
		switch (c) {
		case '+':
			flag = 1;
			break;
		case '-':
			flag = -1;
			break;
		case ' ':
			// flag의 값이 변경된 적이 없다면
			// 첫번째 피연산자로 간주
			if (flag == 0) {
				before[strlen(before)] = '\0';
				// 앞의 문자열을 숫자로 변경
				beforeNum = atoi(before);
			}
			break;
		default: // 연산자가 아닌 경우
			if (flag == 0) { // 연산자 전의 피연산자
				// 이미 담긴 문자의 개수번째 인덱스에 
				// 새로운 문자 삽입
				before[strlen(before)] = c;
			}
			else {
				after[strlen(after)] = c;
			}
		}
	}
	// 모든 문자열을 순회하고 나서
	// 두번째 피연산자의 값을 숫자형으로 변경
	after[strlen(after)] = '\0';
	afterNum = atoi(after);

	answer = beforeNum + (flag * afterNum);
	return answer;
}

int main() {
	int result = solution("3 + 7");
	printf("%d\n", result);
	result = solution("13 - 7");
	printf("%d\n", result);
	result = solution("31 - 52");
	printf("%d\n", result);

	result = solution("31123123 - 31000000");
	printf("%d\n", result);
}