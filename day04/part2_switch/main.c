#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// switch��
	// ���ǹ� �� �ϳ���, � ������ ���� "��Ȯ��"
	// � ���� ��ġ�� ��, �� �ڵ�� �귯����
	// ������ switch���̶� �Ѵ�.
	// �̶� � ���� �տ��� case�� �ٿ��� 
	// ���� ��츦 ǥ���� �� �ִ�.
	printf("���� �Է�(1~4): ");
	int num = 0;
	scanf("%d", &num);

	//switch (�˻��� ����) {case ���1: �ڵ�}
	switch (num) {
		// num�� ���� ���� 1�̶��
	case 1: case 5: // case�� ���� �� �����Ͽ�
		// ORó�� ���۽�ų �� �ִ�.(�Ǵ�)
		printf("���� ���� ��\n");
	case 2: case 6:
		printf("�ι�° ��\n");
	case 3:
		printf("����°\n");
		break; // �Ʒ��� ���� ���� ����
		// switch�� Ż��
	case 4:
		printf("������\n");
		break;
	default:
		// else��ó��, ���� ��� ��찡 �ƴ� ���
		// �� �ڵ尡 ����ȴ�.
		printf("�߸��� �� �Է�\n");
	}

	return 0;
}