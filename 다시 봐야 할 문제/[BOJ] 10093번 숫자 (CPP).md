# [BOJ] 10093번 숫자 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10093

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 4107 | 1021 | 883       | 25.528%   |

#### 문제

두 양의 정수가 주어졌을 때, 두 수 사이에 있는 정수를 모두 출력하는 프로그램을 작성하시오.

#### 입력

두 정수 A와 B가 주어진다. (1 ≤ A, B ≤ 1015, A와 B의 차이는 최대 100,000)

#### 출력

첫째 줄에 두 수 사이에 있는 수의 개수를 출력한다.

둘째 줄에는 두 수 사이에 있는 수를 오름차순으로 출력한다.



#### 예제 입력 1 

```
8 14
```

#### 예제 출력 1 

```
5
9 10 11 12 13
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [Baltic Olympiad in Informatics ](https://www.acmicpc.net/category/6)> [BOI 2014](https://www.acmicpc.net/category/detail/1260) P1번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>

int main() {
	unsigned long long a, b;

	scanf("%llu %llu", &a, &b);

	if ((-1<=a-b) || (a-b)<=1) {
		printf("0"); return 0;
	}

	if (a <= b) {
		printf("%llu\n", b - a - 1);
		for (unsigned long long i = a + 1; i < b; i++)
			printf("%llu ", i);
	}
	else {
		printf("%d\n", a - b - 1);
		for (unsigned long long i = b + 1; i < a; i++)
			printf("%llu ", i);
	}
}
```



## 3. 개선점

1. 수의 범위
2. A와 B의 대소 관계
3. 같은 수가 들어왔을 때