#include <iostream>

int main() {
	int n;
	char file[50][51];
	char compare;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", file[i]);
	}

	for (int i = 0; file[0][i]; i++) {
		compare = file[0][i];
		for (int j = 0; j < n; j++) {
			if (compare != file[j][i]) {
				compare = '?';
				break;
			}
		}
		printf("%c", compare);
	}
}