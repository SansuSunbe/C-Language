#include <stdio.h>

void main() {

	char* qMsg = "혈액형이 뭔가 닝겐";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
	char* aMsg = "꼼꼼하고 세심한가?";
	char* bMsg = "추진력이 좋은가?";
	char* oMsg = "사교성이 좋은가?";
	char* abMsg = "착한가?";
	char* errorMsg = "다시 시도해라 닝겐";

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