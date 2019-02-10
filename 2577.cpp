/*
	https://www.acmicpc.net/problem/2577
	숫자의 개수
*/

#include <iostream>

int main() {
	int a, b, c;
	unsigned long mult;
	int count[10] = { 0 }; // 각 숫자가 몇 번 쓰였는가

	scanf("%d %d %d", &a, &b, &c);
	mult = a * b * c;

	count[mult % 10 - 1]++; // 일의 자리
	for (int i = 10;; i *= 10) {
		count[mult / i - 1]++;
		mult
	}
}