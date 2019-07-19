# [BOJ] 2566번 최댓값 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2566

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3623 | 2576 | 2392      | 74.194%   |

#### 문제

<그림 1>과 같이 9×9 격자판에 쓰여진 81개의 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을 작성하시오.

예를 들어, 다음과 같이 81개의 수가 주어지면

![img](https://www.acmicpc.net/upload/images/LDTLhkm3.png)

이들 중 최댓값은 90이고, 이 값은 5행 7열에 위치한다.

#### 입력

첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 자연수가 주어진다. 주어지는 자연수는 100보다 작다.

#### 출력

첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 위치한 행 번호와 열 번호를 빈칸을 사이에 두고 차례로 출력한다. 최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.



#### 예제 입력 1

```
3 23 85 34 17 74 25 52 65
10 7 39 42 88 52 14 72 63
87 42 18 78 53 45 18 84 53
34 28 64 85 12 16 75 36 55
21 77 45 35 28 75 90 76 1
25 87 65 15 28 11 37 28 74
65 27 75 41 7 89 78 64 39
47 47 70 45 23 65 3 41 44
87 13 82 38 31 12 29 29 80
```

#### 예제 출력 1

```
90
5 7
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2007 ](https://www.acmicpc.net/category/68)> [중등부](https://www.acmicpc.net/category/detail/362) 1번

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2007 ](https://www.acmicpc.net/category/68)> [고등부](https://www.acmicpc.net/category/detail/363) 1번



## 2. 내 소스 코드

```C++
#include <iostream>
int main() {
	int board[9][9], row, col, max = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &board[i][j]);
			if (max < board[i][j]) {
				row = i; col = j;
				max = board[i][j];
			}
		}
	}

	printf("%d\n%d %d", max, row+1, col+1);
}
```



## 3. 개선점

없음