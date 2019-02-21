#include <iostream>

int main() {
	int cook[5][4], max, winner;
	int sum[5] = { 0 };

	max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%1d", &cook[i][j]);
			sum[i] += cook[i][j];
		}
		if (max < sum[i]) { //  부등호 실수하지 말자
			max = sum[i]; winner = i + 1;
		}
	}

	printf("%d %d", winner, max);
}