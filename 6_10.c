//프로그램 6.10
//양방향 연결 리스트에서 노드 삽입

#include <stdio.h>
#include <memory.h>

typedef struct dll_node_type * dll_node_ptr;
typedef struct dll_node_type
{
	dll_node_ptr llink;
	int data;
	dll_node_ptr rlink;
};

void insert_dll(dll_node_ptr prev, dll_node_ptr node);
//prev전노드, node넣을 노드
void print_dll_list(dll_node_ptr list1);

void main()
{
	dll_node_ptr head, list, node1, node2, node3;
	head = (dll_node_ptr)malloc(sizeof(struct dll_node_type));
	node1 = (dll_node_ptr)malloc(sizeof(struct dll_node_type));
	node1->data = 7;
	list = node1;
	head->llink = NULL;
	head->rlink = node1;
	node1->llink = head;

	node2 = (dll_node_ptr)malloc(sizeof(struct dll_node_type));
	node2->data = 13;
	node2->llink = node1;
	node2->rlink = head;
	node1->rlink - node2;

	node3 = (dll_node_ptr)malloc(sizeof(struct(dll_node_type)));
	node3->data = 11;
	node3->llink = NULL;
	node3->rlink = NULL;
	head->llink = node2;

	print_dll_list(head, list);
	insert_dll(node1, node3);
	print_dll_list(head, list);
}

void insert_dll(dll_node_ptr prev, dll_node_ptr node)
{
	node->llink = prev; //1
	node->rlink = prev->rlink; //2
	prev->rlink->llink = node; //3
	prev->rlink = node;  //4
}

void print_dll_list(dll_node_ptr head, dll_node_ptr list)
{
	while (list != head)
	{
		printf("%d", list->data);
		list = list->rlink;
	}
	printf("\n");
}