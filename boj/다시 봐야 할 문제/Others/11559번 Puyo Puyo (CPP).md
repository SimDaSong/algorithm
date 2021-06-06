# [BOJ] 11559번 Puyo Puyo (CPP)


백준온라인저지(BOJ) https://www.acmicpc.net/problem/11559


아이디: song98987


## 1. 문제 설명

### 문제
뿌요뿌요의 룰은 다음과 같다.

필드에 여러 가지 색깔의 뿌요를 놓는다. 뿌요는 중력의 영향을 받아 아래에 바닥이나 다른 뿌요가 나올 때까지 아래로 떨어진다.

뿌요를 놓고 난 후, 같은 색 뿌요가 4개 이상 상하좌우로 연결되어 있으면 연결된 같은 색 뿌요들이 한꺼번에 없어진다. 이때 1연쇄가 시작된다.

뿌요들이 없어지고 나서 위에 다른 뿌요들이 있다면, 역시 중력의 영향을 받아 차례대로 아래로 떨어지게 된다.

아래로 떨어지고 나서 다시 같은 색의 뿌요들이 4개 이상 모이게 되면 또 터지게 되는데, 터진 후 뿌요들이 내려오고 다시 터짐을 반복할 때마다 1연쇄씩 늘어난다.

터질 수 있는 뿌요가 여러 그룹이 있다면 동시에 터져야 하고 여러 그룹이 터지더라도 한번의 연쇄가 추가된다.

남규는 최근 뿌요뿌요 게임에 푹 빠졌다. 이 게임은 1:1로 붙는 대전게임이라 잘 쌓는 것도 중요하지만, 상대방이 터뜨린다면 연쇄가 몇 번이 될지 바로 파악할 수 있는 능력도 필요하다. 하지만 아직 실력이 부족하여 남규는 자기 필드에만 신경 쓰기 바쁘다. 상대방의 필드가 주어졌을 때, 연쇄가 몇 번 연속으로 일어날지 계산하여 남규를 도와주자!

### 입력
총 12개의 줄에 필드의 정보가 주어지며, 각 줄에는 6개의 문자가 있다.

이때 .은 빈공간이고 .이 아닌것은 각각의 색깔의 뿌요를 나타낸다.

R은 빨강, G는 초록, B는 파랑, P는 보라, Y는 노랑이다.

입력으로 주어지는 필드는 뿌요들이 전부 아래로 떨어진 뒤의 상태이다. 즉, 뿌요 아래에 빈 칸이 있는 경우는 없e다.

### 출력
현재 주어진 상황에서 몇연쇄가 되는지 출력한다. 하나도 터지지 않는다면 0을 출력한다.

## 2. 내 소스 코드

```c++
// boj 11599 뿌요뿌요
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <stack>
#include <cstring> // for memset
#include <set>

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

// R은 빨강, G는 초록, B는 파랑, P는 보라, Y는 노랑이다.
std::vector<char> map[7];
bool visited[7][13];
std::queue<std::pair<int,int> > q;
std::stack<std::pair<int,int> > succession; // dfs용, 연속된 칸들의 좌표
std::pair<int, int> now;
int x, y;

// 범위 체크
bool isPromising(int x, int y) {
    return (0 <= y && y<6 && 0 <= x && x < map[y].size());
}

// 최소 4개의 연속된 칸이 있는지
void dfs(char startCh) {
    int cnt=0; // 몇개의 연속된 칸이 있는지

    while(!q.empty()) {
        now = q.front(); q.pop();
        
        x = now.first;
        y = now.second;

        cnt++;
    
        for (int i =0;i<4;i++) {
            if (isPromising(x+dx[i], y+dy[i]) && (startCh == map[y+dy[i]][x+dx[i]]) && !visited[y+dy[i]][x+dx[i]]) {
                visited[y+dy[i]][x+dx[i]] = true; // 여기서 true 처리 해주지 않으면 중복되어 들어감
                q.push(std::make_pair(x+dx[i], y+dy[i]));
                succession.push(std::make_pair(x+dx[i], y+dy[i]));
            }
        }

    }

    if (cnt < 4) {
        for (int i =0;i<cnt;i++) {
            if (!succession.empty())
                succession.pop();
        }
    }

    // printf("정상리턴\n");
}

int main() {
    char input;
    for (int i =0;i<12;i++) {
        for (int j = 0;j<6;j++) {
            scanf(" %1c", &input);
            map[j].insert(map[j].begin(), input);
        }
    }

    int cnt = 0; // 몇 번 터지는지
    while (true) {
        for (int i =0;i<6;i++) {
            for (int j=0;j<map[i].size();j++) {
                if (visited[i][j] || map[i][j] == '.') {
                    continue;
                }

                q.push(std::make_pair(j, i)); // x, y 좌표 넣기
                succession.push(std::make_pair(j, i));
                visited[i][j] = true;
                dfs(map[i][j]);
            }
        }

        if (succession.empty()) {
            break;
        }

        cnt++;

        std::set<int, std::greater<int> > s[6];
        while (!succession.empty()) {
            now = succession.top(); succession.pop();
            
            x = now.first;
            y = now.second;

            s[y].insert(x);
        }

        for (int i=0;i<6;i++) {
            for (std::set<int>::iterator it = s[i].begin(); it !=s[i].end();it++) {
                map[i].erase(map[i].begin() + *it);
            }
            s[i].clear();
        }

        // for(int i=0; i<7; i++){
            memset(visited, false, sizeof(visited));
        // }
    }

    printf("%d", cnt);
}
```

## 3. 개선점

* 더 쉽게 풀 수 있는 방법은 없을까

* 2차원 배열을 memset 함수를 사용하여 초기화 해줄 때 for문으로 돌리지 않아도 된다.