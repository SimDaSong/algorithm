#include <iostream>

int main() {
	char word[10001];
	int ioi = 0, joi = 0;
	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		if (word[i + 1] == 'O' && word[i + 2] == 'I') {
			if (word[i] == 'I') ioi++;
			else if (word[i] == 'J') joi++;
			else i++;
		}
	}

	printf("%d\n%d", joi, ioi);
}