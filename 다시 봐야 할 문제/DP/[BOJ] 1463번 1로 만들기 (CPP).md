# [BOJ] 1463번 1로 만들기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1463

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 128 MB      | 80797 | 26450 | 16873     | 32.149%   |

#### 문제

정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
2. X가 2로 나누어 떨어지면, 2로 나눈다.
3. 1을 뺀다.

정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.

#### 입력

첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 정수 N이 주어진다.

#### 출력

첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.



#### 예제 입력 1 

```
2
```

#### 예제 출력 1 

```
1
```

#### 예제 입력 2 

```
10
```

#### 예제 출력 2

```
3
```

#### 힌트

10의 경우에 10 -> 9 -> 3 -> 1 로 3번 만에 만들 수 있다.

#### 출처

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [cyj101366](https://www.acmicpc.net/user/cyj101366) [jugol](https://www.acmicpc.net/user/jugol)
- 어색한 표현을 찾은 사람: [dbfldkfdbgml](https://www.acmicpc.net/user/dbfldkfdbgml)
- 데이터를 추가한 사람: [dynamiseus](https://www.acmicpc.net/user/dynamiseus)

#### 알고리즘 분류

- [다이나믹 프로그래밍](https://www.acmicpc.net/problem/tag/다이나믹 프로그래밍)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <vector>

int main() {
	int x, count = 0, iOfTree = 0, curVal;
	std::vector<int> tree;

	scanf("%d", &x);
	tree.push_back(x);

	if (x == 1) {
		printf("0"); return 0;
	}

	while (true) {
		curVal = tree[iOfTree];
		if (curVal == x) {
			count++; x--;
		}

		// 1 빼기
		if (curVal - 1 == 1) break;
		tree.push_back(curVal - 1);

		// 2로 나누기
		if (curVal % 2 == 0) {
			if (curVal / 2 == 1) break;
			tree.push_back(curVal / 2);
		}

		// 3으로 나누기
		if (curVal % 3 == 0) {
			if (curVal / 3 == 1) break;
			tree.push_back(curVal / 3);
		}

		iOfTree++;
	}

	printf("%d", count);
}
```

<img src="../../images/1463번.png">

DP 어려웡 ...



## 3. 개선점

1. 훨씬 간결한 코드

```c++
#include <stdio.h>
#define min(a,b) a>b?b:a
int main() {
	int dp[1000001] = { 0 };

	int n; scanf("%d", &n);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) dp[i] = min(dp[i],dp[i/3] + 1);
		if (i % 2 == 0) dp[i] = min(dp[i],dp[i / 2] + 1);

	}
	printf("%d\n", dp[n]);
	return 0;
}
```

https://www.acmicpc.net/source/14669265

이분도 dp 자체를 이용하여 최소 횟수를 세셨는데 역시 나는 dp에 대한 개념이 아직 잘 잡혀있지 않은 것 같다..

이 분은 vector를 안쓰시고 배열을 쓰셨는데 오히려 나보다 메모리를 적게 차지하셨다.



2. 해설!

https://blockdmask.tistory.com/254



3. dp에 대해서 더 공부한 뒤 다시 풀어봐야겠다ㅠㅠ