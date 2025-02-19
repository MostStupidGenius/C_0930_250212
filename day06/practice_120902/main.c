#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string) {
    int answer = 0;
	// 함수 안에서 처리하기 위해 만든 임시 문자배열 변수
	char text[100] = "";
	// 임시 변수에 문자열 값을 복사
	strcpy(text, my_string);
	// 임시 변수 문자열의 길이를 추출
	int length = strlen(text);

	// 피연산할 숫자들을 담을 문자배열 변수
	char before[5] = "", after[5]="";
	// 피연산할 숫자를 담을 변수
	int beforeNum = 0, afterNum = 0;
	int flag = 0; // 연산자를 만났는지 여부를 확인

	for (int i = 0; i < length; i++){
		char c = text[i];
		switch (c) {
		case '+':

			flag = 1;
			break;
		case '-':
			flag = -1;
			break;
		case ' ':
			if (flag == 0) {
				before[strlen(before)] = '\0';
				beforeNum = (int)before;
			}
			else {
				after[strlen(after)] = '\0';
				afterNum = (int)after;
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
	
	printf("%d\n", length);
	printf("result: %d\n", beforeNum + (flag * afterNum));

    return answer;
}

int main() {
	int result = solution("3 + 7");
	printf("%d\n", result);
}