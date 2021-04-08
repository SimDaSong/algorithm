# [BOJ] 2941번 크로아티아 알파벳 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2941

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 18633 | 8618 | 7613      | 47.703%   |

#### 문제

예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

| 크로아티아 알파벳 | 변경 |
| :---------------- | :--- |
| č                 | c=   |
| ć                 | c-   |
| dž                | dz=  |
| đ                 | d-   |
| lj                | lj   |
| nj                | nj   |
| š                 | s=   |
| ž                 | z=   |

예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.

#### 입력

첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

#### 출력

입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.



#### 예제 입력 1

```
ljes=njak
```

#### 예제 출력 1

```
6
```

#### 예제 입력 2

```
ddz=z=
```

#### 예제 출력 2

```
3
```

#### 예제 입력 3

```
nljj
```

#### 예제 출력 3

```
3
```

#### 예제 입력 4

```
c=c=
```

#### 예제 출력 4

```
2
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2008/2009 ](https://www.acmicpc.net/category/22)> [Contest #5](https://www.acmicpc.net/category/detail/96) 1번



## 2. 내 소스 코드

```C++
/*
	더 최적화 할 순 없을까ㅠㅠ
	
	lj/e/s=/
*/

#include <iostream>

int main() {
	char word[101];
	int count = 0;

	scanf("%s", word);

	for (int i = 0; word[i]; i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '-') i++;
			else if (word[i + 1] == '=')i++;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') i += 2;
			else if (word[i + 1] == '-') i++;
		}
		else if ((word[i] == 'l' && word[i + 1] == 'j') || 
			(word[i] == 'n'&& word[i + 1] == 'j') ||
			(word[i] == 's' && word[i + 1] == '=') ||
			(word[i] == 'z'&& word[i + 1] == '=')) i++;
		count++;
	}

	printf("%d", count);
}
```



## 3. 개선점

