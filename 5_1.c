//스택의 구현

#include <stdio.h> //printf실행
#define STACK_SIZE 100
int stack[STACK_SIZE];

int top = -1; //empty

void push(int item);
int pop();
void print_stack();

void main()
{
	push(3);
	push(4);
	push(5);
	pop();
	print_stack();
	pop();
	print_stack();
	pop();
	print_stack();
	pop();
	print_stack();
}

void print_stack()
{
	int i;
	for (i = 0; i <= top; i++)
		printf("%d", stack[i]);

	printf("\n"); //스택 쌓으려고 넣는 것
}

void push(int item)
{
	if (top >= STACK_SIZE - 1) //top pointer가 upperbound까지 가면
		                       //full stack하고 리턴해서 삽입을 허용하면 안됨
	{
		printf("stack full");
		return;

	}
	stack[++top] = item; //stack에 item넣음
	print_stack();

}

int pop()
{
	if (top < 0) //top이 0보다 작으면 empty임
	{
		printf("stack empty");
		return -999;
	}

	return stack[top--];
}
//그냥 top하면 index인데 stack[top]하면 배열의 값임..

//실행 결과
//3
//3 4
//3 4 5
//3 4
//3
//-
//stack empty