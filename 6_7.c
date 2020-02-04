//프로그램 6.7
//순환 연결 리스트의 길이

#include <stdio.h>
#include <memory.h>

typedef struct node_type * node_ptr;
typedef struct node_type
{
	int data;
	node_ptr link;
};
int clist_length(node_ptr list);

void main()
{
	node_ptr list, node1, node2, node3;
	node1 = (node_ptr)malloc(sizeof(struct node_type));
	node1->data = 7;
	list = node1;

	node2 = (node_ptr)malloc(sizeof(struct node_type));
	node2->data = 11;
	node1->link = node2;

	node3 = (node_ptr)malloc(sizeof(struct node_type));
	node3->data = 13;
	node2->link = node3;
	node3->link = node1;

	printf("circular list length = %d", clist_length(list));

}

int clist_length(node_ptr list)
{
	node_ptr move;
	int num = 0;
	if (list)
	{
		move = list;
		do
		{
			num++;
			move = move->link;
		} while (move != list);
	}
	return num;
}
