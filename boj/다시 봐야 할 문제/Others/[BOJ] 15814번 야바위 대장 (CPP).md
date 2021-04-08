# [BOJ] 15814번 야바위 대장 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/15814

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 450  | 388  | 362       | 91.878%   |

#### 문제

10년 동안 도박판에서 야바위를 한 영훈은 이제 보지 않고도 구슬이 있는 컵을 맞추는 지경에 이르렀다.

이런 영훈을 골탕 먹이기 위해 문자열로 야바위를 하려고 한다.

T번 동안 문자열 S의 A번째 위치에 있는 문자와 B번째 위치에 있는 문자를 바꾼 결과를 출력하는 프로그램을 작성하시오.

#### 입력

첫 번째 줄에 문자열 S가 주어지고 두 번째 줄에 T가 주어진다. (문자열 S는 최대 100자를 넘지 않으며, 영어 대소문자와 하이픈(-)으로만 이루어져 있다)

그 다음 T번째 줄 동안 A와 B가 주어진다.

A와 B는 문자열의 길이보다 작은 양의 정수이며, 문자열의 가장 첫 번째 자리는 0번째이다.

#### 출력

바뀐 문자열의 결과를 출력한다.



#### 예제 입력 1 

```
Youngmaan-good
2
1 3
9 2
```

#### 예제 출력 1 

```
Yn-ogmaanugood
```



#### 출처

[University ](https://www.acmicpc.net/category/5)> [전북대학교 ](https://www.acmicpc.net/category/347)> [2018 전북대학교 프로그래밍 경진대회](https://www.acmicpc.net/category/detail/1878) F번

- 문제를 만든 사람: [940723](https://www.acmicpc.net/user/940723)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
// "문자열의 가장 첫 번째 자리는 0번째이다."

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false); // printf, scanf와 섞어 쓰면 안됨
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string str;
	char tmp;
	int t, start, end;

	std::cin >> str >> t;

	while (t--) {
		std::cin >> start >> end;

		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
	}

	std::cout << str;
}
```



## 3. 개선점

1. swap 함수가 따로 있었다..

   ```c++
   #include <bits/stdc++.h>
   using namespace std;
   
   int main() {
       string s;
       int t, a, b;
       cin >> s >> t;
       for(int i = 0; i < t; ++i) {
           cin >> a >> b;
           swap(s[a], s[b]);
       }
       cout << s;
   }
   ```

   