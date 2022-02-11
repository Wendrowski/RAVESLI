#include <iostream>
#include <bitset>


//setlocale(LC_ALL, "Rus");


int main()
{
    setlocale(LC_ALL, "Rus");

    unsigned char option_viewed = 1;
    unsigned char option_edited = 2;
    unsigned char option_favorited = 3;
    unsigned char option_shared = 4;
    unsigned char option_deleted = 5;

    unsigned char myArticleFlags = 0;

    std::cout << "Что нужно сделать со статьей?" << std::endl;
    std::cout << "1 - прочитать" << std::endl;
    std::cout << "2 - отредактировать" << std::endl;
    std::cout << "3 - сохранить" << std::endl;
    std::cout << "4 - поделиться" << std::endl;
    std::cout << "5 - удалить" << std::endl;
    std::cout << "Введите номер действия: ";
    int x;
    std::cin >> x;

    if (x == 1) {
        myArticleFlags |= option_viewed;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else if (x == 2) {
        myArticleFlags &= ~option_edited;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else if (x == 3) {
        myArticleFlags |= option_favorited;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else {
        std::cout << "Ничего не произошло" << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }

    return 0;
}#include <iostream>
#include <bitset>


//setlocale(LC_ALL, "Rus");


int main()
{
    setlocale(LC_ALL, "Rus");

    unsigned char option_viewed = 1;
    unsigned char option_edited = 2;
    unsigned char option_favorited = 3;
    unsigned char option_shared = 4;
    unsigned char option_deleted = 5;

    unsigned char myArticleFlags = 0;

    std::cout << "Что нужно сделать со статьей?" << std::endl;
    std::cout << "1 - прочитать" << std::endl;
    std::cout << "2 - отредактировать" << std::endl;
    std::cout << "3 - сохранить" << std::endl;
    std::cout << "4 - поделиться" << std::endl;
    std::cout << "5 - удалить" << std::endl;
    std::cout << "Введите номер действия: ";
    int x;
    std::cin >> x;

    if (x == 1) {
        myArticleFlags |= option_viewed;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else if (x == 2) {
        myArticleFlags &= ~option_edited;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else if (x == 3) {
        myArticleFlags |= option_favorited;
        std::cout << "Статья прочитана " << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }
    else {
        std::cout << "Ничего не произошло" << std::endl;
        std::cout << "Статус: " << myArticleFlags << std::endl;
    }

    return 0;
}