#include <iostream>

int main() {

    double S, v, t, a;

    std::cout << "��������:";
    std::cin >> v;

    std::cout << "���:";
    std::cin >> t;

    std::cout << "�����������:";
    std::cin >> a;

    S = v * t + (a * (t * t)) / 2;
    std::cout << "�������� �������:" << S;

    return 0;
}
