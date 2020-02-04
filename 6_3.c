//연결 리스트의 노드 삽입 프로그램

#include <stdio.h>
#include <memory.h>
typedef struct node_type*node_ptr;
typedef struct node_type
{
	int data;
	node_ptr link;
};
node_ptr list;
void insert_node(node_ptr prev, int data);
void print_list(node_ptr list);

void main()
{
	node_ptr node1, node2, node3;
	node1 = (node_ptr) malloc(sizeof(struct node_type));
	node1->data = 100;
	node1->link = NULL;
	list = node1;
	node2 = (node_ptr)malloc(sizeof(struct node_type));
	node2->data = 200;
	node2->link = NULL;
	node1->link = node2;
	print_list(list);
	insert_node(node1, 150);
	print(list);
}



