#include <iostream>

int main() {
	char word[101];

	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		switch (word[i]) {
		case 'C':case 'A':case 'M':case 'B': case 'R': case 'I': case 'D': case 'G': case 'E':
			continue;
		}
		printf("%c", word[i]);
	}
}