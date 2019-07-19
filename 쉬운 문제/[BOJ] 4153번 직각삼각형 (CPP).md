# [BOJ] 4153번 직각삼각형 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/4513

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2583 | 1658 | 1521      | 64.779%   |

#### 문제

![img](https://www.acmicpc.net/upload/images3/rope-triangle.gif)과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

#### 입력

입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다. 각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.

#### 출력

각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.



#### 예제 입력 1

```
6 8 10
25 52 60
5 12 13
0 0 0
```

#### 예제 출력 1

```
right
wrong
right
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Waterloo's local Programming Contests ](https://www.acmicpc.net/category/98)> [2 October, 2010](https://www.acmicpc.net/category/detail/475) A번

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
#include <iostream>
#include <algorithm>

int main() {
	int n[3];

	while (true) {
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
		if (!n[0] && !n[1] && !n[2]) break;

		std::sort(n, n + 3);
		if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2]) printf("right\n");
		else printf("wrong\n");
	}
}
```



## 3. 개선점

