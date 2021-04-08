# [BOJ] 9085번 더하기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9085

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3584 | 2688 | 2515      | 76.770%   |

#### 문제

10보다 작거나 같은 자연수 N개를 주면 합을 구하는 프로그램을 작성하시오.

#### 입력

입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 각 테스트 케이스는 첫 줄에 자연수의 개수 N(1 ≤ N ≤ 100)이 주어지고, 그 다음 줄에는 N개의 자연수가 주어진다. 각각의 자연수 사이에는 하나씩의 공백이 있다.

#### 출력

각 테스트 케이스에 대해서 주어진 자연수의 합을 한 줄에 하나씩 출력한다.



#### 예제 입력 1

```
2
5
1 1 1 1 1
7
1 2 3 4 5 6 7
```

#### 예제 출력 1

```
5
28
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Asia ](https://www.acmicpc.net/category/42)> [Korea ](https://www.acmicpc.net/category/211)> [Nationwide Internet Competition ](https://www.acmicpc.net/category/256)> [Seoul Nationalwide Internet Competition 2003](https://www.acmicpc.net/category/detail/1090) PA번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int test, n, input, sum;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &n);
		sum = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &input);
			sum += input;
		}
		printf("%d\n", sum);
	}
}
```



## 3. 개선점

