#include <iostream>
#include <iomanip>
int main() {
    std::string imie;
    int wiek;
	float wzrost;
	std::cout << "Podaj imie: ";
	std::cin >> imie;
	std::cout << "Podaj wiek: ";
	std::cin >> wiek;
	std::cout << "Podaj wzrost: ";
	std::cin >> wzrost;
	std::cout << "Imie: " << imie << std::endl;
	std::cout << "Wiek: " << wiek << std::endl;
	std::cout << "Wzrost: " << std::fixed << std::setprecision(2) << wzrost << std::endl;
    return 0;
}