#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
} Node;

typedef struct tagArrayStack {
	int Capacity;
	int Top;
	Node* Nodes;
} ArrayStack;

void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

void AS_CreateStack(ArrayStack** Stack, int Capacity) {
	// 스택을 자유 저장소에 생성
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

	// 입력된 Capacity만큼의 노드를 자유 저장소에 생성
	(*Stack)->Nodes = (Node*)malloc(sizeof(Node)*Capacity);

	// Capacity 및 Top 초기화
	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = 0;
}

void AS_DestroyStack(ArrayStack* Stack) {
	// 노드를 자유저장소에서 해제
	free(Stack->Nodes);
	
	// 스택을 자유저장소에서 해제
	free(Stack);
}

void AS_Push(ArrayStack* Stack, ElementType Data) {
	int position = Stack->Top;

	Stack->Nodes[position].Data = Data;
	Stack->Top++;
}

ElementType AS_Pop(ArrayStack* Stack) {
	int Position = --(Stack->Top);

	return Stack->Nodes[Position].Data;
}

ElementType AS_Top(ArrayStack* Stack) {
	int Position = Stack->Top - 1;

	return Stack->Nodes[Position].Data;
}

int AS_GetSize(ArrayStack* Stack) {
	return Stack->Top;
}

int AS_IsEmpty(ArrayStack* Stack) {
	return (Stack->Top == 0);
}

int main() {
	int n;
	char command[100000];
	char* cut;
	int command_n = 0;
	ArrayStack* Stack = NULL;

	// 명령의 수
	scanf("%d", &n);
	AS_CreateStack(&Stack, n);

	for (int i = 0;i < n;i++) {
		getchar(); // 버퍼 비우기
		scanf("%[^\n]s", command); // 엔터를 제외한 모든 문자열을 입력받음
		cut = strtok(command, " ");

		if (!strcmp(command, "push")) {
			command_n = atoi(strtok(NULL, " "));
			AS_Push(Stack, command_n);
		}
		else if (!strcmp(command, "top")) {
			if (AS_IsEmpty(Stack)) {
				printf("-1\n");
			}
			else
				printf("%d\n", AS_Top(Stack));
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", AS_GetSize(Stack));
		}
		else if (!strcmp(command, "pop")) {
			if (AS_IsEmpty(Stack)) {
				printf("-1\n");
			}
			else
				printf("%d\n", AS_Pop(Stack));
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", AS_IsEmpty(Stack));
		}
	}	

	AS_DestroyStack(Stack);

	return 0;
}