# [BOJ] 1283번 단축키 지정 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1283

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 244  | 79   | 65        | 39.634%   |

#### 문제

한글 프로그램의 메뉴에는 총 N개의 옵션이 있다. 각 옵션들은 한 개 또는 여러 개의 단어로 옵션의 기능을 설명하여 놓았다. 그리고 우리는 위에서부터 차례대로 각 옵션에 단축키를 의미하는 대표 알파벳을 지정하기로 하였다. 단축키를 지정하는 법은 아래의 순서를 따른다.

1. 먼저 하나의 옵션에 대해 왼쪽에서부터 오른쪽 순서로 단어의 첫 글자가 이미 단축키로 지정되었는지 살펴본다. 만약 단축키로 아직 지정이 안 되어있다면 그 알파벳을 단축키로 지정한다.
2. 만약 모든 단어의 첫 글자가 이미 지정이 되어있다면 왼쪽에서부터 차례대로 알파벳을 보면서 단축키로 지정 안 된 것이 있다면 단축키로 지정한다.
3. 어떠한 것도 단축키로 지정할 수 없다면 그냥 놔두며 대소문자를 구분치 않는다.
4. 위의 규칙을 첫 번째 옵션부터 N번째 옵션까지 차례대로 적용한다.

#### 입력

첫째 줄에 옵션의 개수 N(1≤N≤30)이 주어진다. 둘째 줄부터 N+1번째 줄까지 각 줄에 옵션을 나타내는 문자열이 입력되는데 하나의 옵션은 5개 이하의 단어로 표현되며 각 단어 역시 10개 이하의 알파벳으로 표현된다.

#### 출력

N개의 줄에 각 옵션을 출력하는데 단축키로 지정된 알파벳은 좌우에 [] 괄호를 씌워서 표현한다.



#### 예제 입력 1 

```
5
New
Open
Save
Save As
Save All
```

#### 예제 출력 1 

```
[N]ew
[O]pen
[S]ave
Save [A]s
Sa[v]e All
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [Croatian Highschool Competitions in Informatics ](https://www.acmicpc.net/category/25)> [2008 ](https://www.acmicpc.net/category/30)> [National Competition #1 - Juniors](https://www.acmicpc.net/category/detail/262) 1번

- 문제를 번역한 사람: [author6](https://www.acmicpc.net/user/author6)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring> // memset은 cstring

std::string option[30]; // 옵션
int length; // option 문자열의 길이
char shortcut[30]; // 단축키, 소문자로 저장
int iOfShortcut[30]; // 단축키의 인덱스
int n;
bool isExist; // 단축키가 존재하는지

bool isShortcutAlreadyExist(int i, int j) {
	for (int k = 0; k < i; k++) {
		if (tolower(option[i][j]) == shortcut[k]) {
			return true;
			break;
		}
	}
	return false;
}

int main() {
	// 입력 받기
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		std::getline(std::cin, option[i]);
	}

	// 단축키 지정

	memset(iOfShortcut, -1, sizeof(iOfShortcut));
	for (int i = 0; i < n; i++) {
		length = option[i].length();

		// 단어 위주로
		for (int j = 0; j < length; j++) {
			if (!isShortcutAlreadyExist(i, j)) {
				// 단축키로 설정
				shortcut[i] = tolower(option[i][j]);
				iOfShortcut[i] = j;
				break;
			}
			else {
				// 다음 단어
				while (option[i][++j] != ' ' && j < length);
			}
		}

		if (iOfShortcut[i] == -1) {
			// 아직 shortcut 지정이 안됐으면
			// 한 문자씩
			for (int j = 0; j < length; j++) {
				if (option[i][j] == ' ') // 예외처리 해주기!!!!
					continue;

				if (!isShortcutAlreadyExist(i, j)) {
					// 단축키로 설정
					shortcut[i] = tolower(option[i][j]);
					iOfShortcut[i] = j;
					break;
				}
			}
		}

	}

	// 출력
	for (int i = 0; i < n; i++) {
		if (iOfShortcut[i] == -1) {
			// 단축키 지정이 안되어 있으면 그냥 출력
			std::cout << option[i] << "\n"; // 뉴라인 붙여주기
		}
		else {
			// 단축키 지정이 되어 있으면
			int j;
			for (j = 0; j < iOfShortcut[i]; j++) {
				printf("%c", option[i][j]);
			}
			printf("[%c]", option[i][j]);
			printf("%s\n", &option[i][j + 1]);
		}

	}
}
```



## 3. 개선점

- memset 함수는 cstring 헤더 파일에 존재한다
- 예외 처리를 제대로 해주자
