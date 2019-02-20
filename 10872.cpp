/*
	팩토리얼
*/

#include <iostream>

int main() {
	int n;
	unsigned long fact = 1; // unsigned int는 안되는지

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	printf("%d", fact);
}