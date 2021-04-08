# [BOJ] 10026번 적록색약 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10026

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 11698 | 6663 | 5319      | 57.784%   |

#### 문제

적록색약은 빨간색과 초록색의 차이를 거의 느끼지 못한다. 따라서, 적록색약인 사람이 보는 그림은 아닌 사람이 보는 그림과는 좀 다를 수 있다.

크기가 N×N인 그리드의 각 칸에 R(빨강), G(초록), B(파랑) 중 하나를 색칠한 그림이 있다. 그림은 몇 개의 구역으로 나뉘어져 있는데, 구역은 같은 색으로 이루어져 있다. 또, 같은 색상이 상하좌우로 인접해 있는 경우에 두 글자는 같은 구역에 속한다. (색상의 차이를 거의 느끼지 못하는 경우도 같은 색상이라 한다)

예를 들어, 그림이 아래와 같은 경우에

```
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
```

적록색약이 아닌 사람이 봤을 때 구역의 수는 총 4개이다. (빨강 2, 파랑 1, 초록 1) 하지만, 적록색약인 사람은 구역을 3개 볼 수 있다. (빨강-초록 2, 파랑 1)

그림이 입력으로 주어졌을 때, 적록색약인 사람이 봤을 때와 아닌 사람이 봤을 때 구역의 수를 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 N이 주어진다. (1 ≤ N ≤ 100)

둘째 줄부터 N개 줄에는 그림이 주어진다.

#### 출력

적록색약이 아닌 사람이 봤을 때의 구역의 개수와 적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다.

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

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int n;
char area[2][101][101]; 
bool visited[101][101];
int numOfArea1 = 0, numOfArea2 = 0; // 적록색약 아닌 사람, 적록색약인 사람
int iOfArea;
int x, y;

void dfs(int i, int j) { 
	visited[i][j] = true;

	for (int m = 0; m < 4; m++) {
		x = j + dx[m];
		y = i + dy[m];

		if (0 <= x && x < n && 0 <= y && y < n && !visited[y][x] && (area[iOfArea][i][j] == area[iOfArea][y][x])) {
			dfs(y, x);
		}
	}
}

int main(void) {
	// 입력
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %s", &area[0][i]);
		
		for (int j = 0; j < n; j++) {
			if (area[0][i][j] == 'G') {
				area[1][i][j] = 'R';
			}
			else {
				area[1][i][j] = area[0][i][j];
			}
		}
	}

	// 탐색
	iOfArea = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				numOfArea1++;
			}
		}
	}
	memset(visited, false, sizeof(visited));
	iOfArea = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				numOfArea2++;
			}
		}
	}

	// 출력
	printf("%d %d", numOfArea1, numOfArea2);
}
```

- n에100, area의 값에 모두 'R'로 입력을 줬을 때 vs 내에서 스택오버플로우가 났었는데 백준에선 잘 돌아갔다!

  

## 3. 개선점

- 없음
