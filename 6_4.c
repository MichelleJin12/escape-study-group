//리스트의 노드 삭제하기

#include <stdio.h>
#include <memory.h>

typedef struct node_type * node_ptr;
typedef struct node_type
{
	int data;
	node_ptr link;
};
node_ptr link;
void delete_node(node_ptr prev, node_ptr node);
void print_list(node_ptr list);

void main()
{
	node_ptr node1, node2, node3;
	node1 = (node_ptr)malloc(sizeof(struct node_type));
	node1->data = 100;
	node1->link = NULL;
	list = node1;
	node2 = (node_ptr)malloc(sizeof(struct node_type));
	node2->data = 200;
	node2->link = NULL;
	node1->link = node2;
	node3 = (node_ptr)malloc(sizeof(struct node_type));
	node3->data = 300;
	node3->link = NULL;
	node2->link = node3;
	print_list(list);
	delete_node(node1, node2);//node1은 이전노드,
	                          //node2는 삭제할 노드
	print_list(list);
}

void delete_node(node_ptr prev, node_ptr node)
{
	if (prev)//prev노드가 존재하면
	{//중간노드가 삭제되는 경우
		prev->link = node->link;
	}
	else
	{//맨 앞 노드가 삭제되는 경우
		list = node->link;
	}
	free(node);
}

void print_list(node_ptr list)
{
	while (list)
	{
		printf("%d", list->data);
		list = list->link;
	}
	printf("\n");
}