# [BOJ] 2562번 최대값 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2562

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 4180 | 2426 | 2026      | 58.420%   |

#### 문제

N개의 정수가 주어진다. 이때, N개의 정수를 오름차순으로 정렬하는 프로그램을 작성하시오. 같은 정수는 한 번만 출력한다.

#### 입력

첫째 줄에 수의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다.

#### 출력

첫째 줄에 수를 오름차순으로 정렬한 결과를 출력한다. 이때, 같은 수는 한 번만 출력한다.



#### 예제 입력 1 

```
10
1 4 2 3 1 4 2 3 1 2
```

#### 예제 출력 1 

```
1 2 3 4
```



## 2. 내 소스 코드

```c++
// github.com/SimDaSong/BOJ
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int n, input, prev;
	std::vector<int> intSet;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		intSet.push_back(input);
	}

	std::sort(intSet.begin(), intSet.end());

	prev = intSet[0];
	printf("%d ", intSet[0]);
	
	for (int i = 1; i < n; i++) {
		if (prev != intSet[i]) {
			printf("%d ", intSet[i]);
			prev = intSet[i];
		}
	}
}
```



## 3. 개선점

1. 이런 함수도 있구나...

   ```c++
   #include <bits/stdc++.h>
   using namespace std;
   #define all(x) x.begin(), x.end()
   
   int n;
   
   int main() {
   
   	cin >> n;
   	vector<int> ar(n);
   	for (int i = 0; i < n; ++i) {
   		cin >> ar[i];
   	}
   	sort(all(ar));
   	ar.erase(unique(all(ar)), ar.end());
   	
   	for (int i = 0; i < ar.size(); ++i) {
   		cout << ar[i] << ' ';
   	}
   
   	return 0;
   }
   ```

   https://www.acmicpc.net/source/14849292

   

   관련 자료 : https://dpdpwl.tistory.com/39 신기하당..

   

2. 다른 응용

   ```c++
   #include <bits/stdc++.h>
   using namespace std;
   
   int main() {
     int n; cin >> n;
     int a[n];
     for (int i = 0; i < n; i++) cin >> a[i];
     sort(a, a + n);
     n = unique(a, a + n) - a;
     for (int i = 0; i < n; i++) cout << a[i] << ' ';
     return 0;
   }
   ```

   https://www.acmicpc.net/source/14801633