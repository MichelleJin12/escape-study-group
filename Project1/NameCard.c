#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NameCard.h"

//NameCard ����ü ������ ���� �Ҵ� �� �ʱ�ȭ �� �ּ� �� ��ȯ
NameCard* MakeNameCard(char* name, char* phone) {
	NameCard* newCard = (NameCard*)malloc(sizeof(NameCard));
	strcpy_s(newCard->name, name, NAME_LEN);
	strcpy_s(newCard->phone, phone, NAME_LEN);
	return newCard;
}

//NameCard ����ü ������ ���� ���
void ShowNameCardInfo(NameCard* pcard) {
	printf("%s ", pcard->name);
	printf("\n");
	printf("%s ", pcard->phone);
	printf("\n");
}

//�̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
int NameCompare(NameCard* pcard, char* name) {
	if (strcmp(pcard->name, name)) {
		return 0;
	}
	else return 1;
}

// ��ȭ��ȣ ������ ����
void ChangePhoneNum(NameCard* pcard, char* phone) {
	strcpy_s(pcard->phone, phone, NAME_LEN);
}