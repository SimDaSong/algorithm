# [BOJ] 1003번 피보나치 함수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1003

아이디: song98987



## 1. 문제 설명

| 시간 제한                       | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :------------------------------ | :---------- | :---- | :---- | :-------- | :-------- |
| 0.25 초 (언어별 추가 시간 없음) | 128 MB      | 70055 | 15615 | 12444     | 29.174%   |

#### 문제

다음 소스는 N번째 피보나치 수를 구하는 C++ 함수이다.

```
`int` `fibonacci(``int` `n) {``    ``if` `(n == 0) {``        ``printf``(``"0"``);``        ``return` `0;``    ``} ``else` `if` `(n == 1) {``        ``printf``(``"1"``);``        ``return` `1;``    ``} ``else` `{``        ``return` `fibonacci(n‐1) + fibonacci(n‐2);``    ``}``}`
```

`fibonacci(3)`을 호출하면 다음과 같은 일이 일어난다.

- `fibonacci(3)`은 `fibonacci(2)`와 `fibonacci(1)` (첫 번째 호출)을 호출한다.
- `fibonacci(2)`는 `fibonacci(1)` (두 번째 호출)과 `fibonacci(0)`을 호출한다.
- 두 번째 호출한 `fibonacci(1)`은 1을 출력하고 1을 리턴한다.
- `fibonacci(0)`은 0을 출력하고, 0을 리턴한다.
- `fibonacci(2)`는 `fibonacci(1)`과 `fibonacci(0)`의 결과를 얻고, 1을 리턴한다.
- 첫 번째 호출한 `fibonacci(1)`은 1을 출력하고, 1을 리턴한다.
- `fibonacci(3)`은 `fibonacci(2)`와 `fibonacci(1)`의 결과를 얻고, 2를 리턴한다.

1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, `fibonacci(N)`을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

#### 출력

각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.



#### 예제 입력 1

```
3
0
1
3
```

#### 예제 출력 1

```
1 0
0 1
1 2
```



#### 출처

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 어색한 표현을 찾은 사람: [cyj101366](https://www.acmicpc.net/user/cyj101366)
- 데이터를 추가한 사람: [doju](https://www.acmicpc.net/user/doju)

#### 알고리즘 분류

- [다이나믹 프로그래밍](https://www.acmicpc.net/problem/tag/다이나믹 프로그래밍)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int t, input, fib_0[40] = { 0 }, fib_1[40] = { 0 };
	
	scanf("%d", &t);
	
	fib_0[0] = 1;
	fib_1[1] = 1;

	while (t--) {
		scanf("%d", &input);
		
		if (input == 0) printf("1 0\n");
		else if (input == 1) printf("0 1\n");
		else {
			if (!fib_0[input]) {
				for (int i = 2; i <= input; i++) {
					if (!fib_0[i]) {
						fib_0[i] = fib_0[i - 1] + fib_0[i - 2];
						fib_1[i] = fib_1[i - 1] + fib_1[i - 2];
					}
				}
			}
			printf("%d %d\n", fib_0[input], fib_1[input]);
		}
	}
}
```

아예 처음부터 fib[40]까지 초기화 하시는 분들도 많았는데 나는 고냥 이렇게 풀었다



## 3. 개선점

