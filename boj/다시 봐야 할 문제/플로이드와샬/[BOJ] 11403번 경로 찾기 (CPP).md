# [BOJ] 11403번 경로 찾기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/11403

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 256 MB      | 22509 | 11866 | 8327      | 51.811%   |

#### 문제

가중치 없는 방향 그래프 G가 주어졌을 때, 모든 정점 (i, j)에 대해서, i에서 j로 가는 경로가 있는지 없는지 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 정점의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄부터 N개 줄에는 그래프의 인접 행렬이 주어진다. i번째 줄의 j번째 숫자가 1인 경우에는 i에서 j로 가는 간선이 존재한다는 뜻이고, 0인 경우는 없다는 뜻이다. i번째 줄의 i번째 숫자는 항상 0이다.

#### 출력

총 N개의 줄에 걸쳐서 문제의 정답을 인접행렬 형식으로 출력한다. 정점 i에서 j로 가는 경로가 있으면 i번째 줄의 j번째 숫자를 1로, 없으면 0으로 출력해야 한다.

#### 알고리즘 분류

- [BFS](https://www.acmicpc.net/problem/tag/BFS)

- [DFS](https://www.acmicpc.net/problem/tag/DFS)

- [플로이드 와샬 알고리즘](https://www.acmicpc.net/problem/tag/플로이드 와샬 알고리즘)

  

## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>

int n; // 정점의 개수
int graph[101][101];
bool visited[101]; // fully directed graph에서 무한루프 방지를 위해서라도 필요
				   // 2차원 배열이 아닌 1차원 배열로. 어차피 end가 start로 바뀌므로
int start, end;

void dfs(int i) {
	visited[i] = true;

	for (int k = 0; k < n; k++) {
		if (graph[i][k]) {
			if (k == end) {
				graph[start][end] = 1;
				//return; // 이거 쓰면 안돼ㅠㅠㅠ
			}
			else if (!visited[k]) {
				graph[start][k] = 1;
				dfs(k);
			}
			else if (graph[k][end]) {
				graph[start][end] = 1;
				//return; // 이거 쓰면 안돼 ㅠㅠ
			}
		}
	}
}

int main(void) {
	// 입력
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &graph[i][j]);
		}
	}

	// 탐색
	for (start = 0; start < n; start++) {
		memset(visited, false, sizeof(visited));
		for (end = 0; end < n; end++) {
			if (!graph[start][end]) {
				dfs(start);
			}
		}
	}

	// 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}
```

dfs로도 풀 수 있으나 dfs를 위한 문제는 아닌 것 같다 ........

대부분 bfs, 플로이드로 풀었고 나도 그렇게 푸는 게 맞다고 생각한다........ dfs로 풀긴 했지만 ........



## 3. 개선점

- 플로이드와샬로 다시 풀자
