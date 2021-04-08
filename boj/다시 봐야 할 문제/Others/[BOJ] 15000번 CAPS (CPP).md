# [BOJ] 15000번 CAPS (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/15000

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 575  | 401  | 280       | 71.429%   |

#### 문제

Earth is under attack! Messages need to be sent to the Earth Defense Force (EDF) that makes clear that the situation is dire. The EDF’s strongest forces consist of mechs (huge bipedal robots) that are piloted by Japanese teenagers. To make sure that the messages come across as urgent, they must be displayed on the monitors of the pilots in uppercase letters. Unfortunately, the tachyon communication system that is used by the EDF is only able to send strings in lower-case alphabetic characters.

The set of lower-case alphabetic characters is made up of the following characters: ’a’, ’b’, ’c’, ’d’, ’e’, ’f’, ’g’, ’h’, ’i’, ’j’, ’k’, ’l’, ’m’, ’n’, ’o’, ’p’, ’q’, ’r’, ’s’, ’t’, ’u’, ’v’, ’w’, ’x’, ’y’, ’z’.

Your job is to write a program that converts the given messages to upper-case.

#### 입력

- A single line containing a string of length n (100 ≤ n ≤ 106), consisting of lower-case alphabetic characters.

#### 출력

- A single line containing the input string where all letters are converted to upper-case letters.



#### 예제 입력 1 

```
alert
```

#### 예제 출력 1 

```
ALERT
```

#### 예제 입력 2 

```
earthisunderattack
```

#### 예제 출력 2 

```
EARTHISUNDERATTACK
```

#### 예제 입력 3 

```
canyoupickupsomegroceries
```

#### 예제 출력 3 

```
CANYOUPICKUPSOMEGROCERIES
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Europe ](https://www.acmicpc.net/category/10)> [Northwestern European Regional Contest ](https://www.acmicpc.net/category/15)> [Benelux Algorithm Programming Contest](https://www.acmicpc.net/category/89)> [BAPC 2017 Preliminaries](https://www.acmicpc.net/category/detail/1782) X번



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>

int main() {
	char c;

	while ((c = getchar()) != EOF) {
		if ('a' <= c && c <= 'z')
			printf("%c", c - 32);
	}
}
```



## 3. 개선점

if 문으로 제약을 안 걸어주면 \n 문자까지 변형시켜버린다ㅠㅠ