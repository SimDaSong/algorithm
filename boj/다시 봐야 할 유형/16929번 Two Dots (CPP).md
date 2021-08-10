# [BOJ] 16929번 Two Dots (CPP)


백준온라인저지(BOJ) https://www.acmicpc.net/problem/16929


아이디: song98987


## 1. 문제 설명

#### 문제
Two Dots는 Playdots, Inc.에서 만든 게임이다. 게임의 기초 단계는 크기가 N×M인 게임판 위에서 진행된다.



각각의 칸은 색이 칠해진 공이 하나씩 있다. 이 게임의 핵심은 같은 색으로 이루어진 사이클을 찾는 것이다.

다음은 위의 게임판에서 만들 수 있는 사이클의 예시이다.

	
점 k개 d1, d2, ..., dk로 이루어진 사이클의 정의는 아래와 같다.

모든 k개의 점은 서로 다르다. 
k는 4보다 크거나 같다.
모든 점의 색은 같다.
모든 1 ≤ i ≤ k-1에 대해서, di와 di+1은 인접하다. 또, dk와 d1도 인접해야 한다. 두 점이 인접하다는 것은 각각의 점이 들어있는 칸이 변을 공유한다는 의미이다.
게임판의 상태가 주어졌을 때, 사이클이 존재하는지 아닌지 구해보자.

#### 입력
첫째 줄에 게임판의 크기 N, M이 주어진다. 둘째 줄부터 N개의 줄에 게임판의 상태가 주어진다. 게임판은 모두 점으로 가득차 있고, 게임판의 상태는 점의 색을 의미한다. 점의 색은 알파벳 대문자 한 글자이다.

#### 출력
사이클이 존재하는 경우에는 "Yes", 없는 경우에는 "No"를 출력한다.

## 2. 내 소스 코드

```c++
#include <bits/stdc++.h>
using namespace std;

int n, m, nx, ny;
char board[51][51];
bool visited[51][51];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

void dfs(int sx, int sy, int x, int y, int k) {
    visited[y][x] = true;

    for (int i=0; i<4; i++) {
        nx = x+dx[i]; ny = y+dy[i];

        if (sx == nx && sy == ny && k>=3) {
            cout << "Yes";
            exit(0);
        }

        if (!(0 <= nx && nx < m && 0 <= ny && ny < n) || visited[ny][nx] || (board[y][x] != board[ny][nx])) {
            continue;
        }

        // visited를 여기서 체크하면 제대로 동작 안함
        // visited[ny][nx] = true;
        dfs(sx, sy, nx, ny, k+1);
        // visited[ny][nx] = false;
    }

    visited[y][x] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    string input;
    for (int i=0; i<n; i++) {
        cin >> input;
        for (int j=0; j<m; j++) {
            board[i][j] = input[j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            dfs(j, i, j, i, 1);
        }
    }

    cout << "No";
}
```

## 3. 개선점

visited를 함수 호출 전, 후에 체크 해주면 모든 칸은 이미 방문한 칸이 되어버리기 때문에, 어디를 가든지 항상 방문하는 칸을 방문 하게 된다. 우리가 필요한 건 이게 첫 방문인지 또 방문하는 건지 구해줘야 하니까 일단 함수 호출을 하고 방문했는지 검사하고 방문했다고 체크 하면 된다.
