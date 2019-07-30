# [BOJ] 9076번 점수 집계 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9076

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1567 | 1235 | 1157      | 80.347%   |

#### 문제

한국 체조협회에서는 심판의 오심을 막기 위하여 점수 집계 시스템을 고치기로 하였다. 이전에는 5명의 심판이 1점부터 10점까지 정수의 점수를 주면 최고점과 최저점을 하나씩 제외한 점수의 합을 총점으로 하였다. 이를 보완하기 위해서 최고점과 최저점을 뺀 나머지 3명 점수의 최고점과 최저점의 차이가 4점 이상 나게 되면 점수 조정을 거쳐서 다시 점수를 매기려고 한다. 점수를 집계하여 총점을 계산하거나, 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는 총점 대신 KIN(Keep In Negotiation)을 출력하는 프로그램을 작성하시오.

#### 입력

입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 각 테스트 케이스는 한 줄에 다섯 심판이 준 점수 다섯 개의 정수 Ni(1 ≤ Ni ≤ 10, i = 1, 2, ..., 5)가 하나의 공백을 사이에 두고 주어진다.

#### 출력

각 테스트 케이스에 대해서 총점을 한 줄씩 출력한다. 만일 점수 조정을 거쳐서 다시 점수를 매기려고 하는 경우에는 총점 대신 KIN을 출력한다.



#### 예제 입력 1

```
4
10 8 5 7 9
10 9 10 9 5
10 3 5 9 10
1 2 3 6 9
```

#### 예제 출력 1

```
24
28
KIN
KIN
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Asia ](https://www.acmicpc.net/category/42)> [Korea ](https://www.acmicpc.net/category/211)> [Nationwide Internet Competition ](https://www.acmicpc.net/category/256)> [Seoul Nationalwide Internet Competition 2004](https://www.acmicpc.net/category/detail/1089) A번



## 2. 내 소스 코드

```C++
#include <iostream>
#include <algorithm>

int main() {
	int t, n[5], sum;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &n[j]);
		}
		std::sort(n, n + 5);

		if (n[3] - n[1] >= 4) printf("KIN\n");
		else {
			sum = 0;
			for (int j = 1; j < 4; j++) sum += n[j];
			printf("%d\n", sum);
		}
	}
}
```



## 3. 개선점

