#include <iostream>

int main() {
	char ch = 0;
	int alphabet[26] = { 0 };
	int max;

	while (ch != EOF) {
		ch = getchar();
		if ('a' <= ch && ch <= 'z') alphabet[ch - 'a']++;
	}

	max = alphabet[0];
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) max = alphabet[i];
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphabet[i]) {
			printf("%c", i + 'a'); // alphabet[i]가 아니라 i
		}
	}
}