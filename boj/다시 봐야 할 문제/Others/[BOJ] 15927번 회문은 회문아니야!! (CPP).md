# [BOJ] 15927번 회문은 회문아니야!! (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/15927

아이디: song98987



## 1. 문제 설명

#### 문제

팰린드롬이란 앞으로 읽으나 뒤로 읽으나 같은 문자열을 말한다. 팰린드롬의 예시로 POP, ABBA 등이 있고, 팰린드롬이 아닌 것의 예시로 ABCA, PALINDROME 등이 있다.

같은 의미를 가지는 여러 단어들을 보자.

- 회문 (한국어)
- palindrome (영어, 프랑스어, 노르웨이어, 그리스어, 라틴어)
- 回文 (일본어, 중국어)
- palindrom (독일어, 덴마크어)
- palindromi (핀란드어)
- palíndromo (스페인어, 포르투갈어)
- palindromo (이탈리아어, 에스페란토어)
- палиндром (러시아어)
- قلب مستو (아랍어)

뭔가 이상한 점이 보이지 않는가? 그 어떤 언어에서도 팰린드롬을 뜻하는 단어는 팰린드롬이 아니다! 많은 사람들이 추구하는 “대칭의 아름다움”은 그저 허상에 불과하다.

알파벳 대문자로 이루어진 문자열이 주어졌을 때, 팰린드롬이 아닌 가장 긴 부분문자열의 길이를 구해 보자. 이때 부분문자열을 이루는 글자는 연속해야 한다. AB는 ABCD의 부분문자열이지만, AC는 아니다.

#### 입력

길이가 1 이상 50만 이하인 문자열이 주어진다.

#### 출력

팰린드롬이 아닌 가장 긴 부분문자열의 길이를 출력한다. 그런 부분문자열이 없으면 -1을 출력한다.



## 2. 내 소스 코드

```C++
// github.com/SimDaSong
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <string>

std::string input;

bool isPalindrome(int i, int j) {
	for (; i < j; i++, j--) {
		if (input[i] != input[j])
			return false;
	}
	return true;
}

// A가 50만개인 경우 시간이 너무 많이 걸려서 이 함수를 꼭 넣어줘야 함!
bool isOneChar(char c) {
	for (int i = 1; i < input.length(); i++) {
		if (input[i] != c)
			return false;
	}
	return true;
}

int main(void) {
	std::cin >> input;
	
	if (isOneChar(input[0])) {
		printf("-1");
		return 0;
	}

	for (int length = input.length(); length > 0; length--) {
		for (int i = 0; i + length <= input.length(); i++) {
			if (!isPalindrome(i, i+length-1)) {
				printf("%d", length);
				return 0;
			}
		}
	}

	printf("-1");
}
```



## 3. 개선점

- 팰린드롬 수의 규칙
  1. 팰린드롬 수일 경우, 팰린드롬이 아닌 가장 긴 부분 문자열의 길이 : length(input) - 1
  2. 팰린드롬 수가 아닐 경우, 팰린드롬이 아닌 가장 긴 부분 문자열의 길이 : length(input)

```C++
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <algorithm>
#include <set>
#define N 500000
using namespace std;

typedef long long ll;

int len;
char s[N+5];

bool isonlyone (void)
{
    for(int i=1;i<len;i++)
        if(s[0] != s[i])
            return 0;
    return 1;
}
bool isPalindrome (void)
{
    int x = 0, y = len-1;

    while(x<y)
        if(s[x++] != s[y--])
            return 0;

    return 1;
}
int main (void)
{
    fread(s,1,N,stdin);
    len = strlen(s);

    while(s[len-1] == '\n' || s[len-1] == ' ')
        len--;

    if(isonlyone())
        puts("-1");
    else if(isPalindrome())
        printf("%d\n",len-1);
    else
        printf("%d\n",len);

    return 0;
}

```

출처: https://www.acmicpc.net/source/10170015
