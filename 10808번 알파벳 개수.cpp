#include <iostream>

int main() {
	char s[101];
	char alphabet[26] = {0};

	scanf("%s", s);

	for (int i = 0; s[i]; i++) {
		alphabet[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
}