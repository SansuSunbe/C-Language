#include <stdio.h>

void main() {
	int age = 10;
	float height = 125.3F;
	double weight = 35.954;
	char grade = 'A';
	char* name = "�׽���";

	printf("���� : %d��", age);
	printf("Ű : %.1fcm", height); // �Ҽ����� �ڸ� �� 6���� �ݿø��ȴ�.
	printf("������ : %.2lf", weight);
	printf("������ : %c", grade);
	printf("�̸� : %s", name);
}