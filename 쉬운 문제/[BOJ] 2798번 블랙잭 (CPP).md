# [BOJ] 2798번 블랙잭 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2798

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 6219 | 2639 | 2202      | 42.575%   |

#### 문제

카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다. 카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임이다. 블랙잭은 카지노마다 다양한 규정이 있다.

한국 최고의 블랙잭 고수 김정인은 새로운 블랙잭 규칙을 만들어 상근, 창영이와 게임하려고 한다.

김정인 버젼의 블랙잭에서 각 카드에는 양의 정수가 쓰여 있다. 그 다음, 딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓는다. 그런 후에 딜러는 숫자 M을 크게 외친다.

이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다. 블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.

N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.

#### 입력

첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다. 둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는다.

합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.

#### 출력

첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.



#### 예제 입력 1

```
5 21
5 6 7 8 9
```

#### 예제 출력 1

```
21
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2011/2012 ](https://www.acmicpc.net/category/19)> [Contest #6](https://www.acmicpc.net/category/detail/73) 1번

#### 알고리즘 분류

- [배열](https://www.acmicpc.net/problem/tag/배열)
- [구현](https://www.acmicpc.net/problem/tag/구현)
- [반복문](https://www.acmicpc.net/problem/tag/반복문)



## 2. 내 소스 코드

```C++
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, m, input, size, sumOfCards, answer;
	std::vector<int> card;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input <= m) card.push_back(input);
	}

	std::sort(card.begin(), card.end());
	
	size = card.size(); 
	answer = 0;
	for (int i = 0; i < size-2; i++) {
		for (int j = i+1; j < size-1; j++) {
			if (card.at(i) + card.at(j) >= m) break;

			for (int k = j+1; k < size; k++) {
				sumOfCards = card.at(i) + card.at(j) + card.at(k);
				if (sumOfCards > m) break;
				if (sumOfCards == m) {
					printf("%d", sumOfCards);
					return 0;
				}
				if (sumOfCards > answer) answer = sumOfCards;
			}
		}
	}
	printf("%d", answer);
}
```



## 3. 개선점

