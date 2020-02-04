#include <stdio.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void){
	printf("%d \n", 1);
	List list;
	NameCard* pcard;
	ListInit(&list);
	printf("%d \n", 2);
	pcard = MakeNameCard("SeongheeJin", "010-5473-1912");
	LInsert(&list, pcard);
	printf("%d \n", 3);
	pcard = MakeNameCard("AekyungPark", "010-2268-1374");
	LInsert(&list, pcard);
	printf("%d \n", 4);
	pcard = MakeNameCard("JuyoungLee", "010-4255-1702");
	printf("%d \n", 5);
	LInsert(&list, pcard);
	printf("%d \n", 6);

	if (LFirst(&list, &pcard)) {
		if (!NameCompare(pcard, "SeongheeJin")) {
			ShowNameCardInfo(pcard);
			printf("%d \n", 7);
		}
		else {
			while (LNext(&list, &pcard)) {
				if (!NameCompare(pcard, "SeongheeJin")) {
					ShowNameCardInfo(pcard);
					printf("%d \n", 8);
					break;
				}
			}
		}
	}

	return 0;
}