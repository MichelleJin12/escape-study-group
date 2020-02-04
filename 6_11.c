//프로그램 6.11
//양방향 연결 리스트의 노드 삭제

#include <stdio.h>
#include <memory.h>

typedef struct dll_node_type* dll_node_ptr;
typedef struct dll_node_type
{
	dll_node_ptr llink;
	int data;
	dll_node_ptr rlink;
};

void delete_dll(dll_node_ptr head, dll_node_ptr node);

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
	node2->data = 11;
	node2->llink = node1;
	node1->rlink = node2;

	node3 = (dll_node_ptr)malloc(sizeof(struct dll_node_type));
	node3->data = 13;
	node3->llink = node2;
	node3->rlink = head;
	node2->rlink = node3;
	head->llink = node3;

	print_dll_list(head, list);
	delete_dll(head, node2);
	print_dll_list(head, list);
}

void delete_dll(dll_node_ptr head, dll_node_ptr node)
{
	if (head == node)
		printf("헤드 노드는 삭제할 수 없습니다.\n");
	else
	{
		node->llink->rlink = node->rlink;
		node->rlink->llink = node->llink;
		free(node);
	}
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