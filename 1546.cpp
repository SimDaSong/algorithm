/*
	https://www.acmicpc.net/problem/1546
	평균

	다시보기!
*/

#include <iostream>

int main() {
	int n; // 시험 본 과목의 개수
	int max = 0; // 최대 점수
	double sum = 0, avg; // 점수 합과 평균
	double *subject; // 과목

	// 과목 수 입력 받기
	scanf("%d", &n);
	
	// 과목 수만큼 과목 생성
	subject = new double[n];

	// 과목 점수 입력 받기
	for (int i = 0; i < n; i++) {
		scanf("%lf", &subject[i]);
		if (max < subject[i]) max = subject[i];
	}

	for (int i = 0; i < n; i++) {
		subject[i] = subject[i] / max * 100;
		sum += subject[i];
	}

	avg = sum / n;
	if (avg - (int)avg == 0) printf("%.2f", avg);
	else if (avg - (float)avg == 0) printf("%g", avg);
	else printf("%lf", avg);

	delete[]subject;
}