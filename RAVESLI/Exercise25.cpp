#include "pch.h"
#include <iostream>
using namespace std;
int main()
{//определяем набор опций (флаги) состояний статьи
	const uint8_t option_viewed = 0x01;//просмотрена
	const uint8_t option_edited = 0x02;//отредактирована
	const uint8_t option_favorited = 0x04;//избранная
	const uint8_t option_shared = 0x08;//доступна
	const uint8_t option_deleted = 0x80;//удалена

	uint8_t myArticleFlags;//статья 

	myArticleFlags |= option_viewed;//выделяем статью как просмотренную
	cout << "My articles flags is viewed:" << '\n';

	if (myArticleFlags & option_deleted);//проверяем удалина ли статья
	cout << "My articles flags is not deleted:" << '\n';


	myArticleFlags &= ~option_favorited;//открепляем статью
	cout << "My articles flags is checkout as a favorite:";

	return 0;

}