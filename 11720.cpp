/*
	https://www.acmicpc.net/problem/11720
	숫자의 합

	동적 할당 안 받아도 될 듯
*/

#include <iostream>

int main() {
	int num; // 숫자의 개수
	int n[100]; // 숫자
	int sum = 0; // 숫자들의 합

	// 숫자 개수 입력 받기
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%1d", &n[i]); // 정수 한 자리씩 입력 받기!!!!!
		sum += n[i];
	}

	printf("%d", sum);

	return 0;
}