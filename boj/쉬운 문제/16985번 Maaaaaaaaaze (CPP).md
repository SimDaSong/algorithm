# [BOJ] 16985번 Maaaaaaaaaze (CPP)


백준온라인저지(BOJ) https://www.acmicpc.net/problem/16985


아이디: song98987


## 2. 내 소스 코드

```c++
#include <bits/stdc++.h>
using namespace std;
int board[5][5][5];
int in_x, in_y, out_x, out_y;
int order[5];
bool visited[5]={0};
int _min=INT_MAX;
int d[3][6] = {
    {0,0,0,0,1,-1}, // x
    {0,0,1,-1,0,0}, // y
    {1,-1,0,0,0,0}, //z
};

queue<tuple<int,int,int>> q;
int x, y, z, nx, ny, nz;
void bfs() {
    bool visited[5][5][5]={0};

    q.push({in_x, in_y, 0});
    visited[0][in_y][in_x]=true;
    for (int cnt=1; !q.empty(); cnt++) {
        int size=q.size();
        for (int i=0; i<size; i++) {
            tie(x,y,z) = q.front(); q.pop();
            for (int k=0; k<6; k++) {
                nx=x+d[0][k];
                ny=y+d[1][k];
                nz=z+d[2][k];

                if (!(0<=nx&&nx<5 && 0<=ny&&ny<5 && 0<=nz&&nz<5) || visited[nz][ny][nx] || board[order[nz]][ny][nx]!=1) {
                    continue;
                }

                if (nx==out_x && ny==out_y && nz==4) {
                    // 탈출 성공
                    _min = min(_min, cnt);
                    while (!q.empty()) {q.pop();}
                    return;
                }
                q.push({nx,ny,nz});
                visited[nz][ny][nx]=true;
            }
        }
    }
}


void get_order(int index) {
    if (index==5) {
        // 탈출하기
        bfs();
        return;
    }

    for (int i=0; i<5; i++) {
        if (visited[i] || (index==0&&board[i][in_y][in_x]!=1) || (index==4&&board[i][out_y][out_x]!=1)) {
            continue;
        }
        visited[i]=true;
        order[index]=i;
        get_order(index+1);
        visited[i]=false;
    }
}

void p_rotate(int p) { // 몇번째 판인지
    if (p==5) {
        // 판 쌓는 순서 정하기
        get_order(0);
        return;
    }

    // 0도
    p_rotate(p+1);
    int tmp[20], ti;
    for (int i=0; i<3; i++) {
        // 90도 회전
        for (int l=1; l<=2; l++) {
            ti=0;
            for (int j=2-l; j<=2+l; j++) {
                tmp[ti++]=board[p][2-l][j];
            }
            for (int j=2-l+1; j<=2+l; j++) {
                tmp[ti++]=board[p][j][2+l];
            }
            for (int j=2+l-1; j>=2-l; j--) {
                tmp[ti++]=board[p][2+l][j];
            }
            for (int j=2+l-1; j>=2-l+1; j--) {
                tmp[ti++]=board[p][j][2-l];
            }
            rotate(tmp, tmp+l*2, tmp+ti);
            ti=0;
            for (int j=2-l; j<=2+l; j++) {
                board[p][2-l][j]=tmp[ti++];
            }
            for (int j=2-l+1; j<=2+l; j++) {
                board[p][j][2+l]=tmp[ti++];
            }
            for (int j=2+l-1; j>=2-l; j--) {
                board[p][2+l][j]=tmp[ti++];
            }
            for (int j=2+l-1; j>=2-l+1; j--) {
                board[p][j][2-l]=tmp[ti++];
            }
        }

        p_rotate(p+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            for (int l=0; l<5; l++) {
                cin >> board[i][j][l];
            }
        }
    }

    // 입구, 출구 정하기
    // for (int j=0; j<5; j+=4) {
    //     for (int l=0; l<5; l+=4) {
    //         in_x=l; in_y=j;
    //         out_x=(l==0?4:0);
    //         out_y=(j==0?4:0);
            in_x=0;in_y=0;out_x=4;out_y=4;

            // 판 회전
            p_rotate(0);
    //     }
    // }

    cout << (_min==INT_MAX ? -1 : _min);
}
```

## 3. 개선점

출구랑 입구를 굳이 정하지 않아도 됐었다

출구랑 입구 정하면 시간초과 남