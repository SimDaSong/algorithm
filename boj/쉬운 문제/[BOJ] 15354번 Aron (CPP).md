# [BOJ] 15354번 Aron (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/15354

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 32 MB       | 57   | 51   | 50        | 90.909%   |

#### 문제

The holiday season is near! Aron wants to get gifts for his friends in Zagreb, so in order to get them on time, he visited a famous toy store in London. After picking out the gifts, he went to the register and discovered that there were already N people in line. Luckily, he noticed that there were groups of people standing in line, in addition to individual customers. A group of people consists of a customer and their friends waiting for them to complete the purchase. The moment when the customer is done, they and their friends leave the line. The people considered a group are standing one behind the other and are wearing shirts of matching colour. Two adjacent groups, adjacent individuals or adjacent individual and a group, will never be wearing shirts of the same colour.

Write a program that will, given the data on the people standing in line, output which person in line Aron is.

#### 입력

The first line of input contains the positive integer N (1 ≤ N ≤ 25) from the task.

Each of the following N lines contains a single character, an uppercase letter of the English alphabet that represents the shirt colour of the i th person in line.

#### 출력

You must output the required number from the task.



#### 예제 입력 1 

```
3
C
Z
P
```

#### 예제 출력 1 

```
4
```

#### 예제 입력 2 

```
6
C
C
P
C
Z
Z
```

#### 예제 출력 2 

```
5
```

#### 예제 입력 3 

```
6
B
B
B
B
B
B
```

#### 예제 출력 3

```
2
```

#### 힌트

Clarification of the second test case: First in line is the group consisting of two people in red shirts. Second in line is an individual in the blue shirt, third in line is an individual in the red shirt, and fourth in line is a group in green shirts. This makes Aron fifth in line.

#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2017/2018 ](https://www.acmicpc.net/category/406)> [Contest #3](https://www.acmicpc.net/category/detail/1821) 1번



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>

int main () {
	int n, line=1;
	char nowColour, prevColour=0;

	scanf("%d", &n);
	
	while (n--) {
		scanf(" %c", &nowColour);
		if (prevColour != nowColour) {
			line++;
			prevColour = nowColour;
		}
	}
	printf("%d", line);
}
```



## 3. 개선점

