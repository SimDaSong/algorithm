/*
	https://www.acmicpc.net/problem/11721
	열 개씩 끊어 출력하기
	출력
*/

#include <iostream>

int main() {
	char ch[101]; // 문자열

	// 문자열 입력 받기
	scanf("%s", ch);

	for (int i = 0, count = 0; ch[i]; i++, count++) {
		if (count == 10) { count = 0; printf("\n"); }
		printf("%c", ch[i]); // 문자 출력할 때는 %d 아님
	}
}