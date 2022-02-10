#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int
main()
{
    std::cout << std::boolalpha << []()
    {
        char ch = '\0';
        bool check = true;
        std::string buff;
        std::cin.get(ch);
        buff += ch;
        std::set<char> chbuff;
        while (std::cin.get(ch))
        {
            chbuff.insert(tolower(ch));
            buff += ch;
        }
        std::string rbuff(buff);
        std::reverse(rbuff.begin(), rbuff.end());
        if (buff.size() < 3
            || chbuff.size() >= 3
            || chbuff.size() == 1
            || buff != rbuff
            ) {
            check = false;
        }
        return check;
    }()
        << std::endl;
    return EXIT_SUCCESS;
}