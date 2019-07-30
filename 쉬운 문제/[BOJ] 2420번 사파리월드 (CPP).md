# [BOJ] 2420번 사파리월드 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2420

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 8238 | 3408 | 2804      | 41.479%   |

#### 문제

사파리월드는 인터넷으로만 존재하는 미스테리한 나라이다. 사파리월드에는 2개의 서브도메인이 seunghwan.royal.gov.sw와 kyuhyun.royal.gov.sw 이 있는데, 이것이 couple.royal.gov.sw으로 합쳐질 것이다. 그러나 도메인 관리 센터 SWNIC(센터장: 김동규)에는 엄격한 룰이 있다. 두 서브도메인을 합칠 때, 유명도의 차이가 너무 차이나지 않을 경우에만 두 서브도메인을 결혼시키는 것이다. 서브도메인의 유명도는 정수이다. 두 서브도메인의 유명도가 주어졌을 때, 그 차이를 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 두 도메인의 유명도 N과 M이 주어진다. (-2,000,000,000 ≤ N, M ≤ 2,000,000,000)

#### 출력

첫째 줄에 두 유명도의 차이 (|N-M|)을 출력한다.



#### 예제 입력 1

```
-2 5
```

#### 예제 출력 1

```
7
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [Baltic Olympiad in Informatics ](https://www.acmicpc.net/category/6)> [BOI 2011](https://www.acmicpc.net/category/detail/231) P1번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n - m < 0) printf("%lli", -(n - m));
	else printf("%lli", n - m);
}
```



## 3. 개선점

