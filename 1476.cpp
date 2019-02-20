/*
	날짜 계산

	규칙을 찾는 게 중요한듯
*/

#include <iostream>

int main() {
	int e, s, m;
	int test[3], year;

	// e,s,m 입력 받기
	scanf("%d %d %d", &e, &s, &m);

	test[0] = e; test[1] = s; test[2] = m;
	
	// e를 기준으로 연도 찾기
	year = e; test[1] = e; test[2] = e;

	while (true) {
		// 연도를 찾으면 연도 출력 후 종료
		if (test[1] == s && test[2] == m) {
			printf("%d", year);
			return 0;
		}
		
		if ((test[1] += 15) > 28) test[1] %= 28;
		if ((test[2] += 15) > 19) test[2] %= 19;
		year += 15;
	}
}