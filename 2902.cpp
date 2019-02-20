/*
	KMP는 왜 KMP일까?
*/

#include <iostream>

int main() {
	char str[101];

	scanf("%s", str);

	printf("%c", str[0]);
	for (int i = 0; str[i]; i++) {
		if (str[i] == '-') {
			printf("%c", str[i + 1]);
			i++;
		}
	}
}