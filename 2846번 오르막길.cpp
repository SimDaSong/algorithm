#include <iostream>

int main() {
	int *load; // 길의 높이를 값으로 가지는 배열
	int n; // 길의 수
	int increment = 0; // 오르막길 크기
	int max = 0; // 최대 오르막길 크기
	
	scanf("%d", &n);
	load = new int[n];

	scanf("%d", &load[0]); // for문을 1부터 시작할거면 0에 대한 입력을 받았어야
	for (int i = 1; i < n; i++) {
		scanf("%d", &load[i]);

		if (load[i - 1] < load[i]) {
			increment += load[i] - load[i - 1];
		}
		else {
			if (max < increment) max = increment;
			increment = 0;
		}
	}

	if (max < increment) max = increment;
	
	printf("%d", max);

	delete[]load;
}