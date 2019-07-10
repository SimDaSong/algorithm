# [BOJ] 8393번 합 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/8393

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 40572 | 29229 | 26301     | 73.462%   |

#### 문제

n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

#### 출력

1부터 n까지 합을 출력한다.



#### 예제 입력 1

```
3
```

#### 예제 출력 1

```
6
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Algorithmic Engagements ](https://www.acmicpc.net/category/247)> [PA 2006](https://www.acmicpc.net/category/detail/1022) 0-1번



## 2. 내 소스 코드

```C++
#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    
    printf("%d", sum);
    return 0;
}

```



## 3. 개선점

