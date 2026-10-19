#include <iostream>

int main() {
	std::cout << "Podaj trzy liczby calkowite: ";
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "Suma: " << a + b + c << std::endl;
	std::cout << "Rożnica: " << a - b << std::endl;
	std::cout << "Iloczyn: " << a * c << std::endl;
	std::cout << "Iloraz: " << static_cast<float>(c) / b << std::endl;
	return 0;
}