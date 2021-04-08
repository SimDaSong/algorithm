# [BOJ] 14500번 테트로미노 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/14500

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 25241 | 9039 | 5840      | 33.938%   |

#### 문제

폴리오미노란 크기가 1×1인 정사각형을 여러 개 이어서 붙인 도형이며, 다음과 같은 조건을 만족해야 한다.

- 정사각형은 서로 겹치면 안 된다.
- 도형은 모두 연결되어 있어야 한다.
- 정사각형의 변끼리 연결되어 있어야 한다. 즉, 꼭짓점과 꼭짓점만 맞닿아 있으면 안 된다.

정사각형 4개를 이어 붙인 폴리오미노는 테트로미노라고 하며, 다음과 같은 5가지가 있다.

[![img](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/14500/1.png)](https://commons.wikimedia.org/wiki/File:All_5_free_tetrominoes.svg)

아름이는 크기가 N×M인 종이 위에 테트로미노 하나를 놓으려고 한다. 종이는 1×1 크기의 칸으로 나누어져 있으며, 각각의 칸에는 정수가 하나 쓰여 있다.

테트로미노 하나를 적절히 놓아서 테트로미노가 놓인 칸에 쓰여 있는 수들의 합을 최대로 하는 프로그램을 작성하시오.

테트로미노는 반드시 한 정사각형이 정확히 하나의 칸을 포함하도록 놓아야 하며, 회전이나 대칭을 시켜도 된다.

#### 입력

첫째 줄에 종이의 세로 크기 N과 가로 크기 M이 주어진다. (4 ≤ N, M ≤ 500)

둘째 줄부터 N개의 줄에 종이에 쓰여 있는 수가 주어진다. i번째 줄의 j번째 수는 위에서부터 i번째 칸, 왼쪽에서부터 j번째 칸에 쓰여 있는 수이다. 입력으로 주어지는 수는 1,000을 넘지 않는 자연수이다.

#### 출력

첫째 줄에 테트로미노가 놓인 칸에 쓰인 수들의 합의 최댓값을 출력한다.



#### 예제 입력 1 

```
5 5
1 2 3 4 5
5 4 3 2 1
2 3 4 5 6
6 5 4 3 2
1 2 1 2 1
```

#### 예제 출력 1 

```
19
```

#### 예제 입력 2 

```
4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```

#### 예제 출력 2 

```
20
```

#### 예제 입력 3 

```
4 10
1 2 1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1 2 1
1 2 1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1 2 1
```

#### 예제 출력 3 

```
7
```



#### 출처

- 문제를 만든 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [bluebrown](https://www.acmicpc.net/user/bluebrown)
- 데이터를 추가한 사람: [esuperstar](https://www.acmicpc.net/user/esuperstar) [stack](https://www.acmicpc.net/user/stack) [vjerksen](https://www.acmicpc.net/user/vjerksen)

#### 알고리즘 분류

- [브루트 포스](https://www.acmicpc.net/problem/tag/브루트 포스)



## 2. 내 소스 코드

```C++
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int arr[500][500]; // 값을 저장할 배열
int n, m;// 행, 열 사이즈 
int max = 0; // 합의 최대

void search(int x, int y, int dx, int dy, int sum, int cnt) {
	// 3번 다 돌았으면
	if (cnt == 4) {
		// 최댓값 검사
		if (max < sum) max = sum;
		return;
	}

	// 3번 다 안 돌았으면
	
	// 범위 체크
	if ((x + dx < 0) || (x + dx >= m) || (y + dy < 0) || (y + dy >= n)) {
		// 범위 벗어나면 return
		return;
	}

  // 범위 안 벗어나면 합계 구하기
	sum += arr[y + dy][x + dx];

  // 이동
	if (dx >= 0) // 우
		search(x, y, dx + 1, dy, sum, cnt + 1);
	if (dx <= 0) // 좌
		search(x, y, dx - 1, dy, sum, cnt + 1);
	if (dy >= 0) // 하
		search(x, y, dx, dy + 1, sum, cnt + 1);
}

int main() {
	int sum = 0, cnt;
	int min;

	// n, m 입력 받기
	scanf("%d %d", &n, &m);
	
	// 배열값 입력 받기
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			scanf("%d", &arr[y][x]);
		}
	}

	// 탐색

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			search(x, y, 0, 0, 0, 0);
			
			// 예외 계산
			
			// ㅁ
			if (x > 0 && y > 0) {
				sum = arr[y][x] + arr[y - 1][x] + arr[y][x - 1] + arr[y - 1][x - 1];
				if (sum > max) max = sum;
			}

			// ㅏ, ㅓ, ㅗ, ㅜ
			cnt = 0;
			sum = arr[y][x];
			min = 1000;
			
			if (x > 0) {
				sum += arr[y][x - 1];
				if (min > arr[y][x - 1]) min = arr[y][x - 1];
				cnt++;
			}
			if (x < m - 1) {
				sum += arr[y][x + 1];
				if (min > arr[y][x + 1]) min = arr[y][x + 1];
				cnt++;
			}
			if (y > 0) {
				sum += arr[y - 1][x];
				if (min > arr[y - 1][x]) min = arr[y - 1][x];
				cnt++;
			}
			if (y < n - 1) {
				sum += arr[y + 1][x];
				if (min > arr[y + 1][x]) min = arr[y + 1][x];
				cnt++;
			}

			if (cnt == 4) {
				sum -= min;
			}

			if (cnt >= 3) {
				if (max < sum) max = sum;
			}
		
		}
	}

	printf("%d", max);
	
}
```

<img src="/images/14500번(1).jpg">

<img src="/images/14500번(2).jpg">

<img src="/images/14500번(3).jpg">

<img src="/images/14500번(4).jpg">



## 3. 개선점

- 푸는 방법이 다양한듯
