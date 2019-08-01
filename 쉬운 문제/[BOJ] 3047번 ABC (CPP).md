# [BOJ] 3047번 ABC (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/3047

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 4396 | 2519 | 2291      | 59.848%   |

#### 문제

세 수 A, B, C가 주어진다. A는 B보다 작고, B는 C보다 작다.

세 수 A, B, C가 주어졌을 때, 입력에서 주어진 순서대로 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 세 수 A, B, C가 주어진다. 하지만, 순서는 A, B, C가 아닐 수도 있다. 세 수는 100보다 작거나 같은 자연수이다. 둘째 줄에는 A, B, C로 이루어진 세 글자가 주어지며, 이 순서대로 출력하면 된다.

#### 출력

주어진 세 수를 주어진 출력 순서대로 출력하면 된다.



#### 예제 입력 1

```
1 5 3
ABC
```

#### 예제 출력 1

```
1 3 5
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2006/2007 ](https://www.acmicpc.net/category/24)> [Contest #2](https://www.acmicpc.net/category/detail/109) 2번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [wnsrnek3](https://www.acmicpc.net/user/wnsrnek3)

#### 알고리즘 분류

- [정렬](https://www.acmicpc.net/problem/tag/정렬)



## 2. 내 소스 코드

```c++
#include <iostream>
#include <algorithm>

int main() {
	int n[3];
	char alph[4];
	
	for (int i = 0; i < 3; i++) scanf("%d", &n[i]);
	std::sort(n, n + 3);
	
	scanf("%s", alph);
	for (int i = 0; i < 3; i++) {
		printf("%d ", n[alph[i] - 'A']);
	}
}
```



## 3. 개선점

%s로 문자열 입력 받을 땐 무조건 받으려고 하는 길이의 +1 만큼 배열 할당 해주자!ㄴ