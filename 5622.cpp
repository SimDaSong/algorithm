/*
	다이얼

	문제를 잘 읽자 PQRS!
*/

#include <iostream>

int main() {
	char word[16]; // 단어
	int time = 0;

	// 단어 입력 받기
	scanf("%s", word);

	// 총 걸리는 시간 구하기
	for (int i = 0; word[i]; i++) {
		if (word[i] <= 'O') 
			time += (word[i] - 'A') / 3 + 3;
		else if (word[i] <= 'S') time += 8;
		else if (word[i] <= 'V') time += 9;
		else time += 10;
	}

	printf("%d", time);
}