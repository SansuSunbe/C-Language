#include <stdio.h>

void main() {
	// �ܹ��� ��ȣȭ : ������ �� �� ������, ��ȣȭ �� �ͳ��� ��
	// ����� ��ȣȭ : ������ �� �� ������, ��ȣȭ �� �� ��

	char pw[7] = "a1b2c3";
	char en_pw[7] = "";
	char de_pw[7] = "";
	const int key = 3; // ��� : �ڷ��� �տ� const�� �ۼ�

	// ���ڿ� ������ ������ ����� ����
	for (int i = 0; i < sizeof(pw); i++) {
		en_pw[i] = (pw[i] + key);
	}

	for (int i = 0; i < sizeof(en_pw); i++) {
		de_pw[i] = (char)(en_pw[i] - key);
	}

	printf("�⺻ : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(de_pw); i++) {
		printf("%c", de_pw[i]);
	}
}