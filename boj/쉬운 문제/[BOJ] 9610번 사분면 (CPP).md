# [BOJ] 9610번 사분면 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9610

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1554 | 1166 | 1072      | 77.067%   |

#### 문제

2차원 좌표 상의 여러 점의 좌표 (x,y)가 주어졌을 때, 각 사분면과 축에 점이 몇 개 있는지 구하는 프로그램을 작성하시오.

![img](https://www.acmicpc.net/upload/images/quad.png)

#### 입력

첫째 줄에 점의 개수 n (1 ≤ n ≤ 1000)이 주어진다. 다음 n개 줄에는 점의 좌표 (xi, yi)가 주어진다. (-106 ≤ xi, yi ≤ 106)

#### 출력

각 사분면과 축에 점이 몇 개 있는지를 예제 출력과 같은 형식으로 출력한다.



#### 예제 입력 1

```
5
0 0
0 1
1 1
3 -3
2 2
```

#### 예제 출력 1

```
Q1: 2
Q2: 0
Q3: 0
Q4: 1
AXIS: 2
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Asia ](https://www.acmicpc.net/category/42)> [Thailand ](https://www.acmicpc.net/category/102)> [2013 ACM-ICPC Asia Phuket Regional Programming Contest](https://www.acmicpc.net/category/detail/1186) PB번



## 2. 내 소스 코드

```c++
#include <iostream>

int main() {
	int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x == 0 || y == 0) axis++;
		else if (x > 0) {
			if (y > 0) q1++;
			else q4++;
		}
		else {
			if (y > 0) q2++;
			else q3++;
		}
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", q1, q2, q3, q4, axis);
}
```



## 3. 개선점

