#include <iostream>

int main() {
	char agent[5][11];
	bool fbi[5] = { 0 };
	int count = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%s", agent[i]);
		for (int j = 0; agent[i][j]; j++) {
			if (agent[i][j] == 'F' && agent[i][j + 1] == 'B' && agent[i][j + 2] == 'I') {
				fbi[i] = true; count++; break;
			}
		}
	}
	if (!count) printf("HE GOT AWAY!");
	else {
		for (int i = 0; i < 5; i++) {
			if (fbi[i]) printf("%d ", i + 1);
		}
	}
}