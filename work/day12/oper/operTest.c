#include <stdio.h>

void main() {
	
	// 두 정수를 입력하고 대소 비교하기
	int num1 = 0, num2 = 0, result = 0;
	char* n1Msg = "첫 번째 정수 : ";
	char* n2Msg = "두 번째 정수 : ";

	int n1 = 0, n2 = 0;
	char* format = "";

	printf("%s", n1Msg);
	scanf_s("%d", &num1);

	printf("%s", n2Msg);
	scanf_s("%d", &num2);

	n1 = num1 > num2;
	n2 = num1 == num2;

	format = n2 ? "%s" : "더 큰 값 : %d";

	printf(format, n1 ? num1 :
		n2 ? "두 수가 같다." : num2);

	// num1 > num2 ? printf("더 큰 값 : %d", num1) :
		// num1 == num2 ? printf("두 수가 같다.") : printf("더 큰 값 : %d", num2);

	// printf("%d %d\n", num1, num2);

	// result = num1 > num2 ? num1 : num2;
	// printf("더 큰 값 : %d\n", result);
	
}