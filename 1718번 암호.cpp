#include <iostream>

int main() {
	char normal[30001], key[30001];
	char result;

	scanf("%[^\n]s", normal);
	scanf("%s", key);

	for (int i = 0, j = 0; normal[i]; i++, j++) {
		if (!key[j]) j = 0;
		if ('a' <= normal[i] && normal[i] <= 'z') {
			result = normal[i] - (key[j] - 'a' + 1);
			if (result < 'a') printf("%c", result + 26);
			else printf("%c", result);
		}
		else printf("%c", normal[i]);
	}
}