//프로그램 6.6 연결 리스트의 결합
//두 개의 연결 리스트를 결합하는 예제

#include <stdio.h>
#include <memory.h>

typedef struct node_type * node_ptr;
typedef struct node_type
{
	int data;
	node_ptr link;
};

node_ptr concat_list(node_ptr list1, node_ptr list2);
void print_list(list1);

void main()
{
	node_ptr list1, list2, node1, node2;
	list1 = (node_ptr)malloc(sizeof(struct node_type));
	list1->data = 100;

	node1 = (node_ptr)malloc(sizeof(struct node_type));
	node1->data = 150;
	node1->link = NULL;

	list1->link = node1;

	list2 = (node_ptr)malloc(sizeof(struct node_type));
	list2->data = 200;

	node2 = (node_ptr)malloc(sizeof(struct node_type));
	node2->data = 250;
	node2->link = NULL;

	list2->link = node2;

	print_list(list1);
	print_list(list2);
	list1 = concat_list(list1, list2);
	print_list(list1);

}

node_ptr concat_list(node_ptr list1, node_ptr list2)
{
	node_ptr temp;
	if (!list1) //list1 empty
	{
		return list2;
	}
	else
	{
		if(list2) //list1 list2 exist
		{
			temp = list1;
			while (temp->link) //앞 리스트의 마지막 노드 찾기
				temp = temp->link;
			temp->link = list2;
		}
		return list1;
	}
}

void print_list(node_ptr list)
{
	while (list)
	{
		printf("%d", list->data);
		list = list->link;
	}
}