/*
	https://www.acmicpc.net/problem/2839
	설탕 배달
*/
/*
	처음에 생각했던 것 보다는 간단하지 않은 문제

	봉지로 정확하기 나눠지는 경우에 집중
	11 = 5 + 3 + 3 or 5 + 5 + 1
	8 = 5 + 3
*/

#include <iostream>

int main() {
	int n; // 상근이가 배달해야 할 사탕 봉지의 키로 수	
	int count = 0; // 봉지 수

	scanf("%d", &n);

	while (n > 0) {
		if (!(n % 5)) { count++; n -= 5; }
		else if (!(n % 3)) { count++; n -= 3; }
		else if (n / 5) { count++; n -= 5; }
		else if (n / 3) { count++; n -= 3; }
		else { printf("-1"); return 0; }
	}

	printf("%d", count);

	return 0;
}