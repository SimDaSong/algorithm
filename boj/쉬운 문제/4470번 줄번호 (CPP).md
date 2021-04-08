# [BOJ] 4470번 줄번호 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/4470

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1555 | 872  | 777       | 56.550%   |

#### 문제

텍스트에서 줄을 입력받은 뒤, 줄 번호를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 줄의 수 N이 주어진다. 둘째 줄부터 N개의 줄에 각 줄의 내용이 주어진다. 각 줄에 있는 글자의 개수는 50글자를 넘지 않는다.

#### 출력

각 문장의 앞에 줄 번호를 추가한 뒤 출력한다. 줄 번호는 1번부터 시작한다. 줄번호를 추가하는 형식은 출력 예제를 참고하면 된다.



#### 예제 입력 1

```
5
Lionel Cosgrove
Alice
Columbus and Tallahassee
Shaun and Ed
Fido
```

#### 예제 출력 1

```
1. Lionel Cosgrove
2. Alice
3. Columbus and Tallahassee
4. Shaun and Ed
5. Fido
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [North America ](https://www.acmicpc.net/category/8)> [Pacific Northwest Regional ](https://www.acmicpc.net/category/33)> [2010 Pacific Northwest Region Programming Contest](https://www.acmicpc.net/category/detail/127) P번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <string>

int main() {
	int n;
	std::string input;

	scanf("%d", &n);
	getchar();

	for (int i = 1; i <= n; i++) {
		std::getline(std::cin, input);
		std::cout << i << ". " << input << std::endl;
	}
}
```



## 3. 개선점

