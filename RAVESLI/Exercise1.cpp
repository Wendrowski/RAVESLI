#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>

void print(std::vector<int>& v, int num) {
    std::cout << "\nArray #" << num << " is: ";
    for (auto& i : v) std::cout << i << ' ';
}

void fillArr(std::vector<int>& v) {
    for (int i{ 0 }; i < v.size(); ++i) v[i] = rand() % 10;
}

int input(int num) {
    int size{ 0 };
    while (size < 1) {
        std::cout << "Enter size array #" << num << ": ";
        std::cin >> size;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error! Invalid input! Repeat input!\n";
        }
    }
    return size;
}

int main()
{
    srand(time(0));
    int size = input(1);
    int size2 = input(2);
    std::vector<int> vec(size), vec2(size2);
    fillArr(vec);
    fillArr(vec2);
    print(vec, 1);
    print(vec2, 2);
    std::sort(vec.begin(), vec.end());
    std::sort(vec2.begin(), vec2.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
    last = std::unique(vec2.begin(), vec2.end());
    vec2.erase(last, vec2.end());

    std::vector<int> res;
    std::set_intersection(vec.begin(), vec.end(),
        vec2.begin(), vec2.end(),
        std::back_inserter(res));
    std::cout << "\nIntersection: ";
    print(res, 3);
    return 0;
}