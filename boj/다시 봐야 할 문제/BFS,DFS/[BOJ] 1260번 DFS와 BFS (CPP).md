# [BOJ] 1260번 DFS와 BFS (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1260

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 128 MB      | 87387 | 28715 | 16708     | 31.504%   |

#### 문제

그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.

#### 입력

첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.

#### 출력

첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.



#### 예제 입력 1 

```
4 5 1
1 2
1 3
1 4
2 4
3 4
```

#### 예제 출력 1 

```
1 2 4 3
1 2 3 4
```

#### 예제 입력 2 

```
5 5 3
5 4
5 2
1 2
3 4
3 1
```

#### 예제 출력 2 

```
3 1 2 5 4
3 1 4 2 5
```

#### 예제 입력 3 

```
1000 1 1000
999 1000
```

#### 예제 출력 3 

```
1000 999
1000 999
```



#### 출처

- 문제를 만든 사람: [author5](https://www.acmicpc.net/user/author5)
- 데이터를 추가한 사람: [djm03178](https://www.acmicpc.net/user/djm03178) [doju](https://www.acmicpc.net/user/doju)
- 어색한 표현을 찾은 사람: [doju](https://www.acmicpc.net/user/doju)
- 빠진 조건을 찾은 사람: [pumpyboom](https://www.acmicpc.net/user/pumpyboom)

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
#include <stack>
#include <queue>22

std::vector<int> node[1001];
bool visited[1001]; // 1부터니까 1000+1을 크기로 줘야함
std::stack<int> s;
std::queue<int> q;
int n, m, start;
int i;

void dfs() {
	int curNode;

	visited[start] = true;
	s.push(start);

	printf("%d ", start);

	while (!(s.empty())) {
		curNode = s.top();
		
		for (i = 0; i < node[curNode].size(); i++) {
			if (!visited[node[curNode][i]]) {
				// 여기서 curNode를 바꿔주면 다음 if문에서 오동작

				visited[node[curNode][i]] = true;
				s.push(node[curNode][i]);
				
				printf("%d ", node[curNode][i]);

				break;
			}
		}

		if (i == node[curNode].size()) {
			s.pop();
		}
	}
}
void bfs() {
	int curNode = start;

	visited[curNode] = true;
	q.push(start);

	printf("%d ", curNode);

	while (!(q.empty())) {
		curNode = q.front();
		q.pop();

		for (i = 0; i < node[curNode].size(); i++) {
			if (!visited[node[curNode][i]]) {
				visited[node[curNode][i]] = true;
				q.push(node[curNode][i]);

				printf("%d ", node[curNode][i]);
			}
		}
	}
}

int main(void) { 
	int u, v;

	scanf("%d %d %d", &n, &m, &start);

	// u,v 입력 받기
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &u, &v);

		node[u].push_back(v);
		node[v].push_back(u);
	}

	// 정점 번호 정렬
	for (int i = 1; i <= n; i++) {
		sort(node[i].begin(), node[i].end());
	}

	// 탐색
	memset(visited, false, sizeof(visited)); // m+1까지만 초기화 해주면 안됨
	dfs();
	printf("\n");
	memset(visited, false, sizeof(visited));
	bfs();
}
```



## 3. 개선점

기초를 탄탄히
