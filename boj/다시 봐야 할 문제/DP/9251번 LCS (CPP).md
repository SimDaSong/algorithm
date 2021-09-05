# [BOJ] 9251번 LCS (CPP)


백준온라인저지(BOJ) https://www.acmicpc.net/problem/9251


아이디: song98987


## 1. 문제 설명

#### 문제
LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.

예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.

#### 입력
첫째 줄과 둘째 줄에 두 문자열이 주어진다. 문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다.

#### 출력
첫째 줄에 입력으로 주어진 두 문자열의 LCS의 길이를 출력한다.

## 2. 내 소스 코드

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d[1001][1001], la, lb;
    string a, b;
    cin >> a >> b;

    a = " " + a;
    b = " " + b;

    la = a.length();
    lb = b.length();
    for (int i=1; i<la; i++) {
        for (int j=1; j<lb; j++) {
            if (a[i] == b[j]) {
                d[i][j] = d[i-1][j-1] + 1;
            } else {
                d[i][j] = max(d[i-1][j], d[i][j-1]);
            }
        }
    }

    cout << d[la-1][lb-1];
}
```

## 3. 개선점

결국 답지를 봤어야 했던 문제