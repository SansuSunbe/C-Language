#include <stdio.h>

void main() {
	char data = 65; 

	// �ڵ� ����ȯ
	printf("%d\n", 11 / 9);
	printf("%.2lf\n", 11.0 / 9);
	printf("%c\n", data); // �ƽ�Ű�ڵ�� ����ȯ
	printf("%d\n", data);

	// ���� ����ȯ
	printf("%.2lf\n", 11 / (double)9);
}