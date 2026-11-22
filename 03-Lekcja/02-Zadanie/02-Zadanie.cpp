
#include <iostream>

int main() {
	int x, y;
	char znak;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> x;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> y;
	std::cout << "Podaj znak dzialania (+, -, *, /, %): ";
	std::cin >> znak;

	if (znak == '+') {
		std::cout << "Wynik: " << x + y;
	}
	else if (znak == '-') {
		std::cout << "Wynik: " << x - y;
	}
	else if (znak == '*') {
		std::cout << "Wynik: " << x * y;
	}
	else if (znak == '/') {
		if (y != 0) {
			std::cout << "Wynik: " << x / y;
		}
		else {
			std::cout << "Nie mozna dzielic przez zero!";
		}
	}
	else if (znak == '%') {
		if (y != 0) {
			std::cout << "Wynik: " << x % y;
		}
		else {
			std::cout << "Nie mozna dzielic przez zero!";
		}
	}
	else {
		std::cout << "Nieprawidlowy znak dzialania!";
	}

	return 0;
}
