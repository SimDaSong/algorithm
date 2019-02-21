/*
	더 최적화 할 순 없을까ㅠㅠ
	
	lj/e/s=/
*/

#include <iostream>

int main() {
	char word[101];
	int count = 0;

	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '-') i++;
			else if (word[i + 1] == '=')i++;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') i += 2;
			else if (word[i + 1] == '-') i++;
		}
		else if ((word[i] == 'l' && word[i + 1] == 'j') || 
			(word[i] == 'n'&& word[i + 1] == 'j') ||
			(word[i] == 's' && word[i + 1] == '=') ||
			(word[i] == 'z'&& word[i + 1] == '=')) i++;
		count++;
	}

	printf("%d", count);
}