/*
	별 찍기 - 7

	별 찍기에서 이중 포문은 기본
*/

#include <iostream>

int main() {
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) { // i의 초기값을 0으로 잡는게 좋음
		for (j = 1; j < n - i; j++) printf(" ");
		for (j = 0; j < i; j++) printf("*");
		printf("*");
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	for (i = n-2; i >= 0; i--) {
		for (j = 1; j < n - i; j++) printf(" ");
		for (j = 0; j < i; j++) printf("*");
		printf("*");
		for (j = 0; j < i; j++) printf("*");
		printf("\n");
	}
}