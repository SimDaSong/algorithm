#include <iostream>
#include <stdlib.h> // atoi 함수 사용 위해
int main() {
	char a[8], b[8], max_a[8], max_b[8], min_a[8], min_b[8];

	scanf("%s %s", a, b);

	for (int i = 0; a[i]; i++) {
		max_a[i] = min_a[i] = a[i];
		if (a[i] == '5') max_a[i] = '6';
		else if (a[i] == '6') min_a[i] = '5';
	}

	for (int i = 0; b[i]; i++) {
		max_b[i] = min_b[i] = b[i];
		if (b[i] == '5') max_b[i] = '6';
		else if (b[i] == '6') min_b[i] = '5';
	}

	printf("%d %d", atoi(min_a) + atoi(min_b), atoi(max_a) + atoi(max_b));
}