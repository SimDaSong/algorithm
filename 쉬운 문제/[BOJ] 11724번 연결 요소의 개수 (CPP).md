# [BOJ] 11724번 연결 요소의 개수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/11724

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 3 초      | 256 MB      | 25352 | 12370 | 8147      | 46.366%   |

#### 문제

방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.

#### 출력

첫째 줄에 연결 요소의 개수를 출력한다.



#### 예제 입력 1

```
6 5
1 2
2 5
5 1
3 4
4 6
```

#### 예제 출력 1 

```
2
```

#### 예제 입력 2 

```
6 8
1 2
2 5
5 1
3 4
4 6
5 4
2 4
2 3
```

#### 예제 출력 2 

```
1
```



#### 출처

- 문제를 만든 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 데이터를 추가한 사람: [djm03178](https://www.acmicpc.net/user/djm03178) [YunGoon](https://www.acmicpc.net/user/YunGoon)
- 잘못된 조건을 찾은 사람: [songjuh](https://www.acmicpc.net/user/songjuh)

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

std::vector<int> node[1001];
bool visited[1001]; // 1부터니까 1000+1을 크기로 줘야함
int n, m;

void dfs(int start) {
	for (int i = 0; i < node[start].size(); i++) {
		if (!visited[node[start][i]]) {
			visited[node[start][i]] = true;
			dfs(node[start][i]);
		}
	}
}

int main(void) { 
	int cnt = 0;
	int u, v;

	scanf("%d %d", &n, &m);

	// u,v 입력 받기
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &u, &v);

		node[u].push_back(v);
		node[v].push_back(u);
	}

	// 탐색
	memset(visited, false, sizeof(visited)); 
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i);
			cnt++;
		}
	}

	printf("%d", cnt);
}
```



## 3. 개선점

없음
