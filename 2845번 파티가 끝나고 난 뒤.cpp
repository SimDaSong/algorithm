#include <iostream>

int main() {
	int people, area, total_people;
	int news[5];
	
	scanf("%d %d", &people, &area);
	total_people = people * area;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &news[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", news[i] - total_people);
	}
}