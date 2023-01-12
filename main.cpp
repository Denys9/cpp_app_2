#include <iostream>

int main() {
    double S, L, R, R2, pi;

    std::cout << "Length->";
    std::cin >> L;

    pi = 3.14;

    R = L / (2 * pi);

    S = pi * (R * R);

    std::cout << "Area of a circle: " << S;

    return 0;
}
