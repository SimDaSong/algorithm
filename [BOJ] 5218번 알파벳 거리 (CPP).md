# [BOJ] 5218번 알파벳 거리 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5218

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2616 | 1684 | 1466      | 66.125%   |

#### 문제

길이가 같은 두 단어가 주어졌을 때, 각 단어에 포함된 모든 글자의 알파벳 거리를 구하는 프로그램을 작성하시오.

두 글자 x와 y 사이의 알파벳 거리를 구하려면, 먼저 각 알파벳에 숫자를 할당해야 한다. 'A'=1, 'B' = 2, ..., 'Z' = 26. 그 다음 y ≥ x인 경우에는 y-x, y < x인 경우에는 (y+26) - x가 알파벳 거리가 된다.

예를 들어, 'B'와 'D' 사이의 거리는 4 - 2 = 2이고, 'D'와 'B' 사이의 거리는 (2+26) - 4 = 24이다.

#### 입력

첫째 줄에 테스트 케이스의 수 (< 100)가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 두 단어가 공백으로 구분되어져 있다. 단어의 길이는 4보다 크거나 같고, 20보다 작거나 같으며, 알파벳 대문자로만 이루어져 있다.

#### 출력

각 테스트 케이스 마다 각 글자의 알파벳 거리를 공백으로 구분해 출력한다.



#### 예제 입력 1

```
5
AAAA ABCD
ABCD AAAA
DARK LOKI
STRONG THANOS
DEADLY ULTIMO
```

#### 예제 출력 1

```
Distances: 0 1 2 3
Distances: 0 25 24 23
Distances: 8 14 19 24
Distances: 1 14 9 25 1 12
Distances: 17 7 19 5 1 16
```



#### 출처

[High School ](https://www.acmicpc.net/category/97)> [University of Maryland High School Programming Contest ](https://www.acmicpc.net/category/95)> [HSPC 2012](https://www.acmicpc.net/category/detail/452) P2번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int c, sub;
	char word_a[21], word_b[21];

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%s %s", word_a, word_b);
		
		printf("Distances: ");

		for (int j = 0; word_a[j]; j++) {
			sub = word_b[j] - word_a[j];
			if (sub < 0) sub += 26;
			printf("%d ", sub);
		}
		printf("\n");
	}
}
```



## 3. 개선점

