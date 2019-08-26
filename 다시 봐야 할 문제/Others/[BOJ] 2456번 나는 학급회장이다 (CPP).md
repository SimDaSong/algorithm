# [BOJ] 2456번 나는 학급회장이다 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/2456

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 4592 | 1181 | 1002      | 33.223%   |

#### 문제

N명의 학생들이 모인 초등학교 반에서 학급회장 선거를 하려고 한다. 그 중 3명이 회장후보로 나왔고, 이들에 대한 선호도를 N명의 학생들 각각에게 적어내도록 하였다. 세 명의 후보는 후보 1번, 후보 2번, 후보 3번이라 한다.

모든 학생은 3명의 후보 중에서 가장 선호하는 후보에게는 3점, 두 번째로 선호하는 후보에게는 2점, 가장 선호하지 않는 후보에게는 1점을 주어야 한다. 3명의 후보에 대한 한 학생의 선호 점수는 모두 다르며, 1점, 2점, 3점이 정확히 한 번씩 나타나야 한다. 

후보의 최종 점수는 학생들로부터 받은 자신의 선호도 점수를 모두 더한 값이 된다. 그러면 3명의 후보 중 가장 큰 점수를 받은 후보가 회장으로 결정된다. 단, 점수가 가장 큰 후보가 여러 명인 경우에는 3점을 더 많이 받은 후보를 회장으로 결정하고, 3점을 받은 횟수가 같은 경우에는 2점을 더 많이 받은 후보를 회장으로 결정한다. 그러나 3점과 2점을 받은 횟수가 모두 동일하면, 1점을 받은 횟수도 같을 수밖에 없어 회장을 결정하지 못하게 된다.

여러분은 선호도 투표를 통해 얻은 세 후보의 점수를 계산한 후, 유일하게 회장이 결정되는 경우에는 회장으로 결정된 후보의 번호(1, 2, 3 중 한 번호)와 최고 점수를 출력하고, 회장을 결정하지 못하는 경우에는 번호 0과 최고 점수를 출력하는 프로그램을 작성하시오.

#### 입력

첫째 줄에는 반의 학생들의 수 N (3<=N<=1,000)이 주어진다. 다음 N개의 각 줄에는 각 학생이 제출한 회장후보 3명에 대한 선호 점수가 주어지는 데, 첫 번째 점수는 후보 1번에 대한 점수이고 두 번째 점수는 후보 2번에 대한 점수이고 세 번째 점수는 후보 3번에 대한 점수이다. 이 세 점수는 서로 다르며, 1, 2, 3이 정확히 한 번씩 나타난다. 

#### 출력

학생들의 선호도 투표 결과로부터, 회장이 유일하게 결정되는 경우에는 회장으로 결정된 후보의 번호와 최고 점수를 출력하고, 유일하게 결정할 수 없는 경우에는 0과 최고 점수를 출력한다.



#### 예제 입력 1

```
6
3 1 2
2 3 1
3 1 2
1 2 3
3 1 2
1 2 3
```

#### 예제 출력 1

```
1 13
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2011 ](https://www.acmicpc.net/category/60)> [초등부](https://www.acmicpc.net/category/detail/337) 2번

[Olympiad ](https://www.acmicpc.net/category/2)> [한국정보올림피아드 ](https://www.acmicpc.net/category/55)> [한국정보올림피아드시․도지역본선 ](https://www.acmicpc.net/category/57)> [지역본선 2011 ](https://www.acmicpc.net/category/60)> [고등부](https://www.acmicpc.net/category/detail/339) 1번

- 데이터를 추가한 사람: [jaeung95](https://www.acmicpc.net/user/jaeung95)
- 문제의 오타를 찾은 사람: [na982](https://www.acmicpc.net/user/na982)



## 2. 내 소스 코드

```C++
// github.com/SimDaSong/BOJ
#include <iostream>

