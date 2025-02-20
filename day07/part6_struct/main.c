#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü(struct)
// ����ü��, ����ڰ� �����ϴ� ���� ������Ÿ���� ����ó��
// ����ü��� ������ ������ �����ϴ� ������ �������� ��Ī�Ѵ�.
// �� ����ü�� ���Ե� �������� ���� �ʱ�ȭ���� �ʰ� ���� �Ѵ�.

// �̷� ����ü��� Ÿ���� �����ϴ� ����ü�������� ���� �Ӽ���(���κ���)��
// �����Ѵ�.
// ��, ���� ���� ����ü�� ������� ������� ������� 
// ���� �̸��� ������ �����ϰ� �ȴ�. �� ���� �������� ������, 
// ���� �̸��� ���� ������ �ϰ����� ���ϼ��� ���߰� �ȴ�.
// -> �迭�� ����ü�� ��Ƽ� �ϰ�ó���� �����ϴ�.

// ����ü ����
struct Person {
	char name[50];
	int age;
	//float height, weight;
};

// ����ü �����Լ�
// ����ü�� ��ġ ���̳� ����ó�� �Ű������� ���ų�
// ��ȯ������ ���޵� �� �ִ�.
struct Person createPerson(char name[], int age) {
	struct Person dummy;
	printf("size: %d\n", sizeof(dummy));
	printf("name size: %d\n", sizeof(dummy.name));

	strcpy(dummy.name, name);
	dummy.age = age;
	return dummy;
}



int main() {
	// ����ü ȣ�� �� ���
	struct Person hong;
	// ����ü�� ������� �� ������ ����� �θ� �̸�(������) ����

	// �ش� ����ü hong�� ���, �Ӽ�, ����(�������)�� �����ϰ��� �� ������
	// �������ٿ�����.�� �̿��Ͽ� ��������� ������ �� �ִ�.
	strcpy(hong.name, "ȫ�浿");
	hong.age = 30;

	// ����ü ������
	struct Person* hongPtr = &hong;

	// ����ü �����͸� ���� ������� ����
	// ->
	hongPtr->age = 25;

	printf("name: %s\n", hongPtr->name);
	printf("age: %d\n", hong.age);

	// ����ü �迭
	struct Person people[] = {
		createPerson("ȫ�浿", 30),
		createPerson("��浿", 40),
		createPerson("�Ѹ�", 10),
		createPerson("��ġ", 15)
	};

	for (int i = 0; i < 4; i++) {
		//struct Person *p = &people[i];
		//printf("name: %s\n", p->name);
		//printf("age: %d\n", p->age);
		struct Person p = people[i];
		// �ش� ����ü�� �����Ͽ� �� ���� ����ϴ� ����
		// �Ϲ� ������ ��Ƽ� ����ص� ������,
		// �� �ּҰ��� �����Ͽ� ���� �����ϰ��� �Ѵٸ�
		// �ݵ�� ����ü �����Ϳ� �ּҸ� ��Ƽ�
		// -> �����ڷ� ���� �����ؾ� �Ѵ�.

		printf("name: %s\n", p.name);
		printf("age: %d\n", p.age);
	}
	return 0;
}