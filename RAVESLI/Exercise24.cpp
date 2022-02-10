#include <iostream>

int main()
{
	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_favorited = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char myArticleFlags = 0x00;

	myArticleFlags |= option_viewed;
	if (myArticleFlags & option_viewed)
	{
		std::cout << "This article was viewed: ";
		std::cout << static_cast<int>(myArticleFlags & option_viewed) << '\n';
	}

	myArticleFlags |= option_deleted;
	if (myArticleFlags & option_deleted)
	{
		std::cout << "This article was deleted: ";
		std::cout << static_cast<int>(myArticleFlags & option_deleted) << '\n';
	}

	myArticleFlags |= option_favorited;
	if (myArticleFlags & option_favorited)
	{
		std::cout << "This article is marked as a favorite: ";
		std::cout << static_cast<int>(myArticleFlags & option_favorited) << '\n';
	}

	std::cout << "Next, remove from the favorites.\n";

	myArticleFlags &= ~option_favorited;
	if (myArticleFlags & option_favorited)
		std::cout << "This article is marked as a favorite: ";
	else
		std::cout << "This article is not marked as a favorite.\n";

	return 0;

}