int getWinner(int *voteA, int *voteB) {
	// 동일 점수를 받으면 return 0;
	// 전자가 더 좋은 점수를 받았으면 return 1;
	// 후자가 더 좋은 점수를 받았으면 return 2;
	if (voteA[2] == voteB[2]) { // 3점을 받은 횟수가 동일하면
		if (voteA[1] == voteB[1]) // 2점을 받은 횟수가 동일하면
			return 0;
		return voteA[1] > voteB[1] ? 1 : 2;
	}
	return voteA[2] > voteB[2] ? 1 : 2;
}

int main() {
	int score;
	int vote[3][3] = { 0 }; // 행 : 후보, 열 : 1, 2, 3의 점수를 받은 횟수
	int totalScore[3] = { 0 }; // 각 후보 별 총 점수
	int stu; // 학생의 수
	int winner, maxScore;

	scanf("%d", &stu);
	
	// 투표 받기
	while (stu--) {
		for (int i = 0; i < 3; i++) {
			scanf("%d", &score); // 투표 받기
			vote[i][score-1]++; // 해당 후보가 받은 해당 점수의 횟수
			totalScore[i] += score; // 해당 후보의 총 점수 합산
		}
	}

	// 결과 내기
	winner = 1;
	maxScore = totalScore[0];
	for (int i = 1; i < 3; i++) {
		if (maxScore < totalScore[i]) {
			maxScore = totalScore[i];
			winner = i + 1;
		}
		else if (maxScore == totalScore[i]) {
			if (!winner) { // winner가 0이 되었단 말은 후보1과 후보2의 우위를 점칠 수 없다는 듯
				switch (getWinner(vote[0], vote[i])) {
				case 0:
					winner = 0;
					break;
				case 2:
					winner = i + 1;
					break;
				}
			}
			else {
				switch (getWinner(vote[winner - 1], vote[i])) {
				case 0:
					winner = 0;
					break;
				case 2:
					winner = i + 1;
					break;
				}
			}
		}
	}

	printf("%d %d", winner, maxScore);
}
```



## 3. 개선점

1. 계속 반례를 못 찾다가 질문 게시판을 통해 반례를 찾을 수 있었다 ㅠㅠ 

https://www.acmicpc.net/board/view/25365

```
3
1 2 3
2 3 1
3 1 2
```

초기 코드는 if(!winner) 코드가 없었기에 vote[-1]을 함수 인자로 전달하는 사태가 발생했다...



2. 너무 복잡하게 푼 듯 하였는데 더 간단한 코드를 발견하였다.

```C++
//----------------------------------------------------------------------------------------
//	baekjoon #2456
//		- by Edan
//		- created at 2019-08-02
//----------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
	int n, x, y, z, s[3][4]={0,};
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&x,&y,&z);
		s[0][0]+=x;s[0][x]++;
		s[1][0]+=y;s[1][y]++;
		s[2][0]+=z;s[2][z]++;
	}
	x=0, y=0;
	for(int i=1;i<3;i++)
	{
		if(s[x][0] > s[i][0]) continue;
		if(s[x][0] < s[i][0]) { x=i; y=0; continue; }
		if(s[x][1] > s[i][1]) continue;
		if(s[x][1] < s[i][1]) { x=i; y=0; continue; }
		if(s[x][2] > s[i][2]) continue;
		if(s[x][2] < s[i][2]) { x=i; y=0; continue; }
		y=1;
	}
	printf("%d %d\n", y?0:x+1, s[x][0]);
	return 0;
}
```

https://www.acmicpc.net/source/14321746

내가 totalScore을 따로 쓴 반면에 int 형 배열 s 하나만 쓰시고 행을 후보로, 열의 0번째 인덱스를 총 합산 점수를 담는 데 쓰셨다. 나는 winner, maxScore이라는 변수를 따로 쓴 반면에 변수 x, y를 다시 활용하셨고 각 케이스를 일일히 if 문으로 다 작성하셨는데 오히려 내 코드보다 덜 복잡한 것 같다ㅠㅠ