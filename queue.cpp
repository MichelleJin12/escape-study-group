#include <stdio.h>
#define QUEUE_SIZE 100
int queue[QUEUE_SIZE];
int rear = -1; //empty
int front = -1; //empty

void print_queue();
void addq(int item);
int deleteq(); //global

int main() {
	int temp;
	
	addq(3); //rear =>3
	addq(5); //rear =>5
	addq(7); //rear =>7

	temp = deleteq();
	print_queue();

	return 0;
}


void print_queue() {
	for (int i = 0; i <= rear; i++) {
		printf("%d ", queue[i]);
	}
	printf("\n");
}

void addq(int item) {
	if (rear == QUEUE_SIZE -1) {
		printf("QUEUE FULL. item not added");
		return;
	}
	queue[++rear]=item;
	print_queue();
}

int deleteq() {
	if (front == rear) {
		printf("Queue empty");
		return -999;
	}
	return queue[++front];
}

