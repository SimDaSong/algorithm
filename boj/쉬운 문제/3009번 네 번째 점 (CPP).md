# [BOJ] 3009번 네 번째 점 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/3009

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2767 | 2096 | 1914      | 77.679%   |

#### 문제

세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

#### 입력

세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

#### 출력

직사각형의 네 번째 점의 좌표를 출력한다.



#### 예제 입력 1

```
30 20
10 10
10 20
```

#### 예제 출력 1

```
30 10
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2007/2008 ](https://www.acmicpc.net/category/23)> [Contest #1](https://www.acmicpc.net/category/detail/100) 1번

#### 링크

- [TJU Online Judge](http://acm.tju.edu.cn/toj/showp2955.html)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &n[i][j]);
		}
	}

	if (n[0][0] == n[1][0]) printf("%d ", n[2][0]);
	else if (n[0][0] == n[2][0]) printf("%d ", n[1][0]);
	else printf("%d ", n[0][0]);
	
	if (n[0][1] == n[1][1]) printf("%d", n[2][1]);
	else if (n[0][1] == n[2][1]) printf("%d", n[1][1]);
	else printf("%d ", n[0][1]);
}
```



## 3. 개선점

