#include <stdio.h>

void main() {

	char* qMsg = "�������� ���� �װ�";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
	char* aMsg = "�Ĳ��ϰ� �����Ѱ�?";
	char* bMsg = "�������� ������?";
	char* oMsg = "�米���� ������?";
	char* abMsg = "���Ѱ�?";
	char* errorMsg = "�ٽ� �õ��ض� �װ�";

	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

	int choice = 0;

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	c1 = choice == 1;
	c2 = choice == 2;
	c3 = choice == 3;
	c4 = choice == 4;

	printf("%s\n", c1 ? aMsg :
		c2 ? bMsg :
		c3 ? oMsg :
		c4 ? abMsg : errorMsg);
}