# [BOJ] 10886번 0=not cute / 1=cute (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10886

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 2 MB        | 6113 | 4004 | 3722      | 66.798%   |

#### 문제

준희는 자기가 팀에서 귀여움을 담당하고 있다고 생각한다. 하지만 연수가 볼 때 그 의견은 뭔가 좀 잘못된 것 같았다. 그렇기에 설문조사를 하여 준희가 귀여운지 아닌지 알아보기로 했다.

#### 입력

첫 번째 줄에 설문조사를 한 사람의 수 N (1 ≤ N ≤ 101, N은 홀수)가 주어진다.

다음 N개의 줄에는 각 줄마다 각 사람이 설문 조사에 어떤 의견을 표명했는지를 나타내는 정수가 주어진다. 0은 준희가 귀엽지 않다고 했다는 뜻이고, 1은 준희가 귀엽다고 했다는 뜻이다.

#### 출력

준희가 귀엽지 않다는 의견이 더 많을 경우 "Junhee is not cute!"를 출력하고 귀엽다는 의견이 많을 경우 "Junhee is cute!"를 출력하라.



#### 예제 입력 1

```
3
1
0
0
```

#### 예제 출력 1

```
Junhee is not cute!
```

#### 힌트

팀 내에서 설문조사를 진행하면 아마 위와 같은 결과를 얻게 될 것이다.

#### 출처

[Contest ](https://www.acmicpc.net/category/45)> [kriiicon ](https://www.acmicpc.net/category/319)> [제1회 kriiICPC](https://www.acmicpc.net/category/detail/1359) 0번

- 문제를 만든 사람: [august14](https://www.acmicpc.net/user/august14)

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n, ans, cute = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ans);
		if (ans) cute++;
	}

	if (n / 2 < cute) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}
```



## 3. 개선점

