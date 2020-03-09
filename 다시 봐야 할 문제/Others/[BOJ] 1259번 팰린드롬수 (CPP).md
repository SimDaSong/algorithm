# [BOJ] 1259번 팰린드롬수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1259

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1556 | 967  | 895       | 66.891%   |

#### 문제

어떤 단어를 뒤에서부터 읽어도 똑같다면 그 단어를 팰린드롬이라고 한다. 'radar', 'sees'는 팰린드롬이다.

수도 팰린드롬으로 취급할 수 있다. 수의 숫자들을 뒤에서부터 읽어도 같다면 그 수는 팰린드롬수다. 121, 12421 등은 팰린드롬수다. 123, 1231은 뒤에서부터 읽으면 다르므로 팰린드롬수가 아니다. 또한 10도 팰린드롬수가 아닌데, 앞에 무의미한 0이 올 수 있다면 010이 되어 팰린드롬수로 취급할 수도 있지만, 특별히 이번 문제에서는 무의미한 0이 앞에 올 수 없다고 하자.

#### 입력

입력은 여러 개의 테스트 케이스로 이루어져 있으며, 각 줄마다 1 이상 99999 이하의 정수가 주어진다. 입력의 마지막 줄에는 0이 주어지며, 이 줄은 문제에 포함되지 않는다.

#### 출력

각 줄마다 주어진 수가 팰린드롬수면 'yes', 아니면 'no'를 출력한다.



#### 예제 입력 1 

```
121
1231
12421
0
```

#### 예제 출력 1 

```
yes
no
yes
```



#### 출처

[ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [South Pacific ](https://www.acmicpc.net/category/92)> [South Pacific Region ](https://www.acmicpc.net/category/104)> [New Zealand Programming Contest ](https://www.acmicpc.net/category/93)> [NZPC 2006](https://www.acmicpc.net/category/detail/1142) B번

- 문제를 번역한 사람: [kks227](https://www.acmicpc.net/user/kks227)



## 2. 내 소스 코드

```c++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

bool isPalindrome(char* input) {
	int length;

	length = strlen(input);

	for (int i = 0; i < length / 2 ; i++) {
		if (input[i] != input[length - i - 1])
			return false;
	}
	return true;
}

int main() {
	char input[6];

	while (true) {
		scanf("%s", input);

		if (!strcmp(input, "0")) {
			break;
		}

		// 팰린드롬수인지 검사
		if (isPalindrome(input))
			printf("yes\n");
		else
			printf("no\n");
		
	}
	
}
```



## 3. 개선점

- 팰린드롬 수인지 검사하는 부분 코드를 이렇게도 짤 수 있구나

  ```C++
  bool check(string str) {
  	int left = 0, right = str.size() - 1;
  	while (left < right) {
  		if (str[left] != str[right]) return false;
  		left++;
  		right--;
  	}
  	return true;
  }
  ```

  출처: https://www.acmicpc.net/source/18116849
