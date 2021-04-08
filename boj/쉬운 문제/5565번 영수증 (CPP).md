# [BOJ] 5565번 영수증 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5565

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 4722 | 4143 | 3911      | 88.745%   |

#### 문제

새 학기를 맞아 상근이는 책을 10권 구입했다. 상근이는 의욕이 너무 앞서서 가격을 조사하지 않고 책을 구입했다. 이제 각 책의 가격을 알아보려고 한다.

하지만, 영수증에는 얼룩이 묻어있었고, 상근이는 책 10권 중 9권의 가격만 읽을 수 있었다.

책 10권의 총 가격과 가격을 읽을 수 있는 9권 가격이 주어졌을 때, 가격을 읽을 수 없는 책의 가격을 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 10권의 총 가격이 주어진다. 둘째 줄부터 9개 줄에는 가격을 읽을 수 있는 책 9권의 가격이 주어진다. 책의 가격은 10000이하이다.

#### 출력

첫째 줄에 가격을 읽을 수 없는 책의 가격을 출력한다.



#### 예제 입력 1

```
9850
1050
800
420
380
600
820
2400
1800
980
```

#### 예제 출력 1

```
600
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [일본정보올림피아드 ](https://www.acmicpc.net/category/100)> [일본정보올림피아드 예선 ](https://www.acmicpc.net/category/101)> [JOI 2010 예선](https://www.acmicpc.net/category/detail/549) 1번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int total, book, sum = 0;

	scanf("%d", &total);
	
	for (int i = 0; i < 9; i++) {
		scanf("%d", &book);
		sum += book;
	}

	printf("%d", total - sum);
}
```



## 3. 개선점

