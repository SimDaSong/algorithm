# [BOJ] 2745번 진법 변환 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2745

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 6096 | 3450 | 2913      | 57.039%   |

#### 문제

B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

#### 입력

첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)

B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.

#### 출력

첫째 줄에 B진법 수 N을 10진법으로 출력한다.



#### 예제 입력 1 

```
ZZZZZ 36
```

#### 예제 출력 1 

```
60466175
```



#### 출처

- 문제의 오타를 찾은 사람: [bupjae](https://www.acmicpc.net/user/bupjae)

#### 알고리즘 분류

- [진법](https://www.acmicpc.net/problem/tag/진법)

  

## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <string>

int main() {
	std::string input;
	int b, length;
	unsigned long long dec = 0;

	// B진수와 B 입력 받기
	std::cin >> input >> b;

	// 10진법으로 바꾸기
	unsigned long long j = 1;
	for (int i = input.length() - 1; i >= 0; i--, j *= b) {
		// 0~9라면
		if ('0' <= input[i] && input[i] <= '9') {
			dec += (input[i] - '0')*j;
		}
		// A~Z라면
		else {
			dec += (input[i] - 'A' + 10)*j;
		}
	}

	printf("%llu", dec);
}
```



## 3. 개선점

