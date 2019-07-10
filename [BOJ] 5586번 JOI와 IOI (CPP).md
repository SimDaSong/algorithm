# [BOJ] 5586번 JOI와 IOI (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5586

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2166 | 1632 | 1482      | 77.228%   |

#### 문제

입력으로 주어지는 문자열에서 연속으로 3개의 문자가 JOI 또는 IOI인 곳이 각각 몇 개 있는지 구하는 프로그램을 작성하시오. 문자열을 알파벳 대문자로만 이루어져 있다. 예를 들어, 아래와 같이 "JOIOIOI"에는 JOI가 1개, IOI가 2개 있다.

![img](https://www.acmicpc.net/upload/images/joioioi.png)

#### 입력

첫째 줄에 알파벳 10000자 이내의 문자열이 주어진다. 

#### 출력

첫째 줄에 문자열에 포함되어 있는 JOI의 개수, 둘째 줄에 IOI의 개수를 출력한다.



#### 예제 입력 1

```
JOIOIOIOI
```

#### 예제 출력 1

```
1
3
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [일본정보올림피아드 ](https://www.acmicpc.net/category/100)> [일본정보올림피아드 예선 ](https://www.acmicpc.net/category/101)> [JOI 2008 예선](https://www.acmicpc.net/category/detail/553) 2번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char word[10001];
	int ioi = 0, joi = 0;
	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		if (word[i + 1] == 'O' && word[i + 2] == 'I') {
			if (word[i] == 'I') ioi++;
			else if (word[i] == 'J') joi++;
			else i++;
		}
	}

	printf("%d\n%d", joi, ioi);
}
```



## 3. 개선점

