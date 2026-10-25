#include <iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "Suma: " << a + b + c << '\n';
    std::cout << "Roznica: " << a - b << '\n';
    std::cout << "Iloczyn: " << a * c << '\n';
    std::cout << "Iloraz: " << static_cast<double>(c) / b << '\n';
    return 0;
}