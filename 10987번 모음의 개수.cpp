#include <iostream>

int main() {
	char word[101];
	int count = 0;
	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		switch (word[i]) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			count++;
		}
	}

	printf("%d", count);
}