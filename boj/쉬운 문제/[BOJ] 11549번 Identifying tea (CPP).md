# [BOJ] 11549번 Identifying tea (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/11549

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 3 초      | 256 MB      | 310  | 296  | 275       | 95.819%   |

#### 문제

Blind tea tasting is the skill of identifying a tea by using only your senses of smell and taste.

As part of the Ideal Challenge of Pure-Tea Consumers (ICPC), a local TV show is organized. During the show, a full teapot is prepared and five contestants are handed a cup of tea each. The participants must smell, taste and assess the sample so as to identify the tea type, which can be: (1) white tea; (2) green tea; (3) black tea; or (4) herbal tea. At the end, the answers are checked to determine the number of correct guesses.

Given the actual tea type and the answers provided, determine the number of contestants who got the correct answer.

#### 입력

The first line contains an integer T representing the tea type (1 ≤ T ≤ 4). The second line contains five integers A, B, C, D and E, indicating the answer given by each contestant (1 ≤ A, B, C, D, E ≤ 4).

#### 출력

Output a line with an integer representing the number of contestants who got the correct answer.



#### 예제 입력 1

```
1
1 2 3 2 1
```

#### 예제 출력 1

```
2
```

#### 예제 입력 2

```
3
4 1 1 2 1
```

#### 예제 출력 2

```
0
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Latin America ](https://www.acmicpc.net/category/103)> [Latin America Regional Contests 2015](https://www.acmicpc.net/category/detail/1418) I번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int teaType, input, count=0;

	scanf("%d", &teaType);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &input);
		if (input == teaType) count++;
	}
	printf("%d", count);
}
```



## 3. 개선점

