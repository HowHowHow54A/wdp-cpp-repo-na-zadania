
#include <iostream>

int main() {
	int a, b, c, d, e;
	int niedostateczne = 0;
	double srednia;

	std::cout << "Podaj pierwsza ocene: ";
	std::cin >> a;
	std::cout << "Podaj druga ocene: ";
	std::cin >> b;
	std::cout << "Podaj trzecia ocene: ";
	std::cin >> c;
	std::cout << "Podaj czwarta ocene: ";
	std::cin >> d;
	std::cout << "Podaj piata ocene: ";
	std::cin >> e;

	srednia = (a + b + c + d + e) / 5.0;

	if (a == 1) {
		niedostateczne++;
	}
	if (b == 1) {
		niedostateczne++;
	}
	if (c == 1) {
		niedostateczne++;
	}
	if (d == 1) {
		niedostateczne++;
	}
	if (e == 1) {
		niedostateczne++;
	}

	std::cout << "Srednia ocen: " << srednia << std::endl;
	std::cout << "Liczba ocen niedostatecznych: " << niedostateczne;

	return 0;
}
