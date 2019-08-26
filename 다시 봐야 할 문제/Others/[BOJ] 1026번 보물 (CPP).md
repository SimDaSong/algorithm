# [BOJ] 1026번  보물 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1026

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 15880 | 9103 | 7844      | 61.411%   |

#### 문제

옛날 옛적에 수학이 항상 큰 골칫거리였던 나라가 있었다. 이 나라의 국왕 김지민은 다음과 같은 문제를 내고 큰 상금을 걸었다.

길이가 N인 정수 배열 A와 B가 있다. 다음과 같이 함수 S를 정의하자.

S = A[0]*B[0] + ... + A[N-1]*B[N-1]

S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자. 단, B에 있는 수는 재배열하면 안 된다.

S의 최솟값을 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 N이 주어진다. 둘째 줄에는 A에 있는 N개의 수가 순서대로 주어지고, 셋째 줄에는 B에 있는 수가 순서대로 주어진다. N은 50보다 작거나 같은 자연수이고, A와 B의 각 원소는 100보다 작거나 같은 음이 아닌 정수이다.

#### 출력

첫째 줄에 S의 최솟값을 출력한다.



#### 예제 입력 1

```
5
1 1 1 6 0
2 7 8 3 1
```

#### 예제 출력 1

```
18
```

#### 힌트

A를 {1, 1, 0, 1, 6}과 같이 재배열하면 된다.



## 2. 내 소스 코드

```C++
#include <iostream>

int main() {
	// 변수 선언
    int  n, *a, *b;

    // 값 입력 받아 동적 할당
	scanf("%d", &n);
	a = new int[n];
	b = new int[n];

    // 배열 A, B 값 입력 받기
	for (int i = 0; i < n; i++) scanf("%d", &a[i]); // & 써주자
	for (int i = 0; i < n; i++) scanf("%d", &b[i]);

	int val;
	// a를 삽입 정렬
	for (int i = 1, j; i < n; i++) {
		val = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > val) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = val;
	}

	// b를 삽입 정렬		
	for (int i = 1, j; i < n; i++) {
		val = b[i];
		j = i - 1;
		while (j >= 0 && b[j] > val) {
			b[j + 1] = b[j];
			j--;
		}
		b[j + 1] = val;
	}

    // 
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (a[i] * b[n - i -1]); // b[n-i]가 아님
	}

	printf("%d", sum);
    
    delete[]a;
    delete[]b;
}
```



## 3. 개선점

1. N의 범위가 50까지로 정해져 있기 때문에 동적할당을 하지 않고 일반 배열을 선언해도 될 것이다.
   * 메모리 절약 vs 빠른 속도 https://algospot.com/forum/read/3833/
     결론은 둘 다 상관 없다! new int를 쓰기 보다는 STL vector 등을 써봐야겠다.
2. a는 오름차순 정렬, b는 내림차순 정렬을 해서 단순히 a[i]와 b[i]를 곱해도 된다.
3. 정렬을 위한 함수는 **sort()** 함수
   참고 : https://blockdmask.tistory.com/178



서칭하다가 찾은 좋은 코드!!

```c
#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	vector<int> a(n), b(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] * b[i];
	printf("%d\n", sum);
	return 0;
}
```

출처: https://washiofsunpark.tistory.com/12 [NaiveLight의 필기 노트]



하지만 이 코드에서 **#include \<cstdio>**가 어떤 헤더인지 몰라서 서칭을 해봤다 ㅠㅠ

* [C++] \<cstdio>, \<iostream>, <stdio.h>에 대해서 https://su-m.tistory.com/4

결론! 나는 아직 초보니까 \<cstdio>대신 \<iostream>을 써야겠다,,