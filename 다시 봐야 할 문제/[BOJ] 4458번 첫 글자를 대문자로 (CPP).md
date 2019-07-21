# [BOJ] 4458번 첫 글자를 대문자로 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/4458

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3374 | 1489 | 1325      | 46.426%   |

#### 문제

문장을 읽은 뒤, 줄의 첫 글자를 대문자로 바꾸는 프로그램을 작성하시오.

#### 입력

첫째 줄에 줄의 수 N이 주어진다. 다음 N개의 줄에는 문장이 주어진다. 각 문장에 들어있는 글자의 수는 30을 넘지 않는다. 모든 줄의 첫 번째 글자는 알파벳이다.

#### 출력

각 줄의 첫글자를 대문자로 바꾼뒤 출력한다.



#### 예제 입력 1

```
5
powdered Toast Man
skeletor
Electra Woman and Dyna Girl
she-Ra Princess of Power
darth Vader
```

#### 예제 출력 1

```
Powdered Toast Man
Skeletor
Electra Woman and Dyna Girl
She-Ra Princess of Power
Darth Vader
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [North America ](https://www.acmicpc.net/category/8)> [Pacific Northwest Regional ](https://www.acmicpc.net/category/33)> [2011 Pacific Northwest Region Programming Contest](https://www.acmicpc.net/category/detail/126) P번



## 2. 내 소스 코드

```C++
#include <iostream>
#include <string>

int main() {
	std::string str;
	int n;

	scanf("%d", &n);
	getchar(); // 버퍼는 여기서만 비워주면 됨!

	for (int i = 0; i < n; i++) {
		std::getline(std::cin, str);

		// 문장의 첫 글자
		if ('a' <= str[0] && str[0] <= 'z') printf("%c", str[0] - 32);
		else printf("%c", str[0]);

		// 나머지 글자
		for (int j = 1; str[j]; j++)
			printf("%c", str[j]);

		printf("\n");
	}
}
```



## 3. 개선점

1. 문제 잘 읽자 ㅠㅠ 문장의 모든 '단어'의 첫 글자를 대문자로 바꿔야 하는 줄 알았다..
2. 나머지 글자는 %s로 출력하면 될걸 왜 하나하나 출력한걸까....