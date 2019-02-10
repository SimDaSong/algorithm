/*
	A+B - 5
*/

#include <iostream>

int main() {
	int a, b;

	while (true) {
		scanf("%d %d", &a, &b);

		if (!a && !b) return 0;
		
		printf("%d\n", a + b);
	}
}