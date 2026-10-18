#include <iostream>
#include <iomanip>
int main()
{
    double liczba;
    std::cout << "Podaj liczbe rzeczywista: ";
    std::cin >> liczba;
    std::cout << "Liczba z dokladnoscia do 1 cyfr po przecinku: " << std::fixed << std::setprecision(1) << liczba << std::endl;
    std::cout << "Liczba z dokladnoscia do 3 cyfr po przecinku: " << std::fixed << std::setprecision(3) << liczba << std::endl;
    std::cout << "Liczba z dokladnoscia do 5 cyfr po przecinku: " << std::fixed << std::setprecision(5) << liczba;
    return 0;
}