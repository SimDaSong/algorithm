# [BOJ] 10951번 A+B - 4 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10951

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 256 MB      | 28084 | 10691 | 9035      | 40.202%   |

#### 문제

두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#### 입력

입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

#### 출력

각 테스트 케이스마다 A+B를 출력한다.



#### 예제 입력 1

```
1 1
2 3
3 4
9 8
5 2
```

#### 예제 출력 1

```
2
5
7
17
7
```



#### 알고리즘 분류

- [사칙연산](https://www.acmicpc.net/problem/tag/사칙연산)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char a, b;

	while (true) {
		a = getchar();
		if (a == EOF) break;
		getchar();
		b = getchar();
		if (b == EOF) break;
		getchar(); // 엔터 제거

		a -= '0'; b -= '0';
		printf("%d\n", a + b);
	}
}
```



## 3. 개선점

1. 나는 하나하나 다 getchar()로 읽어왔는데 scanf()도 되는구나...

   ```C
   #include <stdio.h>
   
   int main() {
   
   	int num1,num2;
   	while( scanf("%d%d", &num1, &num2) != EOF) {
   		printf("%d\n", num1 + num2);
   	}
   
   	return 0;
   }
   ```

   https://www.acmicpc.net/source/13997993