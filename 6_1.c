//3개의 노드로 연결 리스트를 생성

#include <stdio.h>

typedef struct node_type *node_ptr;//줄임말로 대체
typedef struct node_type
{
	int data;//정수만 들어가게 선언
	node_ptr link;
};

void main()
{
	struct node_type node1, node2, node3;
	node1.data = 7;//넣을때 . 연산자로 넣어줌
	node2.data = 11;
	node3.data = 13;

	node1.link = &node2;
	node2.link = &node3;
	node3.link = NULL;//리스트의 끝

	printf("%d %d %d", node1.data, node2.data, node3.data);
}

