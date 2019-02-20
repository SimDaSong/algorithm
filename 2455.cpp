/*
	지능형 기차
*/

#include <iostream>

int main() {
	int take, get_off, now = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &get_off, &take);
		now = now + take - get_off;
		if (now > max) max = now;
	}
	printf("%d", max);
}