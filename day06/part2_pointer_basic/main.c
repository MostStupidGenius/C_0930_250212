#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 포인터란
	// 변수가 값을 가리키고 있다면
	// 포인터는 변수의 주소값을 가리키고 있다.
	// 포인터 변수는 주소값을 저장하는 저장공간이다.
	// 이러한 주소값은 변수의 값이 아니라
	// 그 값이 저장된 공간의 위치를 알 수 있게 해주는 값이다.

	// 주소값 추출 연산자 -> 주소 연산자 &
	// 변수 앞에 주소 연산자&를 붙이면
	// 해당 변수가 저장된 위치 주소값에 접근할 수 있다.
	// 이 값을 포인터 변수에 저장하여
	// 해당 변수의 값에도 접근할 수 있게 된다.
	// ※ 주소값을 알고 있다는 것은, 그 값에 접근하여
	// 값을 변경하거나(변수) 사용할 수 있다는 것을 의미한다.
	// -> 권한 부여

	// 포인터 변수 선언 방법
	// 값이 저장된 변수의 타입을 먼저 적고
	// 그 뒤에 *를 붙여서 포인터 변수임을 나타낸다.
	int num = 3;

	// 포인터는 NULL 값으로 초기화할 수 있다.
	// NULL은 가리키고 있는 주소가 없음을 명시적으로
	// 표현하는 값이다.
	int* ptrNum = NULL;

	// num변수의 메모리 주소를 추출해보자.
	ptrNum = &num;

	// 포인터 변수를 이용하여 그 값에 접근하려면
	// 간접 참조 연산자*를 사용해야 한다.
	printf("%d\n", *ptrNum);

	// 원본 변수인 num의 값을 바꿔보자.
	num = 31;
	// 변수의 값이 바뀌더라도 포인터 변수는
	// 그 위치를 저장하는 것이기 때문에
	// 포인터 변수는 바뀐 그 값에 접근할 수 있다.
	printf("%d\n", *ptrNum); // 31

	// 포인터 변수에 간접 참조 연산자*를 붙여
	// 그 값에 접근하여 저장된 값을 변경해보자.
	*ptrNum = 123;

	printf("num: %d\n", num); // 123

	// 포인터의 주소값을 출력할 때에는
	// %p 서식문자를 사용하여 출력할 수 있다.
	printf("ptrNum: %p\n", ptrNum);

	return 0;
}