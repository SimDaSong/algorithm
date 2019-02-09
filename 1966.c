/*
Q1.	테스트 케이스 개수 만큼 Queue 배열로 생성해야 할지, 
	아니면 하나의 Queue로 각 케이스 마다 Data들을 초기화 시켜야 할지

	링크드 큐로 작성해야 함 순환 큐는 X

    // 스페이스까지만 입력 받기
	참고 : http://galmaegi74.tistory.com/6
*/
#include <stdio.h>

typedef int ElementType;
// C는 bool 타입 없어서 정의해줘야함
typedef int bool; 
#define TRUE 1
#define FALSE 0

typedef struct tagNode {
	ElementType Data; // 중요도
	bool Target;
	struct tagNode* NextNode;
} Node;

typedef struct tagLinkedQueue {
	Node* Front;
	Node* Rear;
	int Count;
} LinkedQueue;

void LQ_CreateQueue(LinkedQueue** Queue);
void LQ_DestroyQueue(LinkedQueue** Queue);
void LQ_ResetQueue(LinkedQueue *Queue);
Node* LQ_CreateNode(ElementType NewData);
void LQ_DestroyNode(Node* _Node);
void LQ_Enqueue(LinkedQueue* Queue, Node* NewNode);
Node* LQ_Dequeue(LinkedQueue *Queue);
bool LQ_IsEmpty(LinkedQueue* Queue);

int main() {
	int i, j, k;
	int testCase, numOfDocuments, targetIndex, data, targetData, order, size;
	Node *Popped, *NewNode, *CurrentNode, *CompareNode; // 각각 * 붙여줘야함!!!!
	LinkedQueue* Queue;

	LQ_CreateQueue(&Queue);

	// test case의 수 입력 받기
	scanf("%d", &testCase);

	// test case의 수 만큼 n과 m 입력 받고 연산 수행
	for (i = 0; i < testCase; i++) { 
		scanf("%d %d", &numOfDocuments, &targetIndex); // & 써주기!!!!

		// 문서들의 중요도 입력 받기
		for (j = 0; j < numOfDocuments; j++) {
			// 스페이스까지만 입력 받기 
			scanf("%d", &data); // 그냥 이렇게 하면 됨!!!!
								// 참고 : http://m.todayhumor.co.kr/view.php?table=total&no=7901303
			NewNode = LQ_CreateNode(data);
			LQ_Enqueue(Queue, NewNode);
			// target에 궁금한 문서의 중요도 입력 받기
			if (j == targetIndex) NewNode->Target = TRUE; // 중요도 입력받아야함!
		}
	
		// 문서 출력
		CurrentNode = Queue->Front;
		order = 1;

		// 만약 nextnode가 없다면
		if (!(CurrentNode->NextNode)) {
			printf("%d\n", order);
			LQ_ResetQueue(Queue);
			continue;
		}

		while (CurrentNode) { 
			CompareNode = CurrentNode->NextNode;
			// 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 있는지 검사
			size = Queue->Count;
			for (j = 0; j < size; j++) {
				if (CompareNode->Data > CurrentNode->Data) { // 중요도 높은 게 있다면
					LQ_Enqueue(Queue, LQ_Dequeue(Queue)); // 해당 노드를 가장 뒤로 보냄
					break;
				}
				CompareNode = CompareNode->NextNode;
			}
			if (j == size) {
				if (CurrentNode->Target) {
					printf("%d\n", order); // 순서 출력
					break;
				}
				else {
					LQ_Dequeue(Queue);
					order++;
				}
			}
			CurrentNode = CurrentNode->NextNode;
		}
		// queue 초기화
		LQ_ResetQueue(Queue);
	}
	LQ_DestroyQueue(Queue);

	return 0;
}

void LQ_CreateQueue(LinkedQueue** Queue) {
	// 큐를 자유 저장소에 생성
	(*Queue) = (LinkedQueue*)malloc(sizeof(LinkedQueue));

	(*Queue)->Front = NULL;
	(*Queue)->Rear = NULL;
	(*Queue)->Count = 0;
}

void LQ_DestroyQueue(LinkedQueue** Queue) {
	while (!LQ_IsEmpty(Queue)) {
		Node* Popped = LQ_Dequeue(Queue);
		LQ_DestroyNode(Popped);
	}
	
	// 큐를 자유 저장소에서 해제
	free(Queue);
}

void LQ_ResetQueue(LinkedQueue* Queue) {
	while (!LQ_IsEmpty(Queue)) {
		Node* Popped = LQ_Dequeue(Queue);
		LQ_DestroyNode(Popped);
	}
}

Node* LQ_CreateNode(ElementType NewData) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = (ElementType)malloc(sizeof(NewData));
	
	NewNode->Data = NewData; // 데이터 저장
	NewNode->Target = FALSE;
	NewNode->NextNode = NULL; // 다음 노드에 대한 포인터는 NULL로 초기화

	return NewNode; // 노드의 주소를 반환
}

void LQ_DestroyNode(Node* _Node) {
	free(_Node);
}

void LQ_Enqueue(LinkedQueue* Queue, Node* NewNode) {
	if (Queue->Front == NULL) {
		Queue->Front = NewNode;
		Queue->Rear = NewNode;
		Queue->Count++;
	}
	else {
		Queue->Rear->NextNode = NewNode;
		Queue->Rear = NewNode;
		Queue->Rear->NextNode = Queue->Front; // 여기가 없어서 에러 남 ㅠㅠ
		Queue->Count++;
	}
}
Node* LQ_Dequeue(LinkedQueue *Queue) {
	// LQ_Dequeue() 함수가 반환할 최상위 노드
	Node* Front;

	Front = Queue->Front;
	if (Queue->Front == Queue->Front->NextNode) { // 코드 바꿈!!!
		Queue->Front = NULL;
		Queue->Rear = NULL;
	}
	else {
		Queue->Front = Queue->Front->NextNode;
		Queue->Rear->NextNode = Queue->Front;
	}

	Queue->Count--;
	
	return Front;
}


bool LQ_IsEmpty(LinkedQueue* Queue) {
	return (Queue->Front == NULL);
}
