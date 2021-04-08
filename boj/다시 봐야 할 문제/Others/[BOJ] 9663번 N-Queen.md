# [BOJ] 9663번 N-Queen (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9663

아이디: song98987


## 1. 문제 설명

### 문제
N-Queen 문제는 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.

N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.

### 입력
첫째 줄에 N이 주어진다. (1 ≤ N < 15)

### 출력
첫째 줄에 퀸 N개를 서로 공격할 수 없게 놓는 경우의 수를 출력한다.

## 2. 내 소스 코드

```cpp
#include <iostream>

using namespace std;

int n, cnt;
bool queen[16][16], isXUsed[16];

bool isPromising(int x, int y) {
    for (int i = 1; y - i >= 0; i++) {
        if (0 <= x-i && queen[y - i][x - i]) {
            return false;
        }
        
        if (x + i < n && queen[y - i][x + i]) {
            return false;
        }
    }

    return true;
}

void dfs(int x, int y) {
    if (y == n - 1) {
        cnt++;
        return;    
    }

    queen[y][x] = true;
    isXUsed[x] = true;

    for (int i = 0; i < n; i++) {
        if (isXUsed[i] || !isPromising(i, y + 1)) {
            continue;
        }
        
        dfs(i, y+1);
    }

    queen[y][x] = false;
    isXUsed[x]=false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        dfs(i, 0);
    }

    cout << cnt;
}
```

## 3. 개선점

* isXUsed 검사하는 부분도 isPromising 함수에 넣어야 할듯
* 시간이 엄청 적게 든 사람들 코드를 봤는데 비트를 이용해서 풀었더라.
나도 비트를 이용해서 풀어봐야겠다.