# [BOJ] 2588번 곱셈 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2588

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 9583 | 6551 | 6053      | 70.903%   |

#### 문제

(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.

![img](https://www.acmicpc.net/upload/images/f5NhGHVLM4Ix74DtJrwfC97KepPl27s%20(1).png)

(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

#### 출력

첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.



#### 예제 입력 1

```
472
385
```

#### 예제 출력 1

```
2360
3776
1416
181720
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2005 ](https://www.acmicpc.net/category/72)> [초등부](https://www.acmicpc.net/category/detail/373) 2번



## 2. 내 소스 코드

```C++
/* 두 번째 피연산자를 배열로 잡는게 나을까, 
	그냥 정수로 잡아서 하나하나 일의 자리, 십의 자리, 백의 자리 수를 추출하는 게 나을까? */
#include <iostream>

int main() {
	int operand1, operand2;

	scanf("%d %d", &operand1, &operand2);

	for (int i = 1; i <= 100; i*=10) {
		printf("%d\n", operand1 * (operand2 / i % 10)); // *(i*10)이 아니라 %10
	}
	printf("%d", operand1*operand2);
}
```



## 3. 개선점

다들 그냥 정수로 푼듯