/*
	https://www.acmicpc.net/problem/10950
	A+B - 3
*/

#include <iostream>

int main() {
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}