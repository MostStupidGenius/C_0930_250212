#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체(struct)
// 구조체란, 사용자가 정의하는 여러 데이터타입을 변수처럼
// 구조체라는 값들의 묶음을 정의하는 데이터 보따리를 지칭한다.
// 이 구조체에 포함된 변수들은 값을 초기화하지 않고 선언만 한다.

// 이런 구조체라는 타입을 공유하는 구조체변수들은 같은 속성명(내부변수)을
// 공유한다.
// 즉, 서로 같은 구조체를 기반으로 만들어진 변수라면 
// 같은 이름의 변수를 공유하게 된다. 그 값은 공유하지 않지만, 
// 변수 이름은 같기 때문에 일관성과 통일성을 갖추게 된다.
// -> 배열에 구조체를 담아서 일괄처리가 가능하다.

// 구조체 정의
struct Person {
	char name[50];
	int age;
	//float height, weight;
};

// 구조체 생성함수
// 구조체는 마치 값이나 변수처럼 매개변수에 담기거나
// 반환값으로 전달될 수 있다.
struct Person createPerson(char name[], int age) {
	struct Person dummy;
	printf("size: %d\n", sizeof(dummy));
	printf("name size: %d\n", sizeof(dummy.name));

	strcpy(dummy.name, name);
	dummy.age = age;
	return dummy;
}



int main() {
	// 구조체 호출 및 사용
	struct Person hong;
	// 구조체를 기반으로 한 데이터 덩어리를 부를 이름(변수명) 정의

	// 해당 구조체 hong의 요소, 속성, 정보(멤버변수)에 접근하고자 할 때에는
	// 하위접근연산자.를 이용하여 멤버변수에 접근할 수 있다.
	strcpy(hong.name, "홍길동");
	hong.age = 30;

	// 구조체 포인터
	struct Person* hongPtr = &hong;

	// 구조체 포인터를 통한 멤버변수 접근
	// ->
	hongPtr->age = 25;

	printf("name: %s\n", hongPtr->name);
	printf("age: %d\n", hong.age);

	// 구조체 배열
	struct Person people[] = {
		createPerson("홍길동", 30),
		createPerson("고길동", 40),
		createPerson("둘리", 10),
		createPerson("또치", 15)
	};

	for (int i = 0; i < 4; i++) {
		//struct Person *p = &people[i];
		//printf("name: %s\n", p->name);
		//printf("age: %d\n", p->age);
		struct Person p = people[i];
		// 해당 구조체에 접근하여 그 값을 사용하는 것은
		// 일반 변수에 담아서 사용해도 되지만,
		// 그 주소값에 접근하여 값을 변경하고자 한다면
		// 반드시 구조체 포인터에 주소를 담아서
		// -> 연산자로 값을 변경해야 한다.

		printf("name: %s\n", p.name);
		printf("age: %d\n", p.age);
	}
	return 0;
}