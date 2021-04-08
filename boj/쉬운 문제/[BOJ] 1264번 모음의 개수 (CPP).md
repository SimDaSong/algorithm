# [BOJ] 1264번 모음의 개수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1264

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1239 | 762  | 693       | 64.766%   |

#### 문제

영문 문장을 입력받아 모음의 개수를 세는 프로그램을 작성하시오. 모음은 'a', 'e', 'i', 'o', 'u'이며 대문자 또는 소문자이다.

#### 입력

입력은 여러 개의 테스트 케이스로 이루어져 있으며, 각 줄마다 영어 대소문자, ',', '.', '!', '?', 공백으로 이루어진 문장이 주어진다. 각 줄은 최대 255글자로 이루어져 있다.

입력의 끝에는 한 줄에 '#' 한 글자만이 주어진다.

#### 출력

각 줄마다 모음의 개수를 세서 출력한다.



#### 예제 입력 1

```
How are you today?
Quite well, thank you, how about yourself?
I live at number twenty four.
#
```

#### 예제 출력 1

```
7
14
9
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [South Pacific ](https://www.acmicpc.net/category/92)> [South Pacific Region ](https://www.acmicpc.net/category/104)> [New Zealand Programming Contest ](https://www.acmicpc.net/category/93)> [NZPC 2006](https://www.acmicpc.net/category/detail/1142) A번

- 문제를 번역한 사람: [kks227](https://www.acmicpc.net/user/kks227)



## 2. 내 소스 코드

```c++
#include <iostream>
#include <string>

int main() {
	std::string str;
	int count;

	while (true) {
		std::getline(std::cin, str);
		
		if (str == "#") return 0;

		count = 0;
		for (int i = 0; str[i]; i++) {
			str[i] = tolower(str[i]);

			switch (str[i]) {
			case 'a': case 'e':case 'i':case 'o': case 'u':
				count++;
			}
		}
		printf("%d\n", count);
	}
}
```



## 3. 개선점

