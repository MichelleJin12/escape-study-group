#include <stdio.h>
#include "ArrayList.h"

int main(void) {
	//Array list creat & Init

	List list;
	int data;
	ListInit(&list);

	//data store 1 to 9
	for (int i = 1; i <= 9; i++) LInsert(&list, i);

	//print the number of stored data
	printf("the number of stored data : %d \n", LCount(&list));

	//total sum of all data
	int sum = 0;
	if (LFirst(&list, &data)) {
		sum += data;
		while (LNext(&list, &data)) {
			sum += data;
		}
	}

	printf("\n\n");

	//remove multiples of 2 & 3
	if (LFirst(&list, &data)) {
		if ((data % 2 == 0) || (data % 3 == 0)) LRemove(&list);
		while (LNext(&list, &data)) {
			if ((data % 2 == 0) || (data % 3 == 0)) LRemove(&list);
		}
	}
	//관계형 연산자는 비트 연산자보다 우선순위가 높다.

	//print all of stored data
	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}

	printf("\n\n");

}