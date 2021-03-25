# [BOJ] 2562번 최대값 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/13023

아이디: song98987



## 1. 문제 설명

### 문제

BOJ 알고리즘 캠프에는 총 N명이 참가하고 있다. 사람들은 0번부터 N-1번으로 번호가 매겨져 있고, 일부 사람들은 친구이다.
오늘은 다음과 같은 친구 관계를 가진 사람 A, B, C, D, E가 존재하는지 구해보려고 한다.
* A는 B와 친구다.
* B는 C와 친구다.
* C는 D와 친구다.
* D는 E와 친구다.
위와 같은 친구 관계가 존재하는지 안하는지 구하는 프로그램을 작성하시오.

### 입력

첫째 줄에 사람의 수 N (5 ≤ N ≤ 2000)과 친구 관계의 수 M (1 ≤ M ≤ 2000)이 주어진다.
둘째 줄부터 M개의 줄에는 정수 a와 b가 주어지며, a와 b가 친구라는 뜻이다. (0 ≤ a, b ≤ N-1, a ≠ b) 같은 친구 관계가 두 번 이상 주어지는 경우는 없다.

### 출력

문제의 조건에 맞는 A, B, C, D, E가 존재하면 1을 없으면 0을 출력한다.



## 2. 내 소스 코드

```c++
// 13023 ABCDE
#include <iostream>
#include <vector>
#include <queue>

std::vector<int> relationship[2001];
int visited[2001];

// 찾으려는 친구 관계인지 확인
bool isRelationshipWanted(int curPerson, int relationshipCnt) {
    relationshipCnt++;
    visited[curPerson] = 1;

    if (relationshipCnt >= 5) {
        return true;
    }

    for (int i = 0; i < relationship[curPerson].size(); i++) {
        if (visited[relationship[curPerson][i]]) {
            // 이미 방문 했다면
            continue;
        }

        // 방문하지 않았다면
        if (isRelationshipWanted(relationship[curPerson][i], relationshipCnt)) {
            return true;
        };
    }

    visited[curPerson] = 0;

    return false;
}

int main() {
    int numOfPeople, numOfRelations; // 사람의 수, 친구 관계의 수
    int a, b; // 친구 관계 input

    // 사람의 수, 친구 관계의 수 입력
    scanf("%d %d", &numOfPeople, &numOfRelations);

    // 친구 관계 입력
    for (int i = 0; i < numOfRelations; i++) {
        // 친구 관계의 수만큼 반복
        scanf("%d %d", &a, &b);

        relationship[a].push_back(b);
        relationship[b].push_back(a);
    }

    // 친구 관계 찾기
    for (int i = 0; i < numOfPeople; i++) {
        if (isRelationshipWanted(i, 0)) {
            printf("1");
            return 0;
        }
    }

    printf("0");
}
```


## 3. 개선점

* 생각한 알고리즘으로 먼저 예제를 풀어본 뒤 코드를 짜자