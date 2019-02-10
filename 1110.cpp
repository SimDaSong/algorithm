/*
	https://www.acmicpc.net/problem/1110
	더하기 사이클

	배열로 하려고 했었는데 삽질이었다
*/

#include <iostream>

int main() {
	int n, new_n; // 입력 받을 정수와 새로운 수
	int cycle = 0; // 사이클의 길이
	
	// 정수 입력 받기
	scanf("%d", &n);

	// 새로운 수 만들기
	new_n = n;
	do {
		new_n = (new_n % 10) * 10 + (((new_n / 10) + (new_n % 10)) % 10); // (십의 자리 수)*10 + (일의 자리 수)
																		  // new_n 대신에 n을 넣으면 당연히 안되지!
		cycle++;
	} while (n != new_n);

	printf("%d", cycle);
}