/*
	상수
*/

#include <iostream>

int main() {
	char a[4], b[4]; // 두 수

	// 수 입력 받기
	scanf("%s %s", a, b);

	// 수 비교 후 출력
	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			printf("%c%c%c", a[2], a[1], a[0]);
			break;
		}
		else if (a[i] < b[i]) {
			printf("%c%c%c", b[2], b[1], b[0]);
			break;
		}
	}
}