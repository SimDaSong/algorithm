/*
	https://www.acmicpc.net/problem/4344
	평균은 넘겠지
*/

#include <iostream>

int main() {
	int c; // 테스트 케이스의 개수
	int n; // 학생의 수
	int score[1000]; // 학생들의 점수
	int sum; double avg; // 점수의 합과 평균
	int count; // 평균 넘는 학생들의 수

	// 테스트의 개수
	scanf("%d", &c);
	
	// 테스트의 개수 만큼 학생의 수와 점수 입력 받기
	for (int i = 0; i < c; i++) {
		sum = 0; count = 0;
		
		scanf("%d", &n);

		for (int j = 0; j < n; j++) { // 점수 입력 받고 합 구하기
			scanf("%d", &score[j]); ///////// & !!!!!!!!!!!!!!!!
			sum += score[j];
		}

		// 평균 구하기
		avg = sum / (double)n;

		for (int j = 0; j < n; j++) { // 평균 넘는 학생들의 수 구하기
			if (avg < score[j]) count++;
		}

		// 비율 구해서 출력
		printf("%.3f%%\n", count / (double)n * 100); // % 출력하려면 %%
	}
}