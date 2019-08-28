# [BOJ] 1316번  그룹 단어 체커 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1316

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 18777 | 9436 | 8292      | 51.709%   |

#### 문제

그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

#### 출력

첫째 줄에 그룹 단어의 개수를 출력한다.



#### 예제 입력 1

```
3
happy
new
year
```

#### 예제 출력 1

```
3
```

#### 예제 입력 2

```
4
aba
abab
abcabc
a
```

#### 예제 출력 2

```
1
```



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n, count = 0;
	char word[101], alphabet[100][26] = { 0 };
	char continuity;

	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		// 입력 받아 바로 검사
		scanf("%s", word);
		continuity = word[0];
		for (j = 0; word[j]; j++) { // j를 0부터 시작하지 않으면 aba 같은 경우에 검사 못함
			if (word[j] != continuity) {
				alphabet[i][continuity - 'a']++;
				if (alphabet[i][word[j] - 'a'] == 1) break; // 하나의 alphabet 배열을 다들 공유하면 문제 생김
				continuity = word[j];
			}
		}
		if (word[j] == NULL) count++;
		std::cin.ignore();
	}

	printf("%d", count);
}
```

<img src="/images/1316번.png" width="100%" height="100%">



## 3. 개선점

