#include <iostream>
using namespace std;

int main() {
    int n, j = 0, t = 0;

    cout << "Ile liczb chcesz podac? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> t;
        j += t;
    }

    cout << "Suma: " << j << endl;
    cout << "Srednia: " << static_cast<double>(j) / n;

    return 0;
}