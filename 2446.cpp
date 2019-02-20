/*
	별 찍기 - 9

	다시 보자
*/

#include <iostream>

int main() {
	int n;

	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) printf(" ");
		for (j = 1; j < n - i; j++) printf("*");
		printf("*");
		for (j = 1; j < n - i; j++) printf("*");
		printf("\n");
	}
	for (i = n-2; i >= 0; i--) {
		for (j = 0; j < i; j++) printf(" ");
		for (j = 1; j < n - i; j++) printf("*");
		printf("*");
		for (j = 1; j < n - i; j++) printf("*");
		printf("\n");
	}
}