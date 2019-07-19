# [BOJ] 2480번 주사위 세 개 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2480

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 5693 | 3062 | 2769      | 55.424%   |

#### 문제

1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다. 

1. 같은 눈이 3개가 나오면 10,000원+(같은 눈)*1,000원의 상금을 받게 된다. 
2. 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)*100원의 상금을 받게 된다. 
3. 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)*100원의 상금을 받게 된다.  

예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3*100으로 계산되어 1,300원을 받게 된다. 또 3개의 눈이 2, 2, 2로 주어지면 10,000+2*1,000 으로 계산되어 12,000원을 받게 된다. 3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6*100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

#### 입력

첫째 줄에 3개의 눈이 빈칸을 사이에 두고 각각 주어진다. 

#### 출력

첫째 줄에 게임의 상금을 출력 한다.  



#### 예제 입력 1

```
3 3 6
```

#### 예제 출력 1

```
1300
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2010 ](https://www.acmicpc.net/category/62)> [중등부](https://www.acmicpc.net/category/detail/344) 1번



## 2. 내 소스 코드

```C++
#include <iostream>
#include <algorithm>
int main() {
	int dice[3], reword;
	
	scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

	// 정렬
	std::sort(dice, dice + 3);
	
	// 같은 눈이 3개가 나오면
	if (dice[0] == dice[1] && dice[1] == dice[2]) // dice[0] == dice[1] == dice[2]이 아니라...
		reword = 10000 + dice[0] * 1000;
	// 같은 눈이 2개만 나오는 경우
	else if (dice[0] == dice[1])
		reword = 1000 + dice[0] * 100;
	else if (dice[1] == dice[2])
		reword = 1000 + dice[1] * 100;
	// 모두 다른 눈이 나오는 경우
	else
		reword = dice[2] * 100;

	printf("%d", reword);	
}
```



## 3. 개선점

아예 다 정렬해버리기 보다는 아래 사람처럼 하는 게 더 나았을 듯 https://www.acmicpc.net/source/13992062

```C
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
        printf("%d",10000+a*1000);
    else if(a==b||a==c)
        printf("%d",1000+a*100);
    else if(b==c)
        printf("%d",1000+b*100);
    else
        printf("%d",100*max({a,b,c}));
    return 0;
}
```

