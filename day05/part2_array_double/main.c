#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���� �迭
	// �迭�� ��ҷ� �Ǵٸ� �迭�� ������ �ڷᱸ����
	// ������ �޸𸮿� ����� ������ ���ӵ� ������ ����ȴ�.
	int arrInts[][4] = {
		{1, 2, 3, 4},
		{4, 5, 6},
		{7, 8, 9}
	};

	printf("%d\n", arrInts[1][3]);
	//printf("%d\n", arrInts);// �迭�� ����ϴ� ������δ�
	// �� ����� ���� Ȯ���� �� ����.

	for (int i = 0; i < 3; i++) {
		printf("{");
		for (int j = 0; j < 4; j++) {
			printf("%d, ", arrInts[i][j]);
		}
		printf("}\n");
	}

	printf("\n");
	// �޸� �󿡼� ��� ���ӵ� ������ �����ϱ� ������
	// ��� ���� ���̸� ��Ȯ�ϰ� ���س���
	// ���� �� �ٷ� ǥ���ص�
	// �����Ϸ��� �˾Ƽ� �� ���� ��ġ�Ѵ�.
	int arrInts2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	for (int i = 0; i < 3; i++) {
		printf("{");
		for (int j = 0; j < 4; j++) {
			printf("%d, ", arrInts2[i][j]);
		}
		printf("}\n");
	}


	return 0;
}