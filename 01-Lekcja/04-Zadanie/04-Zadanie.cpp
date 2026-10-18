#include <iostream>
#include <iomanip>
int main() {
	int x = 7, y = 42, z = 1250;
	std::cout << std::setw(4) << x << std::endl << std::setw(4) << y << std::endl << std::setw(4) << z;
	return 0;
}