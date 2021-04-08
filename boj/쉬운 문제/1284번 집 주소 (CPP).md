# [BOJ] 1284번 집 주소 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1284

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 299  | 243  | 232       | 82.562%   |

#### 문제

재석이는 대문에 붙이는 (주소를 나타내는) 호수판 제작업체의 직원이다. 고객에게 전달할 호수판은 숫자와 숫자 사이 그리고 왼쪽 오른쪽으로 적당히 여백이 들어가 줘야하고 숫자마다 차지하는 간격이 조금씩 상이하다. 다행이도 규칙은 매우 간단하다. 

1. 각 숫자 사이에는 1cm의 여백이 들어가야한다.
2. 1은 2cm의 너비를 차지해야한다. 0은 4cm의 너비를 차지해야한다. 나머지 숫자는 모두 3cm의 너비를 차지한다.
3. 호수판의 경계와 숫자 사이에는 1cm의 여백이 들어가야한다.

![120.png](https://upload.acmicpc.net/f203f2d5-ff6a-4afb-9cfe-226612dd4095/-/preview/)

예를 들어 위의 120 같은 경우,  각 숫자 사이에 여백이 1cm 씩 2개 들어간다. 1은 2cm, 2는 3cm, 0은 4cm를 차지한다. 오른쪽, 왼쪽 경계에서 각각 여백이 1cm씩 차지한다. 따라서 총 2 + 2 + 3 + 4 + 1 + 1 = 13(cm) 가 된다.

재석이는 고객에게 전달해야할 호수판의 너비가 얼마나 되는지 궁금해졌다. 재석이를 도와주자!

#### 입력

호수판에 들어갈 숫자 N의 범위는 1 <= N <= 9999 이다.

입력은 마지막에 0이 들어오기 전까지 계속해서 줄 단위로 주어진다.

또한, 마지막의 0은 처리하지 않는다.

#### 출력

각 입력마다 얼마만큼 너비를 차지하는지 정수로 출력하면 된다.

각 출력은 줄바꿈으로 구분되어야한다.



#### 예제 입력 1

```
120
5611
100
0
```

#### 예제 출력 1

```
13
15
14
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [South Pacific ](https://www.acmicpc.net/category/92)> [South Pacific Region ](https://www.acmicpc.net/category/104)> [New Zealand Programming Contest ](https://www.acmicpc.net/category/93)> [NZPC 2006](https://www.acmicpc.net/category/detail/1142) C번

- 문제를 번역한 사람: [wooljs](https://www.acmicpc.net/user/wooljs)



## 2. 내 소스 코드

```C++
#include <iostream>
#include <string>

int main() {
	std::string input;
	int width = 1;

	while (true) {
		std::getline(std::cin, input);
		
		if (input == "0") return 0;

		width = 1;
		for (int i = 0; input[i]; i++) {
			switch (input[i]) {
			case '1':
				width += 3;
				break;
			case '0':
				width += 5;
				break;
			default:
				width += 4;
			}
		}
		printf("%d\n", width);
	}
}
```



## 3. 개선점

