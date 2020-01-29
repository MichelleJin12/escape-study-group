//������ ����

#include <stdio.h> //printf����
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

	printf("\n"); //���� �������� �ִ� ��
}

void push(int item)
{
	if (top >= STACK_SIZE - 1) //top pointer�� upperbound���� ����
		                       //full stack�ϰ� �����ؼ� ������ ����ϸ� �ȵ�
	{
		printf("stack full");
		return;

	}
	stack[++top] = item; //stack�� item����
	print_stack();

}

int pop()
{
	if (top < 0) //top�� 0���� ������ empty��
	{
		printf("stack empty");
		return -999;
	}

	return stack[top--];
}
//�׳� top�ϸ� index�ε� stack[top]�ϸ� �迭�� ����..

//���� ���
//3
//3 4
//3 4 5
//3 4
//3
//-
//stack empty