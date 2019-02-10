/*
	https://www.acmicpc.net/problem/8958
	OX 퀴즈
*/

#include <iostream>

int main() {
	char ch[80]; // 결과
	int n; // 테스트 케이스의 수
	int score = 0;
	int count; // 연속해서 맞은 문제의 개수

	// 테스트 케이스 수 입력 받기
	scanf("%d", &n);

	// 테스트 케이스 수 만큼 결과 입력 받고 점수 출력
	for (int i = 0; i < n; i++) {
		// 결과 입력
		scanf("%s", ch);
		// 점수 구하기
		count = 1;
		score = 0;
		for (int j = 0; ch[j]; j++) {
			if (ch[j] == 'O') {
				score += count;
				count++;
			}
			else count = 1;
		}
		// 점수 출력
		printf("%d\n", score);
	}
}