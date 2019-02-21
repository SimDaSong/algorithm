/*
	방 번호 자리수는 정해지지 않음!!! 문제 잘 보자
*/

#include <iostream>

int main() {
	char room[8]; // 방 번호
	int num[10] = { 0 }; // 숫자
	int max; 

	scanf("%s", room);

	// ++
	for (int i = 0; room[i]; i++) {
		room[i] -= '0'; // char인데 int랑 비교하려고 하니까 이 줄 꼭 필요
		if (room[i] == 6 || room[i] == 9) {
			if (num[6] > num[9]) num[9]++;
			else num[6]++;
		}
		else {
			num[room[i]]++;
		}
	}

	// max 값 찾기
	max = num[0];
	for (int i = 1; i < 9; i++) { // num에 대해서 구하는 거니까 i<9
		if (max < num[i]) max = num[i];
	}

	printf("%d", max);
}