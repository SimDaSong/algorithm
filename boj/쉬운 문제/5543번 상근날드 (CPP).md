# [BOJ] 5543번 상근날드 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5543

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 6134 | 4452 | 4155      | 73.644%   |

#### 문제

상근날드에서 가장 잘 팔리는 메뉴는 세트 메뉴이다. 주문할 때, 자신이 원하는 햄버거와 음료를 하나씩 골라, 세트로 구매하면, 가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.

햄버거는 총 3종류 상덕버거, 중덕버거, 하덕버거가 있고, 음료는 콜라와 사이다 두 종류가 있다.

햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.

#### 입력

입력은 총 다섯 줄이다. 첫째 줄에는 상덕버거, 둘째 줄에는 중덕버거, 셋째 줄에는 하덕버거의 가격이 주어진다. 넷째 줄에는 콜라의 가격, 다섯째 줄에는 사이다의 가격이 주어진다. 모든 가격은 100원 이상, 2000원 이하이다.

#### 출력

첫째 줄에 가장 싼 세트 메뉴의 가격을 출력한다.



#### 예제 입력 1

```
800
700
900
198
330
```

#### 예제 출력 1

```
848
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [일본정보올림피아드 ](https://www.acmicpc.net/category/100)> [일본정보올림피아드 예선 ](https://www.acmicpc.net/category/101)> [JOI 2012 예선](https://www.acmicpc.net/category/detail/545) 1번

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
#include <iostream>
#define BURGER 3
#define BEVERAGE 2

int main() {
	int input, min, total;
	
	// 버거
	min = 2000;
	for (int i = 0; i < BURGER; i++) {
		scanf("%d", &input);
		min = min < input ? min : input;
	}
	total = min;

	// 음료
	min = 2000;
	for (int i = 0; i < BEVERAGE; i++) {
		scanf("%d", &input);
		min = min < input ? min : input;
	}
	total += min;

	printf("%d", total - 50);
}
```



## 3. 개선점

