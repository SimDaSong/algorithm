# [BOJ] 5596번 시험 점수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/5596

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 2185 | 1757 | 1638      | 82.270%   |

#### 문제

대한고등학교에 재학 중인 민국이와 만세는 4과목(정보, 수학, 과학, 영어)에 대한 시험을 봤습니다. 민국이와 만세가 본 4과목의 점수를 입력하면, 민국이의 총점 S와 만세의 총점 T 중에서 큰 점수를 출력하는 프로그램을 작성하세요. 다만, 서로 동점일 때는 민국이의 총점 S를 출력하세요.

#### 입력

입력은 2줄로 이루어져 있습니다.

1번째 줄에는 순서대로 민국이의 정보, 수학, 과학, 영어 점수(정수형)를 입력하는데, 이때 공백을 끊어서 구분합니다.

2번째 줄에는 마찬가지로 순서대로 만세의 정보, 수학, 과학, 영어 점수(정수형)를 입력하고 위와 같이 공백을 끊어서 구분합니다.

#### 출력

출력은 문제에서 제시했던 방법대로 구하면 됩니다.



#### 예제 입력 1

```
100 80 70 60
80 70 80 90
```

#### 예제 출력 1

```
320
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [일본정보올림피아드 ](https://www.acmicpc.net/category/100)> [일본정보올림피아드 예선 ](https://www.acmicpc.net/category/101)> [JOI 2007 예선](https://www.acmicpc.net/category/detail/555) 1번

- 문제를 번역한 사람: [egpaltair](https://www.acmicpc.net/user/egpaltair)
- 문제의 오타를 찾은 사람: [starjrm00](https://www.acmicpc.net/user/starjrm00)

#### 알고리즘 분류

- [구현](https://www.acmicpc.net/problem/tag/구현)



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	int min[4], man[4], minSum = 0, manSum = 0;
	
	for (int i = 0; i < 4; i++) {
		scanf("%d", &min[i]);
		minSum += min[i];
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &man[i]);
		manSum += man[i];
	}

	if (manSum >= minSum) printf("%d", manSum);
	else printf("%d", minSum);
}
```



## 3. 개선점

