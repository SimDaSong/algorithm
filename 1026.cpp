  #include <iostream>
using namespace std;

int main() {
	int  n, *a, *b;

	scanf("%d", &n);
	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i++) scanf("%d", &a[i]); // & 써주자
	for (int i = 0; i < n; i++) scanf("%d", &b[i]);

	int val;
	// a를 삽입 정렬
	for (int i = 1, j; i < n; i++) {
		val = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > val) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = val;
	}

	// b를 삽입 정렬		
	for (int i = 1, j; i < n; i++) {
		val = b[i];
		j = i - 1;
		while (j >= 0 && b[j] > val) {
			b[j + 1] = b[j];
			j--;
		}
		b[j + 1] = val;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (a[i] * b[n - i -1]); // b[n-i]가 아님
	}

	printf("%d", sum);
}
