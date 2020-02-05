#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int data;
	struct _node* next;
} Node;

int main(void) {
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	//구조체들의 선언

	int readData;

	while (1) {
		printf("자연수 입력 받기 : ");
		scanf_s("%d", &readData);
		if (readData < 1) break;

		//노드 추가하기
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL; //다음 노드가 비어있음

		if (head == NULL) head = newNode; //head가 비어있으면 head에 넣어주고
		else tail->next = newNode; //head가 차있으면 tail 다음에 넣어줌

		tail = newNode;
	}
	printf("\n");

	//입력 받은 데이터 출력
	printf("입력 받은 데이터의 전체 출력 \n");
	if (head == NULL) printf("저장된 자연수가 존재하지 않습니다. \n");
	else {
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	//메모리 해제 꼭 하기
	if (head == NULL) return 0;
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d를 삭제합니다.\n", head->data);
		free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;
			printf("%d를 삭제합니다.\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}