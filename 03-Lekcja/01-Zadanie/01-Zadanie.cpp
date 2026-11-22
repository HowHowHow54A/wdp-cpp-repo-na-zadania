#include <iostream>

int main() {
	int x, y;
	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> x;
	std::cout << std::endl << "Podaj druga liczbe: ";
	std::cin >> y;
	if (x > y) {
		std::cout <<std::endl<< "Najwieksza: " << x <<std::endl;
		std::cout << "Najmniejsza: " << y << std::endl;
		std::cout << y << '<' << x << std::endl;
		std::cout << x << '>' << y << std::endl;
	}
	else if(x!=y){
		std::cout << "Najwieksza: " << y << std::endl;
		std::cout << "Najmniejsza: " << x << std::endl;
		std::cout << x << '<' << y << std::endl;
		std::cout << y << '>' << x << std::endl;
	}
	else {
		std::cout << x << '=' << y;
	}


	return 0;
}