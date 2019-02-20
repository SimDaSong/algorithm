/*
	2차원 배열의 합
*/

#include <iostream>

int main() {
	int row, col; // 배열의 크기
	int **arr;
	int k, a, b, x, y; // 합을 구할 부분의 개수, 좌표들
	int sum; // 합

	// 배열의 크기 입력 받기
	scanf("%d %d", &row, &col);

	// 동적 할당 받기
	arr = new int*[row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	// 배열 값 입력 받기
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	// 합을 구할 부분의 개수 입력 받고 개수만큼 반복
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &a, &b, &x, &y);
		
		// 합 구하기
		sum = 0;
		for (int j = a - 1; j < x; j++) {
			for (int m = b - 1; m < y; m++) {
				sum += arr[j][m];
			}
		}

		printf("%d\n", sum);
	}

	for (int i = 0; i < row; i++) {
		delete[]arr[i];
	}
	delete[]arr; // 이 부분도 넣어줘야 함!
}