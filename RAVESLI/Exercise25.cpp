#include "pch.h"
#include <iostream>
using namespace std;
int main()
{//���������� ����� ����� (�����) ��������� ������
	const uint8_t option_viewed = 0x01;//�����������
	const uint8_t option_edited = 0x02;//���������������
	const uint8_t option_favorited = 0x04;//���������
	const uint8_t option_shared = 0x08;//��������
	const uint8_t option_deleted = 0x80;//�������

	uint8_t myArticleFlags;//������ 

	myArticleFlags |= option_viewed;//�������� ������ ��� �������������
	cout << "My articles flags is viewed:" << '\n';

	if (myArticleFlags & option_deleted);//��������� ������� �� ������
	cout << "My articles flags is not deleted:" << '\n';


	myArticleFlags &= ~option_favorited;//���������� ������
	cout << "My articles flags is checkout as a favorite:";

	return 0;

}