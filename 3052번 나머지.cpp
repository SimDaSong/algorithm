/*
	서로 다른 나머지의 개수를 더 쉽게 구하는 알고리즘은 없을까 
	=> 나머지를 배열로!
*/

#include <iostream>

int main() {
	int num[10], count = 0;
	int remainder[42] = { 0 }; // 0~41

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]); 
		remainder[num[i]%42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (remainder[i]) count++;
	}

	printf("%d", count);
}