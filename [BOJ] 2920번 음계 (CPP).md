# [BOJ] 2920번 음계 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2920

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 24755 | 13869 | 12451     | 57.979%   |

#### 문제

다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.

#### 출력

첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.



#### 예제 입력 1

```
1 2 3 4 5 6 7 8
```

#### 예제 출력 1

```
ascending
```

#### 예제 입력 2

```
8 7 6 5 4 3 2 1
```

#### 예제 출력 2

```
descending
```

#### 예제 입력 3

```
8 1 7 2 6 3 5 4
```

#### 예제 출력 3

```
mixed
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2009/2010 ](https://www.acmicpc.net/category/21)> [Contest #1](https://www.acmicpc.net/category/detail/83) 1번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int scale[8];

	for (int i = 0; i < 8; i++) { scanf("%d", &scale[i]); }

	if (scale[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] != i + 1) {
				printf("mixed"); return 0;
			}
		}
		printf("ascending");
	}
	else if (scale[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] != 8-i) {
				printf("mixed"); return 0;
			}
		}
		printf("descending");
	}
	else
		printf("mixed");
}
```



## 3. 개선점

