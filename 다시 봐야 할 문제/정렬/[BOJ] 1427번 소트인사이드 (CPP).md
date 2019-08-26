# [BOJ] 1427번 소트인사이드 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1427

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 15863 | 9329 | 8167      | 60.171%   |

#### 문제

배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

#### 입력

첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

#### 출력

첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.



## 예제 입력 1 

```
2143
```

#### 예제 출력 1 

```
4321
```



#### 출처

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 빠진 조건을 찾은 사람: [bvba](https://www.acmicpc.net/user/bvba) [djm03178](https://www.acmicpc.net/user/djm03178)

#### 알고리즘 분류

- [정렬](https://www.acmicpc.net/problem/tag/정렬)



## 2. 내 소스 코드

```C++
// https://github.com/SimDaSong/BOJ
#include <iostream>
#include <cstring> // string이 아니라
#include <algorithm>
#include <functional>

int main() {
	char n[12];
	
	std::cin >> n;
	
	std::sort(n, n + strlen(n), std::greater<char>());

	std::cout << n;
}
```



## 3. 개선점

stl 사용법을 익히자