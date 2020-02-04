//동적 메모리 할당으로 연결 리스트를 생성하고 삭제하는 예제

#include <stdio.h>
#include <memory.h>
typedef struct node_type *node_ptr;
typedef struct node_type
{
	int data;
	node_ptr link;

};

void main()
{
	node_ptr node1, node2, node3;
	node1 = (node_ptr)malloc(sizeof(struct node_type));
	node2 = (node_ptr)malloc(sizeof(struct node_type));
	node3 = (node_ptr)malloc(sizeof(struct node_type));
	node1->data = 7;
	node2->data = 11;
	node3->data = 13;
	node1->link = node2;
	node2->link = node3;
	node3->link = NULL;
	printf("node1 : %d", node1->data);
	printf("node2 : %d", node2->data);
	printf("node3 : %d", node3->data);
	free(node1);
	free(node2);
	free(node3);
}