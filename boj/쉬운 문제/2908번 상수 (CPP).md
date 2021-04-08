# [BOJ] 2908번 상수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2908

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 17593 | 12074 | 10829     | 69.730%   |

#### 문제

상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.

상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734과 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다. 두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

### 출력

첫째 줄에 상수의 대답을 출력한다.



### 예제 입력 1

```
734 893
```

#### 예제 출력 1

```
437
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2009/2010 ](https://www.acmicpc.net/category/21)> [Contest #3](https://www.acmicpc.net/category/detail/85) 1번



#### 알고리즘 분류

- [문자열 처리](https://www.acmicpc.net/problem/tag/문자열 처리)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char a[4], b[4]; // 두 수

	// 수 입력 받기
	scanf("%s %s", a, b);

	// 수 비교 후 출력
	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			printf("%c%c%c", a[2], a[1], a[0]);
			break;
		}
		else if (a[i] < b[i]) {
			printf("%c%c%c", b[2], b[1], b[0]);
			break;
		}
	}
}
```



## 3. 개선점

