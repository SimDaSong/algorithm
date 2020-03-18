# [BOJ] 1987번 알파벳 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1987

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 256 MB      | 30778 | 10448 | 6392      | 30.952%   |

#### 문제

세로 R칸, 가로 C칸으로 된 표 모양의 보드가 있다. 보드의 각 칸에는 대문자 알파벳이 하나씩 적혀 있고, 좌측 상단 칸 (1행 1열) 에는 말이 놓여 있다.

말은 상하좌우로 인접한 네 칸 중의 한 칸으로 이동할 수 있는데, 새로 이동한 칸에 적혀 있는 알파벳은 지금까지 지나온 모든 칸에 적혀 있는 알파벳과는 달라야 한다. 즉, 같은 알파벳이 적힌 칸을 두 번 지날 수 없다.

좌측 상단에서 시작해서, 말이 최대한 몇 칸을 지날 수 있는지를 구하는 프로그램을 작성하시오. 말이 지나는 칸은 좌측 상단의 칸도 포함된다.

#### 입력

첫째 줄에 R과 C가 빈칸을 사이에 두고 주어진다. (1<=R,C<=20) 둘째 줄부터 R개의 줄에 걸쳐서 보드에 적혀 있는 C개의 대문자 알파벳들이 빈칸 없이 주어진다.

#### 출력

첫째 줄에 말이 지날 수 있는 최대의 칸 수를 출력한다.



#### 예제 입력 1 

```
2 4
CAAB
ADCB
```

#### 예제 출력 1 

```
3
```

#### 알고리즘 분류

- [DFS](https://www.acmicpc.net/problem/tag/DFS)
- [백트래킹](https://www.acmicpc.net/problem/tag/백트래킹)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>
#include <algorithm>

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int row, col;
char board[21][21]; 
bool visited[20][20]; // visited를 굳이 두지 않아도 된다. 어차피 이미 나온 문자로 인식해서 alph 배열로 걸러짐
bool alph[26];
int block = 0;
int maxBlock = 0;

void dfs(int i, int j) { // bool로 했더니 런타임에러 뜸
	int x, y;
	
	visited[i][j] = true;
	alph[board[i][j] - 'A'] = true;
	block++;
	if (maxBlock < block) {
		maxBlock = block;
	}

	for (int m = 0; m < 4; m++) {
		x = j + dx[m];
		y = i + dy[m];

		if (0 <= x && x < col && 0 <= y && y < row && !alph[board[y][x] - 'A'] && !visited[y][x]) {
			dfs(y, x);
		}
	}

	// 여기에 넣기
	visited[i][j] = false;
	alph[board[i][j] - 'A'] = false;
	block--;
}

int main(void) {
	// 입력
	scanf("%d %d", &row, &col);
	for (int i = 0; i < row; i++) {
		scanf(" %s", &board[i]); // 널문자까지 입력 된다ㅠㅠㅠ 그래서 크기를 21로 해줘야 함... 
		// 다음부터는 최대크기+1로 배열 크기를 설정하자 ㅠㅠ
	}

	// 탐색
	dfs(0, 0);

	// 출력
	printf("%d", maxBlock);
}
```



## 3. 개선점

에러를  찾는게 힘들었다. 결국 배열의 크기가 모자라서 입력 부터 오류가 생긴거였다.

1. 리턴 타입을 정의해놓고 값을 리턴하지 않으면 런타임 오류가 난다
2. 문자열로 입력 받을 땐 널문자도 입력되기 때문에 최대 크기 + 1의 배열을 선언해야 한다
