# [BOJ] 2857번 FBI (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2857

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3179 | 1449 | 1284      | 48.325%   |

#### 문제

5명의 요원 중 FBI 요원을 찾는 프로그램을 작성하시오.

FBI요원은 요원의 첩보원명에 FBI가 들어있다. 

#### 입력

5개 줄에 요원의 첩보원명이 주어진다. 첩보원명은 알파벳 대문자, 숫자 0~9, 대시 (-)로만 이루어져 있으며, 최대 10글자이다.

#### 출력

첫째 줄에 FBI 요원을 출력한다. 이때, 해당하는 요원이 몇 번째 입력인지를 공백으로 구분하여 출력해야 하며, 오름차순으로 출력해야 한다. 만약 FBI 요원이 없다면 "HE GOT AWAY!"를 출력한다.



#### 예제 입력 1

```
47-FBI
BOND-007
RF-FBI18
MARICA-13
13A-FBILL
```

#### 예제 출력 1

```
1 3 5
```



#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [Croatian Open Competition in Informatics ](https://www.acmicpc.net/category/17)> [COCI 2010/2011 ](https://www.acmicpc.net/category/20)> [Contest #4](https://www.acmicpc.net/category/detail/78) 1번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	char agent[5][11];
	bool fbi[5] = { 0 };
	int count = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%s", agent[i]);
		for (int j = 0; agent[i][j]; j++) {
			if (agent[i][j] == 'F' && agent[i][j + 1] == 'B' && agent[i][j + 2] == 'I') {
				fbi[i] = true; count++; break;
			}
		}
	}
	if (!count) printf("HE GOT AWAY!");
	else {
		for (int i = 0; i < 5; i++) {
			if (fbi[i]) printf("%d ", i + 1);
		}
	}
}
```



## 3. 개선점

