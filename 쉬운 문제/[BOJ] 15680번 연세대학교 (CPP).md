# [BOJ] 15680번 연세대학교 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/15680

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 1742 | 1322 | 1226      | 78.893%   |

#### 문제

![img](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/15680/1.png)

연세대학교의 영문명은 YONSEI, 슬로건은 Leading the Way to the Future이다.

이를 출력하는 프로그램을 작성해보도록 하자.

#### 입력

첫째 줄에 N이 주어진다. (N = 0 또는 1)

#### 출력

- N = 0일 경우: 연세대학교의 영문명을 출력한다.
- N = 1일 경우: 연세대학교의 슬로건을 출력한다.

대소문자 구별에 주의하도록 하자.



#### 예제 입력 1

```
0
```

#### 예제 출력 1

```
YONSEI
```



#### 출처

[University ](https://www.acmicpc.net/category/5)> [연세대학교 ](https://www.acmicpc.net/category/334)> [2018 연세대학교 컴퓨터과학과 프로그래밍 경진대회](https://www.acmicpc.net/category/detail/1860) PA번



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int n;
	scanf("%d", &n);
	if (n) printf("Leading the Way to the Future");
	else printf("YONSEI");
}
```



## 3. 개선점

