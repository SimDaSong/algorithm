# [BOJ] 14490번 백대열 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/14490

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 1711 | 1234 | 1137      | 74.852%   |

## 문제

대열이는 욱제의 친구다.

- “야 백대열을 약분하면 뭔지 알아?”
- “??”
- “십대일이야~ 하하!”

n:m이 주어진다. 욱제를 도와주자. (...)

#### 입력

n과 m이 :을 사이에 두고 주어진다. (1 <= n, m <= 100,000,000)

#### 출력

두 수를 최대한으로 약분하여 출력한다.



#### 예제 입력 1 

```
100:10
```

#### 예제 출력 1 

```
10:1
```

#### 예제 입력 2 

```
18:24
```

#### 예제 출력 2 

```
3:4
```



#### 출처

[High School ](https://www.acmicpc.net/category/97)> [선린인터넷고등학교 ](https://www.acmicpc.net/category/394)> [2017 선린 봄맞이 교내대회](https://www.acmicpc.net/category/detail/1732) D번

- 문제를 만든 사람: [wookje](https://www.acmicpc.net/user/wookje)

  

## 2. 내 소스 코드

```c++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// 최대 공약수 구하기
int getGcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int n; // 링의 개수
	int ring; // 링의 반지름
	int firRing; // 첫 번째 링의 반지름
	int gcd; // 최대 공약수

	scanf("%d %d", &n, &firRing);
	
	for (int i = 1; i < n; i++) {
		scanf("%d", &ring);
		
		// 기약분수로 만들기

		// 최대 공약수 구하기
		gcd = getGcd(firRing, ring);

		printf("%d/%d\n", firRing / gcd, ring / gcd);
	}
}
```



## 3. 개선점

- 없음
