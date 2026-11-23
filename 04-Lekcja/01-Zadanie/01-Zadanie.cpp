#include <iostream>
using namespace std;
int main() {
	int n, s = 0;
	cout << "Podaj liczbe: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		s += i;
	}
	cout << "Suma liczb naturalnych mniejszych od n: " << s;
	return 0;
}