#include<iostream>
using namespace std;
int main() {
	int max = 0, min = 0, sum = 0, n = 0, t;
	do {
		cout << "Podaj liczbe: ";
		cin >> t;
		n++;
		sum += t;
		if (n == 1) {
			max = t;
			min = t;
		}
		if (t > max && t != 0) {
			max = t;
		}
		if (t < min && t != 0) {
			min = t;
		}
	} while (t!= 0);
	n--;
	cout << "Najwieksza liczba: " << max << endl;
	cout << "Najmniejsza liczba: " << min << endl;
	cout << "Suma liczb: " << sum << endl;
	cout << "Srednia liczb: " << static_cast<double>(sum) / n;
	return 0;
}