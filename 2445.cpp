/*
	별 찍기 - 8

	더 쉽게 풀 수 있는 방법은 없는지 찾아보기
*/

#include <iostream>

int main() {
	int n;

	scanf("%d", &n);

	// n개의 줄
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) printf("*");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 1; j <= i; j++) printf("*");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
}