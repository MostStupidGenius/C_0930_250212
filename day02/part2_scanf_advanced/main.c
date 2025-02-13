#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 값 입력받기
	// 입력받을 값의 종류에 따라 변수를 선언해주어야 한다.
	int inputNum = 10;

	// 입력받은 값을 해당 변수의 저장공간에
	// 직접 저장하기 위해서는 엠퍼샌드&를 변수 앞에 붙여
	// 메모리 주소에 직접 접근할 수 있도록 해야 한다.
	printf("정수를 입력해주세요: ");
	//int result = scanf("%d", &inputNum);

	// scanf()의 결과로 나오는 값은 0 또는 1로,
	// 형식에 맞게 제대로 값을 전달받았으면
	// true에 해당하는 1을 반환하고
	// 잘못된 값이 들어온 경우, false인 1이 반환된다.
	//printf("result: %d\n", result);

	// 잘못된 값이 들어온 경우에는, 변수의 값이 변경되지 않는다.
	// 즉, 이전의 값을 유지한 상태가 된다.
	printf("inputNum: %d\n", inputNum);
	
	// 형식을 지정하여 값을 입력받기
	
	char id[30]="", domain[30]="";
	
	// 이메일 입력 안내 메시지 출력
	printf("예시: example @email .com\n이메일을 형식에 맞게 입력해주세요\n입력: ");
	
	// example @email .com
	//scanf("%s @%s .com", &id, &domain);

	printf("이메일id: %s\n", id);
	printf("이메일주소: %s\n", domain);

	printf("이메일id: %s\n이메일주소: %s\n", id, domain);

	// scanf()를 사용할 때, 서식문자열에서
	// 서식문자들 사이에 공백문자를 넣으면
	// 여러 값을 여러 변수에 나눠넣을 수 있다.
	// 공백문자가 없으면 하나의 값으로 인식하기 때문에
	// 값을 잘못 받을 수 있으니 주의해야 한다.
	int num1=0, num2=0, num3=0;
	printf("HP 010-0000-0000 입력:");
	scanf("%d-%d-%d", &num1, &num2, &num3);
	
	printf("/%03d/%04d/%04d/", num1, num2, num3);


	return 0;
}