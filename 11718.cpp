/*
	https://www.acmicpc.net/problem/11718
	그대로 출력하기

	=> 다시 보기!!!!!!1	
*/

/*
	scanf 사용시, %[]에서 [] 내에 있는 문자들만 입력 받고 나머지 입력 받으면 종료
*/

/*
	while(ch!=EOF) {
		ch = getchar();
		putchar(ch);
	}

	로 코드를 짜는 경우, EOF까지 출력하기 때문에 틀림
*/

#include <iostream>

int main() {
	char ch = 0;

	while (true) {
		ch = getchar();
		if (ch == EOF) return 0;
		putchar(ch);
	}

	return 0;
}