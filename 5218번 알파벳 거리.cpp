#include <iostream>

int main() {
	int c, sub;
	char word_a[21], word_b[21];

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%s %s", word_a, word_b);
		
		printf("Distances: ");

		for (int j = 0; word_a[j]; j++) {
			sub = word_b[j] - word_a[j];
			if (sub < 0) sub += 26;
			printf("%d ", sub);
		}
		printf("\n");
	}
}