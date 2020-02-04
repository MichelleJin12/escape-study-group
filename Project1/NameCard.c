#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NameCard.h"

//NameCard 구조체 변수의 동적 할당 및 초기화 후 주소 값 반환
NameCard* MakeNameCard(char* name, char* phone) {
	NameCard* newCard = (NameCard*)malloc(sizeof(NameCard));
	strcpy_s(newCard->name, name, NAME_LEN);
	strcpy_s(newCard->phone, phone, NAME_LEN);
	return newCard;
}

//NameCard 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard* pcard) {
	printf("%s ", pcard->name);
	printf("\n");
	printf("%s ", pcard->phone);
	printf("\n");
}

//이름이 같으면 0, 다르면 0이 아닌 값 반환
int NameCompare(NameCard* pcard, char* name) {
	if (strcmp(pcard->name, name)) {
		return 0;
	}
	else return 1;
}

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard* pcard, char* phone) {
	strcpy_s(pcard->phone, phone, NAME_LEN);
}