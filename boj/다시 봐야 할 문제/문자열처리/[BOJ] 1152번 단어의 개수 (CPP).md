# [BOJ] 1152번 단어의 개수 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1552

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 128 MB      | 93106 | 22460 | 16497     | 24.505%   |

#### 문제

영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

#### 입력

첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

#### 출력

첫째 줄에 단어의 개수를 출력한다.



#### 예제 입력 1

```
The Curious Case of Benjamin Button
```

#### 예제 출력 1

```
6
```

#### 예제 입력 2

```
 Mazatneunde Wae Teullyeoyo
```

#### 예제 출력 2

```
3
```

#### 예제 입력 3

```
Teullinika Teullyeotzi 
```

#### 예제 출력 3

```
2
```



#### 알고리즘 분류

- [문자열 처리](https://www.acmicpc.net/problem/tag/문자열 처리)



## 2. 내 소스 코드

```C++
/*
	" i i", "i i ", "i" 케이스 생각
	공백만 입력되는 경우!!!!!!
*/

#include <iostream>
#include <string> // 왜 cstring은 안되고 string만 되는걸까
int main() {
	std::string str;
	int count = 0, iOfStr = 0;

	// 문장 입력 받기
	std::getline(std::cin, str);

	// 문장의 첫 문자 확인
	if (str[0] == ' ') // 공백이면
		iOfStr++;

	// 띄어쓰기 수 검출
	for (; str[iOfStr]; iOfStr++) {
		if (str[iOfStr] == ' ') // 현재 문자가 공백이면
			count++;
	}

	// 문장의 마지막 문자 확인
	if (str[iOfStr - 1] == ' ') // 문장의 마지막 문자가 공백이면
		count--;
	
	printf("%d", count+1);
}
```



## 3. 개선점

남들도 대부분 비슷하게 풀었던데 첫 문자와 마지막 문자의 공백 확인을 코드 상 붙여놓느냐 떨어뜨려 놓느냐의 차이는 있는듯 하다. 



\#include \<cstring>와 #include \<string>의 차이를 잘 모르겠어서 검색해보았다ㅠㅠ
https://jhnyang.tistory.com/99
결론! string 라이브러리를 쓸 때엔 \#include \<string>이 필요하다~~~