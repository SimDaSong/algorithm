/*
	https://www.acmicpc.net/problem/2920
	À½°è
*/

#include <iostream>

int main() {
	int scale[8];

	for (int i = 0; i < 8; i++) { scanf("%d", &scale[i]); }

	if (scale[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] != i + 1) {
				printf("mixed"); return 0;
			}
		}
		printf("ascending");
	}
	else if (scale[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] != 8-i) {
				printf("mixed"); return 0;
			}
		}
		printf("descending");
	}
	else
		printf("mixed");
}