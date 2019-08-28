# [BOJ] 11557번 Yangjojang of The Year (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/11557

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 1940 | 1403 | 1264      | 75.779%   |

#### 문제

입학 OT때 누구보다도 남다르게 놀았던 당신은 자연스럽게 1학년 과대를 역임하게 되었다.

타교와의 조인트 엠티를 기획하려는 당신은 근처에 있는 학교 중 어느 학교가 술을 가장 많이 먹는지 궁금해졌다.

학교별로 한 해동안 술 소비량이 주어질 때, 가장 술 소비가 많은 학교 이름을 출력하여라.

#### 입력

입력의 첫 줄에는 테스트 케이스의 숫자 T가 주어진다.

매 입력의 첫 줄에는 학교의 숫자 정수 N(1 ≤ N ≤ 100)이 주어진다.

이어서 N줄에 걸쳐 학교 이름 S(1 ≤ |S| ≤ 20, S는 공백없는 대소문자 알파벳 문자열)와 해당 학교가 지난 한 해동안 소비한 술의 양 L(0 <= L <= 10,000,000)이 공백으로 구분되어 정수로 주어진다.

같은 테스트 케이스 안에서 소비한 술의 양이 같은 학교는 없다고 가정한다.

#### 출력

각 테스트 케이스마다 한 줄에 걸쳐 술 소비가 가장 많은 학교의 이름을 출력한다.



#### 예제 입력 1

```
2
3
Yonsei 10
Korea 10000000
Ewha 20
2
Yonsei 1
Korea 10000000
```

#### 예제 출력 1 

```
Korea
Korea
```



#### 출처

[University ](https://www.acmicpc.net/category/5)> [연세대학교 ](https://www.acmicpc.net/category/334)> [2015 연세대학교 프로그래밍 경시대회](https://www.acmicpc.net/category/detail/1419) A번

- 문제의 오타를 찾은 사람: [chan4928](https://www.acmicpc.net/user/chan4928)
- 문제를 만든 사람: [tae](https://www.acmicpc.net/user/tae)

#### 채점

- 재채점을 하지 않는다.



## 2. 내 소스 코드

```c++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <string>

int main() {
	int t, n, soju, maxSoju;
	std::string name, maxName;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		
		maxSoju = 0;

		while (n--) {
			std::cin >> name >> soju;

			if (maxSoju < soju) {
				maxSoju = soju;
				maxName = name;
			}
		}

		std::cout << maxName << std::endl;
	}
}
```



## 3. 개선점

1. 우선순위 큐를 사용하신 분이 계셨다!

```c++
#include <bits/stdc++.h>

using namespace std;
int T, N;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> T;
	while(T--){
		priority_queue <pair<int, string> > ranking;
		int alcho;
		string uni;
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> uni >> alcho;
			ranking.push(make_pair(alcho, uni));
		}
		cout << ranking.top().second << '\n';
	}
}
```

https://www.acmicpc.net/source/14794713

우선순위 큐는 생각도 못했다ㅠ

