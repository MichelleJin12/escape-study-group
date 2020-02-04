//프로그램 6.9
//양방향 연결 리스트의 선언

typedef struct node_type * node_ptr;
typedef struct node_type
{
	node_ptr llink;
	int data;
	node_ptr rlink;
};