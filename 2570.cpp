/*
	https://www.acmicpc.net/problem/2750
	수 정렬하기

	삽입 정렬 이용
*/

#include <iostream>

int main() {
	int n; // 수의 개수
	int *arr;
	
	// 수의 개수 입력 받기
	scanf("%d", &n);
	// 수의 개수만큼 동적배열할당 받고 값 입력 받기
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	// 출력
	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

	delete[]arr;
}