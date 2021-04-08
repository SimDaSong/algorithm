# [BOJ] 8959번 OX퀴즈 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/8958

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 28305 | 15184 | 13360     | 56.137%   |

#### 문제

"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

#### 출력

각 테스트 케이스마다 점수를 출력한다.



#### 예제 입력 1

```
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
```

#### 예제 출력 1

```
10
9
7
55
30
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Asia ](https://www.acmicpc.net/category/42)> [Korea ](https://www.acmicpc.net/category/211)> [Asia Regional - Seoul 2005](https://www.acmicpc.net/category/detail/1067) A번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char ch[80]; // 결과
	int n; // 테스트 케이스의 수
	int score = 0;
	int count; // 연속해서 맞은 문제의 개수

	// 테스트 케이스 수 입력 받기
	scanf("%d", &n);

	// 테스트 케이스 수 만큼 결과 입력 받고 점수 출력
	for (int i = 0; i < n; i++) {
		// 결과 입력
		scanf("%s", ch);
		// 점수 구하기
		count = 1;
		score = 0;
		for (int j = 0; ch[j]; j++) {
			if (ch[j] == 'O') {
				score += count;
				count++;
			}
			else count = 1;
		}
		// 점수 출력
		printf("%d\n", score);
	}
}
```



## 3. 개선점

