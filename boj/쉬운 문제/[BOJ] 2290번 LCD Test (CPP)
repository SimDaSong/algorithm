# [BOJ] 2290번 LCD Test (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2290

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 1137 | 587  | 382       | 51.001%   |

#### 문제

지민이는 새로운 컴퓨터를 샀다. 하지만 새로운 컴퓨터에 사은품으로 온 LC-디스플레이 모니터가 잘 안나오는 것이다. 지민이의 친한 친구인 지환이는 지민이의 새로운 모니터를 위해 테스트 할 수 있는 프로그램을 만들기로 하였다.

#### 입력

첫째 줄에 두 개의 정수 s와 n이 들어온다. (1 ≤ s ≤ 10, 0 ≤ n ≤ 9,999,999,999)이다. n은 LCD 모니터에 나타내야 할 수 이며, s는 크기이다.

#### 출력

길이가 s인 '`-`'와 '`|`'를 이용해서 출력해야 한다. 각 숫자는 모두 s+2의 가로와 2s+3의 세로로 이루어 진다. 나머지는 공백으로 채워야 한다. 각 숫자의 사이에는 공백이 한 칸 있어야 한다.



#### 예제 입력 1 

```
2 1234567890
```

#### 예제 출력 1 

```
      --   --        --   --   --   --   --   --  
   |    |    | |  | |    |       | |  | |  | |  | 
   |    |    | |  | |    |       | |  | |  | |  | 
      --   --   --   --   --        --   --       
   | |       |    |    | |  |    | |  |    | |  | 
   | |       |    |    | |  |    | |  |    | |  | 
      --   --        --   --        --   --   --  
```



#### 출처

[ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Europe ](https://www.acmicpc.net/category/10)> [Mid-Central European Regional Contest ](https://www.acmicpc.net/category/166)> [MCERC 1999](https://www.acmicpc.net/category/detail/722) E번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 잘못된 데이터를 찾은 사람: [goooora](https://www.acmicpc.net/user/goooora)
- 문제의 오타를 찾은 사람: [joonas](https://www.acmicpc.net/user/joonas)

#### 링크

- [PKU Judge Online](http://poj.org/problem?id=1102)
- [ZJU Online Judge](http://acm.zju.edu.cn/onlinejudge/showProblem.do?problemCode=1146)
- [TJU Online Judge](http://acm.tju.edu.cn/toj/showp1031.html)
- [HDU Online Judge](http://acm.hdu.edu.cn/showproblem.php?pid=1332)

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```c++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	int s; // 크기
	char n[12]; // 모니터에 나타내야 할 수

	scanf("%d %s", &s, n);

	// top
	for (int i = 0; n[i]; i++) {
		printf(" ");
		for (int k = 0; k < s; k++) {
			switch (n[i]) {
			case '1': case '4':
				printf(" ");
				break;
			default:
				printf("-");
				break;
			}
		}
		printf("  ");
	}
	printf("\n");

	// middle 1
	for (int i = 0; i < s; i++) {
		for (int j = 0; n[j]; j++) {
			switch (n[j]) {
			case '1': case '2': case '3': case '7':
				printf(" ");
				break;
			default:
				printf("|");
				break;
			}
			for (int k = 0; k < s; k++) {
				printf(" ");
			}
			switch (n[j]) {
			case '5': case '6':
				printf(" ");
				break;
			default:
				printf("|");
				break;
			}

			printf(" ");
		}

		printf("\n");
	}

	// middle 2
	for (int i = 0; n[i]; i++) {
		printf(" ");
		for (int k = 0; k < s; k++) {
			switch (n[i]) {
			case '1': case '7': case '0':
				printf(" ");
				break;
			default:
				printf("-");
				break;
			}
		}
		printf("  ");
	}
	printf("\n");

	// middle 3
	for (int i = 0; i < s; i++) {
		for (int j = 0; n[j]; j++) {
			switch (n[j]) {
			case '1': case '3': case '4': case '5': case '7': case '9':
				printf(" ");
				break;
			default:
				printf("|");
				break;
			}
			for (int k = 0; k < s; k++) {
				printf(" ");
			}
			switch (n[j]) {
				case '2':
					printf(" ");
					break;
				default:
					printf("|");
					break;
			}

			printf(" ");
		}

		printf("\n");
	}

	// bottom
	for (int i = 0; n[i]; i++) {
		printf(" ");
		for (int k = 0; k < s; k++) {
			switch (n[i]) {
			case '1': case '4': case '7':
				printf(" ");
				break;
			default:
				printf("-");
				break;
			}
		}
		printf("  ");
	}
	printf("\n");
}
```

7 Segment 생각이 났다



## 3. 개선점

- 없음
