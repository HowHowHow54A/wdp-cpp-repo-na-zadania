#include <iostream>
#include <iomanip>
int main()
{
    double a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << std::fixed << std::setprecision(2) << (a + b + c + d + e) / 5;
    return 0;
}