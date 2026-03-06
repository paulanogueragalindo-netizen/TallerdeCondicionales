#include <iostream>

int main() {

    int a = 5, b = 3;

    std::cout << "Inicial: a=" << a << " b=" << b << "\n";

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Temporal: a=" << a << " b=" << b << "\n";

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Aritmetico: a=" << a << " b=" << b << "\n";

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "XOR: a=" << a << " b=" << b << "\n";

    return 0;
}