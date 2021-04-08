# [BOJ] 2947번 나무 조각 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2947

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2704 | 1379 | 1255      | 56.202%   |

#### 문제

동혁이는 나무 조각을 5개 가지고 있다. 나무 조각에는 1부터 5까지 숫자 중 하나가 쓰여져 있다. 또, 모든 숫자는 다섯 조각 중 하나에만 쓰여 있다.

동혁이는 나무 조각을 다음과 같은 과정을 거쳐서 1, 2, 3, 4, 5 순서로 만들려고 한다.

1. 첫 번째 조각의 수가 두 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
2. 두 번째 조각의 수가 세 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
3. 세 번째 조각의 수가 네 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
4. 네 번째 조각의 수가 다섯 번째 수보다 크다면, 둘의 위치를 서로 바꾼다.
5. 만약 순서가 1, 2, 3, 4, 5 순서가 아니라면 1 단계로 다시 간다.

처음 조각의 순서가 주어졌을 때, 위치를 바꿀 때 마다 조각의 순서를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 조각에 쓰여 있는 수가 순서대로 주어진다. 숫자는 1보다 크거나 같고, 5보다 작거나 같으며, 중복되지 않는다. 처음 순서는 1, 2, 3, 4, 5가 아니다.

#### 출력

두 조각의 순서가 바뀔때 마다 조각의 순서를 출력한다.



#### 예제 입력 1

```
2 1 5 3 4
```

#### 예제 출력 1

```
1 2 5 3 4
1 2 3 5 4
1 2 3 4 5
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2008/2009 ](https://www.acmicpc.net/category/22)> [Contest #4](https://www.acmicpc.net/category/detail/95) 1번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [jh05013](https://www.acmicpc.net/user/jh05013)

#### 알고리즘 분류

- [버블 정렬](https://www.acmicpc.net/problem/tag/버블 정렬)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n[5], temp;
	bool isOrdered;

	for (int i = 0; i < 5; i++) scanf("%d", &n[i]);

	while (true) {
		for (int i = 0; i < 4; i++) {
			if (n[i] > n[i + 1]) {
				temp = n[i];
				n[i] = n[i + 1];
				n[i + 1] = temp;

				for (int j = 0; j < 5; j++) printf("%d ", n[j]);
				printf("\n");
			}
		}

		isOrdered = true;
		for (int i = 0; i < 4; i++) {
			if (n[i] > n[i + 1]) {
				isOrdered = false;
				break;
			}
		}
		if (isOrdered) return 0;
	}
}
```



## 3. 개선점

