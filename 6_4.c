//����Ʈ�� ��� �����ϱ�

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
	delete_node(node1, node2);//node1�� �������,
	                          //node2�� ������ ���
	print_list(list);
}

void delete_node(node_ptr prev, node_ptr node)
{
	if (prev)//prev��尡 �����ϸ�
	{//�߰���尡 �����Ǵ� ���
		prev->link = node->link;
	}
	else
	{//�� �� ��尡 �����Ǵ� ���
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