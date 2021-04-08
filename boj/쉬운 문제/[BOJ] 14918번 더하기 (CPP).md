# [BOJ] 14918번 더하기 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/14918

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 512 MB      | 1606 | 1268 | 1207      | 79.934%   |

#### 문제

두 개의 정수 입력 a, b를 받아서 a+b를 출력하시오.

C 입출력 예제

```
#include <stdio.h>
…
scanf(“%d%d”, &a, &b);
printf(“%d\n”, a+b);
```

C++ 입출력 예제

```
#include <iostream>
…
cin >> a >> b;
cout << a+b << endl;
```

JAVA 입출력 예제

```
import java.util.Scanner;
Scanner sc = new Scanner(System.in);
a = sc.nextInt();
b = sc.nextInt();
System.out.println((a+b));
```

#### 입력

a b; a와 b는 -100,000과 100,000 사이의 정수이다.

#### 출력

a+b



#### 예제 입력 1

```
1 2
```

#### 예제 출력 1

```
3
```

#### 예제 입력 2

```
4 5
```

#### 예제 출력 2

```
9
```



#### 출처

[University ](https://www.acmicpc.net/category/5)> [홍익대학교 ](https://www.acmicpc.net/category/363)> [2017 홍익대학교 컴퓨터공학과 코딩대회](https://www.acmicpc.net/category/detail/1777) A번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
}
```



## 3. 개선점

