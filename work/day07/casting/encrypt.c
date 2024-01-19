#include <stdio.h>

void main() {
	// 단방향 암호화 : 원본을 볼 수 없으며, 암호화 된 것끼리 비교
	// 양방향 암호화 : 원본을 볼 수 있으며, 복호화 한 후 비교

	char pw[7] = "a1b2c3";
	char en_pw[7] = "";
	char de_pw[7] = "";
	const int key = 3; // 상수 : 자료형 앞에 const를 작성

	// 문자와 정수의 연산의 결과는 정수
	for (int i = 0; i < sizeof(pw); i++) {
		en_pw[i] = (pw[i] + key);
	}

	for (int i = 0; i < sizeof(en_pw); i++) {
		de_pw[i] = (char)(en_pw[i] - key);
	}

	printf("기본 : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}

	printf("\n암호화 : ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}

	printf("\n복호화 : ");
	for (int i = 0; i < sizeof(de_pw); i++) {
		printf("%c", de_pw[i]);
	}
}
