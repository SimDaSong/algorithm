# [BOJ] 1002번 터렛 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1002

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 128 MB      | 61115 | 10474 | 8001      | 18.797%   |

#### 문제

조규현과 백승환은 터렛에 근무하는 직원이다. 하지만 워낙 존재감이 없어서 인구수는 차지하지 않는다. 다음은 조규현과 백승환의 사진이다.

![img](https://www.acmicpc.net/upload/201003/dfcmhrjj_142c3w76qg8_b.jpg)

이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다. 조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고, 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 이루어져 있다.

한 줄에 x1, y1, r1, x2, y2, r2가 주어진다. x1, y1, x2, y2는 -10,000보다 크거나 같고, 10,000보다 작거나 같은 정수이고, r1, r2는 10,000보다 작거나 같은 자연수이다.

#### 출력

각 테스트 케이스마다 류재명이 있을 수 있는 위치의 수를 출력한다. 만약 류재명이 있을 수 있는 위치의 개수가 무한대일 경우에는 -1을 출력한다.



#### 예제 입력 1

```
3
0 0 13 40 0 37
0 0 3 0 7 4
1 1 1 1 1 5
```

#### 예제 출력 1

```
2
1
0
```



#### 출처

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [baemin0103](https://www.acmicpc.net/user/baemin0103) [koyh1200](https://www.acmicpc.net/user/koyh1200)

#### 알고리즘 분류

- [기하 알고리즘](https://www.acmicpc.net/problem/tag/기하 알고리즘)



## 2. 내 소스 코드

```C++
#include <iostream>
#include <cmath>

int main() {
	int t, x1, y1, r1, x2, y2, r2;
	long long result; // unsiged는 안됨 ㅠㅠ

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		if (x1 == x2 && y1 == y2 && r1 == r2) // 두 원이 같으면
			printf("-1\n");
		else { // 두 원이 같지 않으며
			result = (r1 + r2)*(r1 + r2) - (x1 - x2)*(x1 - x2) - (y1 - y2)*(y1 - y2);

			if (result < 0) // 두 원이 접하지 않으면(외접)
				printf("0\n");
			else if (result == 0) // 두 원이 접하면(외접)
				printf("1\n");
			else if (result > 0) {
				result -= 4 * r1 * r2;
				if (result == 0) // 두 원이 접하면(내접)
					printf("1\n");
				else if (result > 0) // 두 원이 접하지 않으면(내접)
					printf("0\n");
				else // 두 원이 겹치면
					printf("2\n");
			}
		}
	}
}
```

정답률이 너무 낮아서 정신 바짝 차리고 풀었다... 



<img src="../images/1002번.jpg">

외접이랑 내접의 경우로 나누어서 풀었는데, 처음에는 x3과 y3를 직접 구하려고 하다가, 문제의 의도를 파악한 후 방법을 바꿔서 풀었다.

x, y, r의 범위가 복병이었다. sqrtl 함수를 쓰려고 했는데 안돼서 그냥 result 변수를 long long형으로 바꿔서 풀었다.

여기서 또 무의식적으로 unsigned long long 형이라고 뒀다가 semantic error 때문에 longlong 형으로 바꿨다...

거의 하루종일 푼듯 ㅠㅠ



## 3. 개선점

다른 사람들이 푼 코드를 보니까 내가 너무 복잡하게 푼 것 같다는 생각을 했다ㅠㅠㅠ



```C++
#include <cstdio>

typedef long long ll;

int main(void) {
	int cs;
	scanf("%d", &cs);
	
	while(cs--) {
		ll x1, y1, x2, y2, r1, r2, d, t;
		scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);
		
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		ll add = r1 + r2, sub = r1 - r2;
		add = add * add;
		sub = sub * sub;
		
		if(d > sub && d < add) printf("2\n");
		else if((d != 0 && d == sub) || d == add) printf("1\n");
		else if(d < sub || d > add) printf("0\n");
		else if(d == 0) {
			if(r1 == r2) printf("-1\n");
			else printf("0\n");
		}
	}
	
	return 0;
}
```

https://www.acmicpc.net/source/14399151



```C++
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	int x1, y1, r1, x2, y2, r2;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int a = x2 - x1;
		int b = y2 - y1;
		int c = r2 - r1;
		int e = r1 + r2;
		int d = (a*a) + (b*b); //거리

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) cnt = -1;
			else cnt = 0;
		}
		else if (d > (c*c) && d < (e*e))
			cnt = 2;
		else if (d == (e*e) || d == (c*c))
			cnt = 1;
		else { cnt = 0; }
		cout << cnt << endl;
	}
}
```

https://www.acmicpc.net/source/14389830



이외에도 좋은 코드가 많지만 패스!