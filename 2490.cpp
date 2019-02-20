/*
	윷놀이
*/
/*
	배 : 0, 등 : 1
*/

#include <iostream>

int main() {
	int yut[4]; 
	int front; // 등 굳이 안 세도 됨

	// 윷짝들의 상태 3번 입력 받기
	for (int i = 0; i < 3; i++) {
		// 윷짝 입력 받고 등, 배 개수 세기
		front = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[i]);
			if (!yut[i]) front++;
		}
	
		// 도개걸윷모 판별
		if (!front) printf("E\n");
		else printf("%c\n", 'A' + (front - 1));
	}
}