#include <stdio.h>

void main() {
	char data = 65; 

	// 자동 형변환
	printf("%d\n", 11 / 9);
	printf("%.2lf\n", 11.0 / 9);
	printf("%c\n", data); // 아스키코드로 형변환
	printf("%d\n", data);

	// 강제 형변환
	printf("%.2lf\n", 11 / (double)9);
}