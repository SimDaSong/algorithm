# [BOJ] 5656번 비교 연산자 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5656

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1211 | 737  | 652       | 62.692%   |

#### 문제

C언어의 비교 연산자는 아래 표에 나와있다. 

| 연산자 | 뜻          |
| :----- | :---------- |
| >      | 크다        |
| >=     | 크거나 같다 |
| <      | 작다        |
| <=     | 작거나 같다 |
| ==     | 같다        |
| !=     | 같지 않다   |

이 연산자는 두 피연산자를 비교하고, (왼쪽 값과 오른쪽 값) true또는 false (1 또는 0)을 리턴한다. 예를 들어, 2 > 3은 "false"를 리턴하고 (2는 3보다 작기 때문), 3 != 4는 "true", 3 >= 3은 "true"를 리턴한다.

C언어의 비교 연산식이 주어졌을 때, 결과를 구하는 프로그램을 작성하시오.

#### 입력

입력은 최대 12000줄로 이루어져 있다. 각 줄은 두 정수 a, b가 주어지며, 정수 사이에는 연산자 ">", ">=", "<", "<=", "==", "!="중 하나가 주어진다. 연산자와 피연산자 사이에는 공백이 하나 있으며, 연산자로 "E"가 주어진 경우에는 프로그램을 끝낸다. (-10000 ≤ a,b ≤ 10000)

#### 출력

입력의 각 줄 마다 입력으로 주어진 식의 결과가 "true"인지 "false"인지 출력한다.



#### 예제 입력 1

```
3 != 3
4 < 4
4 <= 5
3 E 3
```

#### 예제 출력 1

```
Case 1: false
Case 2: false
Case 3: true
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Asia ](https://www.acmicpc.net/category/42)> [Thailand ](https://www.acmicpc.net/category/102)> [2009 ACM-ICPC Asia Phuket Regional Programming Contest](https://www.acmicpc.net/category/detail/563) E번



## 2. 내 소스 코드

```C++
#include <iostream>
#include <cstring>

int main() {
	int a, b;
	char op[3];
	bool isTrue;

	for (int i = 1;;i++) {
		scanf("%d %s %d", &a, op, &b);

		if (!strcmp(op, "E")) return 0;

		if (!strcmp(op, ">")) {
			if (a > b) isTrue = true;
			else isTrue = false;
		}
		else if (!strcmp(op, ">=")) {
			if (a >= b) isTrue = true;
			else isTrue = false;
		}
		else if (!strcmp(op, "<")) {
			if (a < b) isTrue = true;
			else isTrue = false;
		}
		else if (!strcmp(op, "<=")) {
			if (a <= b) isTrue = true;
			else isTrue = false;
		}
		else if (!strcmp(op, "==")) {
			if (a == b) isTrue = true;
			else isTrue = false;
		}
		else if (!strcmp(op, "!=")) {
			if (a != b) isTrue = true;
			else isTrue = false;
		}

		printf("Case %d: ", i);
		if (isTrue) printf("true\n");
		else printf("false\n");
	}
}
```



## 3. 개선점

