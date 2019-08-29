# [BOJ] 17010번 Time to Decompress (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/17010

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 512 MB      | 245  | 223  | 209       | 91.667%   |

#### 문제

You and your friend have come up with a way to send messages back and forth.

Your friend can encode a message to you by writing down a positive integer N and a symbol. You can decode that message by writing out that symbol N times in a row on one line.

Given a message that your friend has encoded, decode it.

#### 입력

The first line of input contains L, the number of lines in the message.

The next L lines each contain one positive integer less than 80, followed by one space, followed by a (non-space) character.

#### 출력

The output should be L lines long. Each line should contain the decoding of the corresponding line of the input. Specifically, if line i+1 of the input contained N x, then line i of the output should contain just the character x printed N times.



#### 예제 입력 1 

```
4
9 +
3 -
12 A
2 X
```

#### 예제 출력 1 

```
+++++++++
---
AAAAAAAAAAAA
XX
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [Canadian Computing Competition & Olympiad ](https://www.acmicpc.net/category/173)> [2019 ](https://www.acmicpc.net/category/446)> [CCC 2019 Junior Division](https://www.acmicpc.net/category/detail/2004) 2번



## 2. 내 소스 코드

```c++
// github.com/SimDaSong/BOJ
#include <iostream>

int main() {
	int l, pos;
	char ch;

	scanf("%d", &l);
	while (l--) {
		scanf("%d %c", &pos, &ch);
		while (pos--)
			printf("%c", ch);
		puts(""); // puts는 굳이 \n 안써도 됨
	}
}
```



## 3. 개선점

