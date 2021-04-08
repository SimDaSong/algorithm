# [BOJ] 9316번 Hello Judge (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/9316

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3260 | 2244 | 2114      | 70.233%   |

#### 문제

당신은 N개의 테스트케이스들에게 반드시 인사를 해야 이 문제를 풀 수 있다.

N개의 줄에 걸쳐

"Hello World, Judge i!"

를 출력하는 프로그램을 만들라. 여기서 i는 줄의 번호이다.

#### 입력

N이 주어진다. (1 ≤ N ≤ 200)

#### 출력

한 줄에 하나의 Hello World, Judge i! 를 출력한다.



#### 예제 입력 1

```
3
```

#### 예제 출력 1

```
Hello World, Judge 1!
Hello World, Judge 2!
Hello World, Judge 3!
```



#### 출처

[High School ](https://www.acmicpc.net/category/97)> [University of Virginia High School Programming Contest ](https://www.acmicpc.net/category/277)> [UVa HSPC 2011](https://www.acmicpc.net/category/detail/1154) PA번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) printf("Hello World, Judge %d!\n", i);
}
```



## 3. 개선점

