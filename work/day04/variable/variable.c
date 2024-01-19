#include<stdio.h>

void main() {
	int i = 10;
	long l = 10L;
	float f = 3.1F;
	double d = 3.1;
	char c = 'a';
	char* str = "ABC";

	// ctrl + k 눌렀다가 땐 후 c : 한줄 주석
	// ctrl + k 눌렀다가 땐 후 u : 주석 해체
	// sizeof(자료형) : 소괄호 안에 작성한 변수 
	//                  또는 자료형의 크기를 알려주는 함수
	printf("byte크기 : %d\n", sizeof(int));
	printf("byte크기 : %d\n", sizeof(long));
	printf("byte크기 : %d\n", sizeof(float));
	printf("byte크기 : %d\n", sizeof(double));
	printf("byte크기 : %d\n", sizeof(char));
	printf("byte크기 : %d\n", sizeof(str));
	
}