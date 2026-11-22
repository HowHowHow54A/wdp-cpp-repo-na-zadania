
#include <iostream>

int main() {
	int x, y;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> x;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> y;

	if (y != 0) {
		if (x % y == 0) {
			std::cout << "Liczba " << x << " jest podzielna przez " << y;
		}
		else {
			std::cout << "Liczba " << x << " nie jest podzielna przez " << y;
		}
	}
	else {
		std::cout << "Nie mozna sprawdzic podzielnosci przez zero!";
	}

	return 0;
}
