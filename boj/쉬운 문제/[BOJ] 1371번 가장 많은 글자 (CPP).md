# [BOJ] 1371번  가장 많은 글자 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1371

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 3692 | 1314 | 1107      | 36.426%   |

#### 문제

영어에서는 어떤 글자가 다른 글자보다 많이 쓰인다. 에를 들어, 긴 글에서 약 12.31% 글자는 e이다.

어떤 글이 주어졌을 때, 가장 많이 나온 글자를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄부터 글의 문장이 주어진다. 글은 최대 5000글자로 구성되어 있고, 공백, 알파벳 소문자, 엔터로만 이루어져 있다. 그리고 적어도 하나의 알파벳이 있다.

#### 출력

첫째 줄에 가장 많이 나온 문자를 출력한다. 여러 개일 경우에는 알파벳 순으로 앞서는 것부터 모두 공백없이 출력한다.



#### 예제 입력 1

```
english is a west germanic
language originating in england
and is the first language for
most people in the united
kingdom the united states
canada australia new zealand
ireland and the anglophone
caribbean it is used
extensively as a second
language and as an official
language throughout the world
especially in common wealth
countries and in many
international organizations
```

#### 예제 출력 1

```
a
```

#### 예제 입력 2

```
baekjoon online judge
```

#### 예제 출력 2

```
eno
```



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char ch = 0;
	int alphabet[26] = { 0 };
	int max;

	while (ch != EOF) {
		ch = getchar();
		if ('a' <= ch && ch <= 'z') alphabet[ch - 'a']++;
	}

	max = alphabet[0];
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) max = alphabet[i];
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphabet[i]) {
			printf("%c", i + 'a'); // alphabet[i]가 아니라 i
		}
	}
}
```



## 3. 개선점

