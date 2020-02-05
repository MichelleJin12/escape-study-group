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
	//����ü���� ����

	int readData;

	while (1) {
		printf("�ڿ��� �Է� �ޱ� : ");
		scanf_s("%d", &readData);
		if (readData < 1) break;

		//��� �߰��ϱ�
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL; //���� ��尡 �������

		if (head == NULL) head = newNode; //head�� ��������� head�� �־��ְ�
		else tail->next = newNode; //head�� �������� tail ������ �־���

		tail = newNode;
	}
	printf("\n");

	//�Է� ���� ������ ���
	printf("�Է� ���� �������� ��ü ��� \n");
	if (head == NULL) printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	else {
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	//�޸� ���� �� �ϱ�
	if (head == NULL) return 0;
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d�� �����մϴ�.\n", head->data);
		free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;
			printf("%d�� �����մϴ�.\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}