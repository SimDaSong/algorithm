# [BOJ] 2953번 나는 요리사다 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2953

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 6995 | 4289 | 3867      | 63.393%   |

#### 문제

"나는 요리사다"는 다섯 참가자들이 서로의 요리 실력을 뽐내는 티비 프로이다. 각 참가자는 자신있는 음식을 하나씩 만들어오고, 서로 다른 사람의 음식을 점수로 평가해준다. 점수는 1점부터 5점까지 있다.

각 참가자가 얻은 점수는 다른 사람이 평가해 준 점수의 합이다. 이 쇼의 우승자는 가장 많은 점수를 얻은 사람이 된다.

각 참가자가 얻은 평가 점수가 주어졌을 때, 우승자와 그의 점수를 구하는 프로그램을 작성하시오.

#### 입력

총 다섯 개 줄에 각 참가자가 얻은 네 개의 평가 점수가 공백으로 구분되어 주어진다. 첫 번째 참가자부터 다섯 번째 참가자까지 순서대로 주어진다. 항상 우승자가 유일한 경우만 입력으로 주어진다.

#### 출력

첫째 줄에 우승자의 번호와 그가 얻은 점수를 출력한다.



#### 예제 입력 1

```
5 4 4 5
5 4 4 4
5 5 4 4
5 5 5 4
4 4 4 5
```

#### 예제 출력 1

```
4 19
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2008/2009 ](https://www.acmicpc.net/category/22)> [Contest #3](https://www.acmicpc.net/category/detail/94) 1번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int cook[5][4], max, winner;
	int sum[5] = { 0 };

	max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%1d", &cook[i][j]);
			sum[i] += cook[i][j];
		}
		if (max < sum[i]) { //  부등호 실수하지 말자
			max = sum[i]; winner = i + 1;
		}
	}

	printf("%d %d", winner, max);
}
```



## 3. 개선점

