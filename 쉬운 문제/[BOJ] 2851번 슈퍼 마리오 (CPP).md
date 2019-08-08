# [BOJ] 2851번 슈퍼 마리오 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2851

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 4585 | 1769 | 1598      | 39.890%   |

#### 문제

슈퍼 마리오 앞에 10개의 버섯이 일렬로 놓여져 있다. 이 버섯을 먹으면 점수를 받는다.

슈퍼 마리오는 버섯을 처음부터 나온 순서대로 집으려고 한다. 하지만, 모든 버섯을 집을 필요는 없고 중간에 중단할 수 있다.

중간에 버섯을 먹는 것을 중단했다면, 그 이후에 나온 버섯은 모두 먹을 수 없다. 따라서 첫 버섯을 먹지 않았다면, 그 이후 버섯도 모두 먹을 수 없다.

마리오는 받은 점수의 합을 최대한 100에 가깝게 만들려고 한다.

버섯의 점수가 주어졌을 때, 마리오가 받는 점수를 출력하는 프로그램을 작성하시오.

#### 입력

총 10개의 줄에 각각의 버섯의 점수가 주어진다. 이 값은 100보다 작거나 같은 양의 정수이다. 버섯이 나온 순서대로 점수가 주어진다.

#### 출력

첫째 줄에 마리오가 받는 점수를 출력한다. 만약 100에 가까운 수가 2개라면 (예: 98, 102) 마리오는 큰 값을 선택한다.



#### 예제 입력 1

```
10
20
30
40
50
60
70
80
90
100
```

#### 예제 출력 1

```
100
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2010/2011 ](https://www.acmicpc.net/category/20)> [Contest #5](https://www.acmicpc.net/category/detail/79) 1번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
// 마지막 입력까지 답이 나오지 않는 경우를 생각하지 못함
#include <iostream>
#include <cmath>

int main () {
	int input, sum = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		
		if (abs(100 - sum) < abs(100 - (sum + input))) {
			printf("%d", sum);
			return 0;
		}
		else if (abs(100 - sum) == abs(100 - (sum + input))) {
			printf("%d", sum + input);
			return 0;
		}
		
		sum += input;
	}

	printf("%d", sum);
}
```



## 3. 개선점

