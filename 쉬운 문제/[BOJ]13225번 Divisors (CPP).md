# [BOJ]13225번 Divisors (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/13225

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 245  | 204  | 194       | 87.387%   |

#### 문제

Given an integer n, compute the number of divisors of n.

A divisor is an integer, d (1 <= d <= n) that evenly divides n.

Example: If n=10, divisors are: 1, 2, 5 and 10. So the result would be 4.

Example: If n=104717, divisors are 1 and 104717. This is a prime number so the number of divisors is 2.

#### 입력

The first line contains an integer C (1 <= C <= 10) with the amount of numbers you need to process. The next C lines will contain an integer n (1 <= n < 10000) each. You have to compute the number of divisors of these values.

#### 출력

For each integer n, print a line with the number n itself, a space and the number of divisors.



#### 예제 입력 1 

```
10
1
2
3
4
5
9999
31
10
20
1047
```

#### 예제 출력 1 

```
1 1
2 2
3 2
4 3
5 2
9999 12
31 2
10 4
20 6
1047 4
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [All-Ireland Programming Olympiad ](https://www.acmicpc.net/category/356)> [2015 AIPO Preliminary Round](https://www.acmicpc.net/category/detail/1516) 5번



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>

int main() {
	int t, n, divisors;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		divisors = 0;
		for (int i = 1; i <= n; i++)
			if (n%i==0) divisors++;
		
		printf("%d %d\n", n, divisors);
	}
}
```



## 3. 개선점

