#include <iostream>
#include <vector>
#include <sstream>

void reverse_string(std::string* source)
{
    if (!source->empty())
    {
        std::istringstream iss(*source);
        std::size_t word_count = 1u; //The string should have at least one word

        for (auto symbol : *source)
            if (symbol == ' ')
                word_count++;

        std::vector<std::string> words(word_count, "");
        std::string word;

        while (iss >> word)
            words.emplace_back(word);

        std::reverse(words.begin(), words.end());
        source->clear();

        for (auto&& w : words)
            *source += (w + " ");
    }
}

int main()
{
    std::string str{ "I like to learn C++ with Ravesli" };
    reverse_string(&str);
    std::cout << str << '\n';

    return 0;
}