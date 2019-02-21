#include <iostream>

int main() {
	char str[256];
	int happy = 0, sad = 0;

	scanf("%[^\n]s", str);

	for (int i = 0; str[i]; i++) {
		if (str[i] == ':' && str[i+1] == '-') {
			if (str[i + 2] == ')') { happy++; i += 2; }
			else if (str[i + 2] == '(') { sad++; i += 2; }
		}
	}

	if (!happy && !sad) printf("none");
	else if (happy == sad) printf("unsure");
	else if (happy > sad) printf("happy");
	else printf("sad");
}