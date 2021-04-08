# [BOJ] 3613번 Java vs C++ (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/3613

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 4167 | 734  | 609       | 19.948%   |

#### 문제

Java 예찬론자 김동규와 C++ 옹호가 김동혁은 서로 어떤 프로그래밍 언어가 최고인지 몇 시간동안 토론을 하곤 했다. 동규는 Java가 명확하고 에러가 적은 프로그램을 만든다고 주장했고, 동혁이는 Java는 프로그램이 느리고, 긴 소스 코드를 갖는 점과 제네릭 배열의 인스턴스화의 무능력을 비웃었다.

또, 김동규와 김동혁은 변수 이름을 짓는 방식도 서로 달랐다. Java에서는 변수의 이름이 여러 단어로 이루어져있을 때, 다음과 같은 방법으로 변수명을 짓는다. 

첫 단어는 소문자로 쓰고, 다음 단어부터는 첫 문자만 대문자로 쓴다. 또, 모든 단어는 붙여쓴다. 따라서 Java의 변수명은 `javaIdentifier`, `longAndMnemonicIdentifier`, `name`, `bAEKJOON`과 같은 형태이다.

반면에 C++에서는 변수명에 소문자만 사용한다. 단어와 단어를 구분하기 위해서 밑줄('`_`')을 이용한다. C++ 변수명은 `c_identifier`, `long_and_mnemonic_identifier`, `name`, `b_a_e_k_j_o_o_n`과 같은 형태이다.

이 둘의 싸움을 부질없다고 느낀 재원이는 C++형식의 변수명을 Java형식의 변수명으로, 또는 그 반대로 바꿔주는 프로그램을 만들려고 한다. 각 언어의 변수명 형식의 위의 설명을 따라야 한다.

재원이의 프로그램은 가장 먼저 변수명을 입력으로 받은 뒤, 이 변수명이 어떤 언어 형식인지를 알아내야 한다. 그 다음, C++형식이라면 Java형식으로, Java형식이라면 C++형식으로 바꾸면 된다. 만약 C++형식과 Java형식 둘 다 아니라면, 에러를 발생시킨다. 변수명을 변환할 때, 단어의 순서는 유지되어야 한다.

재원이는 프로그램을 만들려고 했으나, 너무 귀찮은 나머지 이를 문제를 읽는 사람의 몫으로 맡겨놨다.

재원이가 만들려고 한 프로그램을 대신 만들어보자.

#### 입력

첫째 줄에 변수명이 주어진다. 영어 알파벳과 밑줄('_')로만 이루어져 있고, 길이는 100을 넘지 않는다.

#### 출력

입력으로 주어진 변수명이 Java형식이면, C++형식으로 출력하고, C++형식이라면 Java형식으로 출력한다. 둘 다 아니라면 "Error!"를 출력한다.



#### 예제 입력 1 

```
long_and_mnemonic_identifier
```

#### 예제 출력 1 

```
longAndMnemonicIdentifier
```



#### 출처

[ICPC ](https://www.acmicpc.net/category/1)> [Regionals ](https://www.acmicpc.net/category/7)> [Northern Eurasia ](https://www.acmicpc.net/category/462)> [Northern Eurasia Finals ](https://www.acmicpc.net/category/11)> [NEERC 2006](https://www.acmicpc.net/category/detail/20) J번

- 문제를 번역한 사람: [baekjoon](https://www.acmicpc.net/user/baekjoon)
- 데이터를 추가한 사람: [mwy3055](https://www.acmicpc.net/user/mwy3055)

#### 링크

- [ACM-ICPC Live Archive](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1712)
- [PKU Judge Online](http://poj.org/problem?id=3157)
- [TJU Online Judge](http://acm.tju.edu.cn/toj/showp2674.html)
- [Sphere Online Judge](http://www.spoj.com/problems/JAVAC/)

#### 알고리즘 분류

- [문자열 처리](https://www.acmicpc.net/problem/tag/문자열 처리)



## 2. 내 소스 코드

오류 케이스

1. '_'가 두 번 이상 연속되면

2. 가장 첫 문자, 가장 마지막 문자가 '_' 이면

3. '_'가 이미 나왔는데 대문자가 나오면

4. 대문자가 이미 나왔는데 '_'가 나오면

5. 가장 첫 문자가 대문자이면

   

```C++
// github.com/SimDaSong/BOJ

#include <iostream>
#include <string>

int main() {
	int flag = 0; // java는 1, C++은 2
	std::string input;

	std::getline(std::cin, input);

	// 첫 글자가 대문자라면 error
	if ('A' <= input[0] && input[0] <= 'Z') {
		printf("Error!\n"); return 0;
	}

	// 첫 글자가 '_'라면 error
	if (input[0] == '_') {
		printf("Error!\n"); return 0;
	}

	// 마지막 글자가 '_'이면 error
	if (input.back() == '_') {
		printf("Error!\n"); return 0;
	}


	// java인가 c++인가

	for (int i = 0; input[i]; i++) {

		// Java라면

		if ('A' <= input[i] && input[i] <= 'Z') {
			if (flag == 2) { // C++과 혼용되어 있다면 Error
				printf("Error!\n"); return 0;
			}

			flag = 1;
			input.insert(i++, "_"); // 이 함수 기억하기!!
			input[i] += 32; // 대문자를 소문자로
		}

		// C++이라면

		else if (input[i] == '_') {
			if (flag == 1) { // java와 혼용되어 있다면 Error
				printf("Error!\n"); return 0;
			}

			if (input[i+1] && input[i+1] == '_') { // '_'가 두 개 이상 연속된다면 Error
				printf("Error!\n"); return 0;
			}

			if (input[i+1] && 'A' <= input[i+1] && input[i+1] <= 'Z') { // '_' 다음 대문자가 오면 Error
				printf("Error!"); return 0;
			}

			flag = 2;
			input.erase(i,1); // 이런 식으로 사용 해야 함
			input[i] -= 32; // 소문자를 대문자로
		}
	}

	// 전부 소문자인 것은 Error가 아님
//	if (flag == 0) {
//		printf("Error!\n"); return 0;
//	}

	std::cout << input;
}

```



## 3. 개선점

코드가 너무 더럽다 ... 그런데 이런 문제도 흔치 않을듯 ...