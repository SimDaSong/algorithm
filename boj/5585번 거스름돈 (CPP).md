# [BOJ] 5585번 거스름돈 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5585

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 6762 | 4293 | 3802      | 63.706%   |

#### 문제

타로는 자주 JOI잡화점에서 물건을 산다. JOI잡화점에는 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔이 충분히 있고, 언제나 거스름돈 개수가 가장 적게 잔돈을 준다. 타로가 JOI잡화점에서 물건을 사고 카운터에서 1000엔 지폐를 한장 냈을 때, 받을 잔돈에 포함된 잔돈의 개수를 구하는 프로그램을 작성하시오.

예를 들어 입력된 예1의 경우에는 아래 그림에서 처럼 4개를 출력해야 한다.

![img](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/5585/1.png)

#### 입력

입력은 한줄로 이루어져있고, 타로가 지불할 돈(1 이상 1000미만의 정수) 1개가 쓰여져있다.

#### 출력

제출할 출력 파일은 1행으로만 되어 있다. 잔돈에 포함된 매수를 출력하시오.



#### 예제 입력 1

```
380
```

#### 예제 출력 1

```
4
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [일본정보올림피아드 ](https://www.acmicpc.net/category/100)> [일본정보올림피아드 예선 ](https://www.acmicpc.net/category/101)> [JOI 2008 예선](https://www.acmicpc.net/category/detail/553) 1번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int input, change, count = 0;

	scanf("%d", &input);
	change = 1000 - input;

	if (change / 500) {
		count += change / 500;
		change %= 500;
	}
	if (change / 100) {
		count += change / 100;
		change %= 100;
	}
	if (change / 50) {
		count += change / 50;
		change %= 50;
	}
	if (change / 10) {
		count += change / 10;
		change %= 10;
	}
	if (change / 5) {
		count += change / 5;
		change %= 5;
	}
	if (change) {
		count += change;
	}
	printf("%d", count);
}
```



## 3. 개선점

