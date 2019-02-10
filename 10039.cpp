/*
	https://www.acmicpc.net/problem/10039
	평균 점수
*/

#include <iostream>

int main() {
	int score[5]; // 학생들의 점수
	int sum = 0;

	// 학생들 점수 입력 받기
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 40) score[i] = 40;
		sum += score[i];
	}
	printf("%d", sum / 5);
}