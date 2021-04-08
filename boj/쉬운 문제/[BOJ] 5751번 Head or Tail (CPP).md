# [BOJ] 5751번 Head or Tail (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5751

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 18   | 18   | 10        | 100.000%  |

#### 문제

John and Mary have been friends since nursery school. Since then, they have shared a playful routine: every time they meet, they play Head or Tail with a coin, and whoever wins has the privilege of deciding what they are going to play during the day. Mary always choose Head, and John always choose Tail.

Nowadays they are in college, but continue being truly good friends. Whenever they meet, they still play Head and Tail, and the winner decides which film to watch, or which restaurant to have dinner together, and so on.

Yesterday Mary confided to John that she has been keeping a record of the results of every play since they started, in nursery school. It came as a surprise to John! But since John is studying Computer Science, he decided it was a good opportunity to show Mary his skills in programming, by writing a program to determine the number of times each of them won the game over the years.

#### 입력

The input contains several test cases. The first line of a test case contains a single integer N indicating the number of games played (1 ≤ N ≤ 10000). The following line contains N integers Ri, separated by space, describing the list of results. If Ri = 0 it means Mary won the ith game, if Ri= 1 it means John won the ith game (1 ≤ i ≤ N). The end of input is indicated by N = 0.

#### 출력

For each test case in the input your program should output a line containing the sentence “Mary won X times and John won Y times”, where X ≥ 0 and Y ≥ 0.



#### 예제 입력 1

```
5
0 0 1 0 1
6
0 0 0 0 0 1
0
```

#### 예제 출력 1

```
Mary won 3 times and John won 2 times
Mary won 5 times and John won 1 times
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Latin America ](https://www.acmicpc.net/category/103)> [South America Regional Contests 2005](https://www.acmicpc.net/category/detail/571) PA번



## 2. 내 소스 코드

```c++
// github.com/SimDaSong/BOJ
#include <iostream>

int main () {
	int n, input, head, tail;

	while (true) {
		scanf("%d", &n);

		if (!n) return 0;

		head = 0; tail = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &input);
			if (input) tail++;
			else head++;
		}

		printf("Mary won %d times and John won %d times\n", head, tail);
	}
}
```



## 3. 개선점

