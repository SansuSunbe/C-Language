#include<stdio.h>

void main() {
	int i = 10;
	long l = 10L;
	float f = 3.1F;
	double d = 3.1;
	char c = 'a';
	char* str = "ABC";

	// ctrl + k �����ٰ� �� �� c : ���� �ּ�
	// ctrl + k �����ٰ� �� �� u : �ּ� ��ü
	// sizeof(�ڷ���) : �Ұ�ȣ �ȿ� �ۼ��� ���� 
	//                  �Ǵ� �ڷ����� ũ�⸦ �˷��ִ� �Լ�
	printf("byteũ�� : %d\n", sizeof(int));
	printf("byteũ�� : %d\n", sizeof(long));
	printf("byteũ�� : %d\n", sizeof(float));
	printf("byteũ�� : %d\n", sizeof(double));
	printf("byteũ�� : %d\n", sizeof(char));
	printf("byteũ�� : %d\n", sizeof(str));
	
}