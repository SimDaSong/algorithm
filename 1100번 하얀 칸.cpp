/*
	하얀 칸

	하얀 칸이 있는 곳
	0행 0,2,4,..열 => i,j 짝수일 때
	1행 1,3,5,..열 => i,j 홀수일 때
	...

	0행 : if (i%2==0) && (j%2==0) 
	1행 : if (i%2==1) && (j%2==1)
	...

	나머지가 1이냐 0이냐는 행이 바뀔 때마다 바뀜

	=> // for j=i%2; j<8; j+=2 로 하면 i만 신경쓰면 됨
*/

#include <iostream>

int main() {
	int count = 0;
	char chess[8][8]; // int가 아니라!!
	bool even = true;

	// 체스 칸 입력 받기
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%1c", &chess[i][j]);
		}
		std::cin.ignore(); // char 입력 받ㅇ르 땐 비워 줘야 함
	}

	// 수 세기
	for (int i = 0; i < 8; i++) { 
		for (int j = i % 2; j < 8; j += 2) {
			if (chess[i][j] == 'F') count++;
		}
	}

	// count 출력
	printf("%d", count);
}