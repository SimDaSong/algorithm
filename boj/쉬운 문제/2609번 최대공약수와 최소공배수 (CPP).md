# [BOJ] 2609번 최대공약수와 최소공배수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2562

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 128 MB      | 17811 | 11473 | 9463      | 66.463%   |

#### 문제

두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

#### 출력

첫째 줄에는 입력으로 주어진 두 수의 최대공약수를,둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.



#### 예제 입력 1

```
24 18
```

#### 예제 출력 1

```
6
72
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2004 ](https://www.acmicpc.net/category/74)> [중등부](https://www.acmicpc.net/category/detail/380) 1번

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2004 ](https://www.acmicpc.net/category/74)> [고등부](https://www.acmicpc.net/category/detail/381) 1번



## 2. 내 소스 코드

```C++
#include <iostream>

int gcd(int a, int b) {
	int r;

	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n%d", gcd(a, b), lcm(a, b));
}
```



## 3. 개선점

