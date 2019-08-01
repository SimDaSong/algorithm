# [BOJ] 13234번 George Boole (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/13234

아이디: song98987



## 1. 문제 설명

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 256  | 193  | 184       | 77.966%   |

#### 문제

George Boole was an English mathematician, educator, philosopher who was born in 1815, 200 years ago. He was the first professor of mathematics at Queen's College, Cork (now University College Cork (UCC)) and is known as the inventor of boolean arithmetic: The field that is the basis of today’s computers.

In boolean arithmetic, instead of infinite numbers we only have 2 values: 0/1, true/false, yes/no, etc. We will use the values true and false in this problem. The two most common operations in boolean arithmetic are AND and OR.

The result of an AND operation is true only if both elements are true. Examples:

- true AND true = true
- true AND false = false
- false AND false = false

The result of an OR operation is true if any of the elements are true. Examples:

- true OR true = true
- false OR false = false
- false OR true = true 

In this problem you’ll read one of such operations and write the correct result.

#### 입력

Read a single line from the standard input. The line will contain three words with the format:

value1 operation value2. The fields value1 and value2 will be either true or false. The field operation will be either AND or OR.

#### 출력

Print either true or false.



#### 예제 입력 1

```
true AND true
```

#### 예제 출력 1 

```
true
```

#### 예제 입력 2 

```
true OR true
```

#### 예제 출력 2 

```
true
```

#### 예제 입력 3 

```
true AND false
```

#### 예제 출력 3 

```
false
```

#### 예제 입력 4 

```
false OR true
```

#### 예제 출력 4 

```
true
```

#### 예제 입력 5 

```
false AND false
```

#### 예제 출력 5 

```
false
```

#### 예제 입력 6

```
false OR false
```

#### 예제 출력 6

```
false
```



#### 출처

[Olympiad ](https://www.acmicpc.net/category/2)> [All-Ireland Programming Olympiad ](https://www.acmicpc.net/category/356)> [2016 AIPO Preliminary Round](https://www.acmicpc.net/category/detail/1519) 1번



## 2. 내 소스 코드

```C++
#include <iostream>
#include <string>
int main() {
	std::string op1, op2, op3;
	
	std::cin >> op1 >> op2 >> op3;

	if (op2 == "AND") {
		if (op1 == "true" && op3 == "true") printf("true");
		else printf("false");
	}
	else {
		if (op1 == "false" && op3 == "false") printf("false");
		else printf("true");
	}
}
```



## 3. 개선점

신기한 코드 발견....

```C++
#include <cstdio>

int main() {
	char s[8], t[8], u[8];
	bool a;
	scanf("%s%s%s", s, t, u);
	if (t[0] == 'A') a = (s[0] == 't' && u[0] =='t');
	else a = (s[0] == 't' || u[0] =='t');
	printf("%s",  a ? "true" : "false");
}
```

https://www.acmicpc.net/source/14135955