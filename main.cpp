#include <iostream>

int main() {

    double S, v, t, a;

    std::cout << "Швидкість:";
    std::cin >> v;

    std::cout << "Час:";
    std::cin >> t;

    std::cout << "Прискорення:";
    std::cin >> a;

    S = v * t + (a * (t * t)) / 2;
    std::cout << "Пройдена відстань:" << S;

    return 0;
}
