#include <iostream>
int main()
{
    int sekundy;
    std::cin >> sekundy;
    std::cout << sekundy / 60 << '\n';
    std::cout << sekundy % 60 << '\n';
    return 0;
}