# [BOJ] 5622번 다이얼 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5622

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 16072 | 9195 | 8354      | 57.990%   |

#### 문제

상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.

![img](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/upload/images/dial.png)

전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.

숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.

할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 시간을 구하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어는 2글자~15글자로 이루어져 있다.

#### 출력

첫째 줄에 다이얼을 걸기 위해서 필요한 시간을 출력한다.



#### 예제 입력 1

```
UNUCIC
```

#### 예제 출력 1

```
36
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2012/2013 ](https://www.acmicpc.net/category/18)> [Contest #6](https://www.acmicpc.net/category/detail/560) 1번



## 2. 내 소스 코드

```C++
/*
	문제를 잘 읽자 PQRS!
*/

#include <iostream>

int main() {
	char word[16]; // 단어
	int time = 0;

	// 단어 입력 받기
	scanf("%s", word);

	// 총 걸리는 시간 구하기
	for (int i = 0; word[i]; i++) {
		if (word[i] <= 'O') 
			time += (word[i] - 'A') / 3 + 3;
		else if (word[i] <= 'S') time += 8;
		else if (word[i] <= 'V') time += 9;
		else time += 10;
	}

	printf("%d", time);
}
```

<img src="images/5622번.png">



## 3. 개선점

