#include <stdio.h>

void main() {
	int age = 10;
	float height = 125.3F;
	double weight = 35.954;
	char grade = 'A';
	char* name = "테스터";

	printf("나이 : %d살", age);
	printf("키 : %.1fcm", height); // 소수점을 자를 때 6부터 반올림된다.
	printf("몸무게 : %.2lf", weight);
	printf("수행평가 : %c", grade);
	printf("이름 : %s", name);
}