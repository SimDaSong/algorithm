# [BOJ] 10569번 다면체 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/10569

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 5 초      | 256 MB      | 1722 | 1502 | 1414      | 88.596%   |

#### 문제

![img](https://www.acmicpc.net/upload/images2/poly.png)

수학자가 구를 깎아서 볼록다면체를 만들었다. 이 수학자는 임의의 볼록다면체에 대해 (꼭짓점의 수) - (모서리의 수) + (면의 수) = 2가 성립한다는 것을 알고 있다. 그래서 구를 깎는 게 취미인 이 사람은 꼭짓점, 모서리와 면의 수를 기록할 때 꼭짓점과 모서리의 수만 세고 면의 수는 세지 않는다.

#### 입력

첫 번째 줄에 1 이상 100 이하의 자연수 T가 주어진다.

다음 T개의 줄에 4 이상 100 이하의 자연수 V와 E가 공백을 사이에 두고 주어진다. V와 E는 각각 꼭짓점의 개수와 모서리의 개수이다.

#### 출력

각 V와 E에 대해 볼록다면체의 면의 수를 한 줄에 하나씩 출력한다.



#### 예제 입력 1

```
2
8 12
4 6
```

#### 예제 출력 1

```
6
4
```



#### 출처

[ACM-ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [North America ](https://www.acmicpc.net/category/8)> [Pacific Northwest Regional ](https://www.acmicpc.net/category/33)> [2014 Pacific Northwest Region Programming Contest Division 2](https://www.acmicpc.net/category/detail/1318) M번

#### 알고리즘 분류

- [수학](https://www.acmicpc.net/problem/tag/수학)



## 2. 내 소스 코드

```c++
#include <iostream>

int main() {
	int t, v, e;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &v, &e);
		printf("%d\n", 2 - v + e);
	}
}
```



## 3. 개선점

