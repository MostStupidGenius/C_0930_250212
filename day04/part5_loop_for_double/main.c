#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���� �ݺ���
	// �ݺ��� �ȿ� �Ǵٸ� �ݺ����� ����ִ�(nested)
	// ���¸� ����Ű�� ����, �ǹ������� �ִ� 3�� �ݺ�������
	// ���� �� �ִ�.(4�� -> ��ȿ����)

	// �ð��� ��(hour)�� 0���� 11���� �ݺ��ȴ�.
	for (int hour = 0; hour < 12; hour++) {
		printf("===%02d��===\n", hour);

		// �ð��� ���� 0���� 59�б��� �����Ѵ�.
		for (int min = 0; min < 60; min++) {
			printf("%02d�� %2d��\n", hour, min);
		}
	}







	return 0;
}