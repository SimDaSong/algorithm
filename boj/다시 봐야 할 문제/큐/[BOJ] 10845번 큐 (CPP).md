# [BOJ] 10845번 큐 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10845

아이디: song98987



## 1. 문제 설명

| 시간 제한                      | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :----------------------------- | :---------- | :---- | :---- | :-------- | :-------- |
| 0.5 초 (언어별 추가 시간 없음) | 256 MB      | 29010 | 13394 | 10578     | 49.932%   |

#### 문제

정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

- push X: 정수 X를 큐에 넣는 연산이다.
- pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
- size: 큐에 들어있는 정수의 개수를 출력한다.
- empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
- front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
- back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#### 입력

첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.

#### 출력

출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.



#### 예제 입력 1 

```
15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front
```

#### 예제 출력 1 

```
1
2
2
0
1
2
-1
0
1
-1
0
3
```



#### 출처

- 문제를 만든 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 문제의 오타를 찾은 사람: [compro0317](https://www.acmicpc.net/user/compro0317)

#### 알고리즘 분류

- [큐](https://www.acmicpc.net/problem/tag/큐)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ

// 일부러 stl 안씀

#include <iostream>
#include <cstring>
#define MAXSIZE 10000

class Queue {
public:
	int front, rear;
	int data[MAXSIZE];

	Queue() {
		front = rear = 0;
	}

	void push(int x) {
		data[rear++] = x;
	}
	void pop() {
		if (front<rear)
			printf("%d\n", data[front++]); // 주어진 시간이 적어서 바로 출력
		else printf("-1\n");
	}
	void size() {
		printf("%d\n", rear - front);
	}
	void empty() {
		if (rear == front)
			printf("1\n");
		else printf("0\n");
	}
	void fr() { // 함수명 != 변수명
		if (rear == front)
			printf("-1\n");
		else printf("%d\n", data[front]);
	}
	void back() {
		if (rear == front)
			printf("-1\n");
		else printf("%d\n", data[rear-1]);
	}
};

int main() {
	Queue queue;
	char order[6];
	int n, x;

	scanf("%d", &n);
	getchar();

	while (n--) {
		scanf("%s", order);
		
		if (!strcmp(order, "push")) {
			scanf("%d", &x);
			getchar();

			queue.push(x);
		}
		else if (!strcmp(order, "pop"))
			queue.pop();
		else if (!strcmp(order, "size"))
			queue.size();
		else if (!strcmp(order, "empty"))
			queue.empty();
		else if (!strcmp(order, "front"))
			queue.fr();
		else
			queue.back();
	}
}
```



## 3. 개선점

변수명 != 함수명