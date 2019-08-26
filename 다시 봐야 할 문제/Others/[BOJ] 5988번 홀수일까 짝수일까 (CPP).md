# [BOJ] 5988번 홀수일까 짝수일까 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5988

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 5971 | 2259 | 2038      | 40.981%   |

#### 문제

짝이 없는 경재는 매일 홀로 있다보니 홀수를 판별할 수 있는 능력이 생겼다. 창식이는 경재의 말이 사실인지 그 능력을 시험해보려 한다. 창식이의 의심이 끝이 없을 것 같아 N개만 확인하기로 정했다.

N개의 정수가 주어지면 홀수인지 짝수인지를 출력하는 프로그램을 만들어 경재의 능력을 검증할 수 있게 도와주자.

#### 입력

첫 번째 줄에 숫자의 개수 N(1 <= N <= 100)이 주어진다.

두 번째 줄부터 N+1번째 줄에 걸쳐 홀수인지 짝수인지 확인할 정수 K (1 <= K <= 10^60)가 주어진다.

#### 출력

N개의 줄에 걸쳐 한 줄씩 정수 K가 홀수라면 'odd'를, 짝수라면 'even'을 출력한다.



#### 예제 입력 1

```
2
1024
5931
```

#### 예제 출력 1

```
even
odd
```

#### 힌트

1024는 2로 나누어지므로 짝수이고, 5931은 그렇지 않으므로 홀수이다.

#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [USA Computing Olympiad ](https://www.acmicpc.net/category/106)> [2009-2010 Season ](https://www.acmicpc.net/category/128)> [USACO October 2009 Contest ](https://www.acmicpc.net/category/129)> [Gold](https://www.acmicpc.net/category/detail/631) 1번

- 문제를 번역한 사람: [joonas](https://www.acmicpc.net/user/joonas)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <string>

int main() {
	int n;
	std::string input;
	
	scanf("%d", &n);
	getchar();

	while (n--) {
		std::getline(std::cin, input);

		if ((input[input.length()-1]-'0') % 2) printf("odd\n");
		else printf("even\n");
	}
}
```



## 3. 개선점

input[input.length()-1]-'0' 부분에서 -'0'는 안써도 됨