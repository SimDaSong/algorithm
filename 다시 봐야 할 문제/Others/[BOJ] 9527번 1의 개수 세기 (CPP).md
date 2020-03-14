# [BOJ] 9527번 1의 개수 세기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9527

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 928  | 245  | 153       | 35.011%   |

#### 문제

두 자연수 A, B가 주어졌을 때, A ≤ x ≤ B를 만족하는 모든 x에 대해 x를 이진수로 표현했을 때 1의 개수의 합을 구하는 프로그램을 작성하시오.

즉, f(x) = x를 이진수로 표현 했을 때 1의 개수라고 정의하고, 아래 식의 결과를 구하자.



∑x=ABf(x)



#### 입력

첫 줄에 두 자연수 A, B가 주어진다. (1 ≤ A ≤ B ≤ 1016)

#### 출력

1의 개수를 세어 출력한다.



## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

int getDigit(unsigned long long n) { // 이것도 unsigned long long
	int digit = 0;

	while (n) {
		n >>= 1;
		digit++;
	}

	return digit;
}

unsigned long long getNumOfOne(unsigned long long n) { // int가 아니라
	unsigned long long numOfOne = 0;
	unsigned long long digit;

	while (n) {
		digit = getDigit(n);

		numOfOne += (digit - 1) * (unsigned long long)(pow(2, (digit - 2))) + (n - (unsigned long long)pow(2, digit - 1) + 1);
		n &= ~((unsigned long long)1 << (digit - 1)); // unsigned long long으로 형식 지정 해줘야 함
	}

	return numOfOne;
}

int main() {
	unsigned long long a, b;

	scanf("%llu %llu", &a, &b);

	printf("%llu", getNumOfOne(b) - getNumOfOne(a-1));
}
```

<img src="9527번(1).png">

<img src="9527번(2).png">



## 3. 개선점

어렵다 ㅠㅠㅠ 다시 보자
