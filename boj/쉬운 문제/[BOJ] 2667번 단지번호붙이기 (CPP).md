# [BOJ] 2667번 단지번호붙이기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2667

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 52766 | 20761 | 13349     | 38.057%   |

#### 문제

<그림 1>과 같이 정사각형 모양의 지도가 있다. 1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 철수는 이 지도를 가지고 연결된 집들의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다. 여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 대각선상에 집이 있는 경우는 연결된 것이 아니다. <그림 2>는 <그림 1>을 단지별로 번호를 붙인 것이다. 지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

![img](https://www.acmicpc.net/upload/images/ITVH9w1Gf6eCRdThfkegBUSOKd.png)

#### 입력

첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

#### 출력

첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.



#### 알고리즘 분류

- [BFS](https://www.acmicpc.net/problem/tag/BFS)
- [DFS](https://www.acmicpc.net/problem/tag/DFS)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>
#include <algorithm>
#include <vector> 

int map[25][25];
int n; // 지도의 크기
int numOfHouses[25 * 25];
int iOfHouses = 0;

// 상 우 하 좌
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };

void dfs(int i, int j) {
	int nx, ny;

	for (int d = 0; d < 4; d++) {
		ny = i + dy[d];
		nx = j + dx[d];

		if (!(0 <= ny && ny < n && 0 <= nx && nx < n)) {
			continue;
		}
		if (map[ny][nx]) {
			map[ny][nx] = 0;
			numOfHouses[iOfHouses]++;
			dfs(ny, nx);
		}
	}
}

int main(void) { 
	// 초기화
	memset(numOfHouses, 0, sizeof(numOfHouses));

	// 입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]); // 숫자 하나씩만 입력 받아야 하니까
		}
	}

	// 탐색
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j]) {
				map[i][j] = 0;
				numOfHouses[iOfHouses]++;
				dfs(i, j);
				iOfHouses++;
			}
		}
	}

	// 출력
	std::sort(numOfHouses, numOfHouses + iOfHouses);
	printf("%d\n", iOfHouses);
	for (int i = 0; i < iOfHouses; i++) {
		printf("%d\n", numOfHouses[i]);
	}
}
```

상하좌우로만 움직이면 되니까 dx, dy를 미리 설정 해준 후, 상하좌우로 움직인다



## 3. 개선점

상하좌우로만 움직이면 됨!
