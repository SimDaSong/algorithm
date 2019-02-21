#include <iostream>

int main() {
	int digit, car[5], count = 0;

	scanf("%d", &digit);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (digit == car[i]) count++;
	}
	printf("%d", count++);
}