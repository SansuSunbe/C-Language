#include <stdio.h>

void main() {
	
	// �� ������ �Է��ϰ� ��� ���ϱ�
	int num1 = 0, num2 = 0, result = 0;
	char* n1Msg = "ù ��° ���� : ";
	char* n2Msg = "�� ��° ���� : ";

	int n1 = 0, n2 = 0;
	char* format = "";

	printf("%s", n1Msg);
	scanf_s("%d", &num1);

	printf("%s", n2Msg);
	scanf_s("%d", &num2);

	n1 = num1 > num2;
	n2 = num1 == num2;

	format = n2 ? "%s" : "�� ū �� : %d";

	printf(format, n1 ? num1 :
		n2 ? "�� ���� ����." : num2);

	// num1 > num2 ? printf("�� ū �� : %d", num1) :
		// num1 == num2 ? printf("�� ���� ����.") : printf("�� ū �� : %d", num2);

	// printf("%d %d\n", num1, num2);

	// result = num1 > num2 ? num1 : num2;
	// printf("�� ū �� : %d\n", result);
	
}