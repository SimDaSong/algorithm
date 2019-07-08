# [BOJ] 2998번 8진수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2998

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1804 | 1036 | 961       | 59.913%   |

#### 문제

창영이는 여러 가지 진법을 공부하고 있다. 창영이는 어제 2진법을 배웠고, 오늘은 8진법을 배웠다. 이제, 2진법 수를 8진법 수로 변환하려고 한다.

창영이가 사용한 방법은 다음과 같다.

1. 2진수의 길이가 3으로 나누어 떨어질 때 까지 수의 앞에 0을 붙인다.
2. 그 다음, 3자리씩 그룹을 나눈다.
3. 아래의 표를 참고해 8진수로 바꾼다.

2진수가 주어졌을 때, 창영이가 사용한 방법을 이용해 8진수로 바꾸는 프로그램을 작성하시오.

| 000  | 0    |
| ---- | ---- |
| 001  | 1    |
| 010  | 2    |
| 011  | 3    |
| 100  | 4    |
| 101  | 5    |
| 110  | 6    |
| 111  | 7    |

#### 입력

첫째 줄에 2진수가 주어진다. 이 수는 100자리 이내이고, 첫 번째 자리는 1이다.

#### 출력

첫째 줄에 8진수를 출력한다.



#### 예제 입력 1

```
1010
```

#### 예제 출력 1

```
12
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2007/2008 ](https://www.acmicpc.net/category/23)> [Contest #3](https://www.acmicpc.net/category/detail/102) 2번



## 2. 내 소스 코드

```C++
/*
	더 좋은 방법은 없을지 

	strlen이나 strcat은 cstring!!!!!!!!1
*/

#include <iostream>
#include <cstring> // <string>이 아니라 <cstring>이나 <string.h>

int main() {
	char bin[103], new_bin[103];

	scanf("%s", bin);
	new_bin[0] = NULL;
	
	if (strlen(bin) % 3 == 1) {
		new_bin[0] = new_bin[1] = '0'; new_bin[2] = NULL;
	}
	else if (strlen(bin) % 3 == 2) {
		new_bin[0] = '0'; new_bin[1] = NULL;
	}
	strcat(new_bin, bin);

	for (int i = 0; new_bin[i]; i+=3) {
		printf("%d", (new_bin[i] - '0') * 4 + (new_bin[i + 1] - '0') * 2 + (new_bin[i + 2] - '0'));
	}
}
```



## 3. 개선점

