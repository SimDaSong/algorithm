# [BOJ] 2490번 윷놀이 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2490

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 13931 | 8174 | 7392      | 59.293%   |

#### 문제

우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어 도, 개, 걸, 윷, 모를 결정한다. 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중 어떤 것인지를 결정하는 프로그램을 작성하라.

#### 입력

첫째 줄부터 셋째 줄까지 각 줄에 각각 한 번 던진 윷짝들의 상태를 나타내는 네 개의 정수(0 또는 1)가  빈칸을 사이에 두고 주어진다.

#### 출력

첫째 줄부터 셋째 줄까지 한 줄에 하나씩 결과를  도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E로 출력한다.



#### 예제 입력 1

```
0 1 0 1
1 1 1 0
0 0 1 1
```

#### 예제 출력 1

```
B
A
B
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2009 ](https://www.acmicpc.net/category/64)> [초등부](https://www.acmicpc.net/category/detail/349) 1번



#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
/*
	배 : 0, 등 : 1
*/

#include <iostream>

int main() {
	int yut[4]; 
	int front; // 등 굳이 안 세도 됨

	// 윷짝들의 상태 3번 입력 받기
	for (int i = 0; i < 3; i++) {
		// 윷짝 입력 받고 등, 배 개수 세기
		front = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[i]);
			if (!yut[i]) front++;
		}
	
		// 도개걸윷모 판별
		if (!front) printf("E\n");
		else printf("%c\n", 'A' + (front - 1));
	}
}
```



## 3. 개선점

