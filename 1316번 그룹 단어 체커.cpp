#include <iostream>

int main() {
	int n, count = 0;
	char word[101], alphabet[100][26] = { 0 };
	char continuity;

	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		// 입력 받아 바로 검사
		scanf("%s", word);
		continuity = word[0];
		for (j = 0; word[j]; j++) { // j를 0부터 시작하지 않으면 aba 같은 경우에 검사 못함
			if (word[j] != continuity) {
				alphabet[i][continuity - 'a']++;
				if (alphabet[i][word[j] - 'a'] == 1) break; // 하나의 alphabet 배열을 다들 공유하면 문제 생김
				continuity = word[j];
			}
		}
		if (word[j] == NULL) count++;
		std::cin.ignore();
	}

	printf("%d", count);
}