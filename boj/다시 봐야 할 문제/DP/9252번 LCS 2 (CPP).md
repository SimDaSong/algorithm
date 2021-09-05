# [BOJ] 9252번 LCS 2 (CPP)


백준온라인저지(BOJ) https://www.acmicpc.net/problem/9252


아이디: song98987


## 1. 문제 설명

#### 문제
LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.

예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.

#### 입력
첫째 줄과 둘째 줄에 두 문자열이 주어진다. 문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다.

#### 출력
첫째 줄에 입력으로 주어진 두 문자열의 LCS의 길이를, 둘째 줄에 LCS를 출력한다.

LCS가 여러 가지인 경우에는 아무거나 출력하고, LCS의 길이가 0인 경우에는 둘째 줄을 출력하지 않는다.

## 2. 내 소스 코드

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d[1001][1001], la, lb;
    string a, b, ds[1001][1001];
    cin >> a >> b;

    a = " " + a;
    b = " " + b;

    la = a.length();
    lb = b.length();
    for (int i=1; i<la; i++) {
        for (int j=1; j<lb; j++) {
            ds[i][j] = "";

            if (a[i] == b[j]) {
                d[i][j] = d[i-1][j-1] + 1;
                ds[i][j] = ds[i-1][j-1] + a[i];
            } else {
                if (d[i-1][j] > d[i][j-1]) {
                    d[i][j] = d[i-1][j];
                    ds[i][j] = ds[i-1][j];
                } else {
                    d[i][j] = d[i][j-1];
                    ds[i][j] = ds[i][j-1];
                }
            }
        }
    }

    cout << d[la-1][lb-1];
    if (d[la-1][lb-1] != 0) {
        cout << "\n" << ds[la-1][lb-1];
    }
}
```

## 3. 개선점

가장 긴 문자열을 구할 때 역추적을 이용하면 시간과 메모리를 줄일 수 있다