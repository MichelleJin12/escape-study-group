//3���� ���� ���� ����Ʈ�� ����

#include <stdio.h>

typedef struct node_type *node_ptr;//���Ӹ��� ��ü
typedef struct node_type
{
	int data;//������ ���� ����
	node_ptr link;
};

void main()
{
	struct node_type node1, node2, node3;
	node1.data = 7;//������ . �����ڷ� �־���
	node2.data = 11;
	node3.data = 13;

	node1.link = &node2;
	node2.link = &node3;
	node3.link = NULL;//����Ʈ�� ��

	printf("%d %d %d", node1.data, node2.data, node3.data);
}

