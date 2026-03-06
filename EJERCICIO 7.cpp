#include <iostream>

int main() {

    int year;
    std::cout << "Ingrese year: ";
    std::cin >> year;

    bool bisiesto = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    std::cout << "Paso 1 (÷4): " << (year % 4 == 0) << "\n";
    std::cout << "Paso 2 (÷100): " << (year % 100 == 0) << "\n";
    std::cout << "Paso 3 (÷400): " << (year % 400 == 0) << "\n";

    if (bisiesto)
        std::cout << "Es bisiesto";
    else
        std::cout << "No es bisiesto";

    return 0;
}