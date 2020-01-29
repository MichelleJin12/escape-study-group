//스택의 구현
//
//
//
#include <stdio.h>
#define STACK_SIZE 100
int stack[STACK_SIZE];

int top = -1;

void push(int item);
int pop();
void print_stack();

void main() {
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


void print_stack() {
	for (int i = 0; i < top; i++) {
		printf("%d", stack[i]);
	}
	printf("\n");
}

void push(int item) {
	if(top>=STACK_SIZE-1) {
		printf("stack full");
		return ;
	}
	stack[++top] = item;
	print_stack();
}


int pop() {
	if (top <0) {
		printf("stack empty\n");
		return -999;
	}

	return stack[top--];
}


