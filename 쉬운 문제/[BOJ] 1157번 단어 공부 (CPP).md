# [BOJ] 1157번 단어 공부 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1157

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 128 MB      | 38927 | 14431 | 11593     | 37.729%   |

#### 문제

알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

#### 입력

첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

#### 출력

첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.



#### 예제 입력 1 

```
Mississipi
```

#### 예제 출력 1 

```
?
```

#### 예제 입력 2 

```
zZa
```

#### 예제 출력 2 

```
Z
```

#### 예제 입력 3 

```
z
```

#### 예제 출력 3

```
Z
```

#### 예제 입력 4

```
baaa
```

#### 예제 출력 4

```
A
```



#### 출처

- 문제를 만든 사람: [author5](https://www.acmicpc.net/user/author5)
- 데이터를 추가한 사람: [jh05013](https://www.acmicpc.net/user/jh05013)

#### 알고리즘 분류

- [문자열 처리](https://www.acmicpc.net/problem/tag/문자열 처리)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <string>
#include <ctype.h>

int main() {
	std::string word;
	int alph[26] = { 0 }, max = 0;
	char maxAlph = 'A';

	std::cin >> word;
	
	// 알파벳 개수 세기
	for (int i = 0; word[i]; i++) {
		if ('a' <= word[i] && word[i] <= 'z')
			word[i] -= 32;

		alph[word[i] - 'A']++;
	}

	// 가장 많이 사용된 알파벳 찾기
	for (int i = 0; i < 26; i++) {
		if (max < alph[i]) {
			max = alph[i];
			maxAlph = i + 'A';
		}
	}

	// 가장 많이 사용된 알파벳이 여러 개인 경우 검출
	for (int i = 0; i < 26; i++) {
		if (max == alph[i] && maxAlph != i+'A') {
			printf("?");
			return 0;
		}
	}

	printf("%c", maxAlph);
}
```



## 3. 개선점

