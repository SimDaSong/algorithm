#include <iostream>

int main() {
	int n;
	char player[150][30];
	int alphabet[26] = {0};
	bool exist = false;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", player[i]);
		alphabet[player[i][0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			printf("%c", i + 'a'); exist = true; // alphabet[i]°¡ ¾Æ´Ñ i
		}
	}

	if (!exist) printf("PREDAJA");
}