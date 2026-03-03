#include <iostream>

int main() {

    double temperatura ;

    std::cout << "ingresar la temperatura en celsius: \n";
    std::cin >> temperatura;

    double fahrenheit = (temperatura * 9.0/5.0) + 32;
    double kelvin = temperatura + 273.15;
    double rankine = (temperatura * 9.0/5.0) + 491.67;

    std::cout << "fahrenheit: \n" << fahrenheit << "\n";
    std::cout << "kelvin: \n" << kelvin << "\n";
    std::cout << "rankine: \n" << rankine << "\n";

    return 0;
}
