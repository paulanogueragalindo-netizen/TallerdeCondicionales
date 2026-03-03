#include <iostream>
#include <cmath>
int main() {

    double a, b, c;

    std::cout << "Ingrese los tres lados: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        std::cout << "Si es un triangulo\n";

        if (a == b && b == c) {
            std::cout << "Equilatero\n";
        }
        else if (a == b || a == c || b == c) {
            std::cout << "Isosceles\n";
        }
        else {
            std::cout << "Escaleno\n";
        }

        if (b > a) {
            double temp = a;
            a = b;
            b = temp;
        }
        if (c > a) {
            double temp = a;
            a = c;
            c = temp;
        }

        if (pow(a,2) == pow(b,2) + pow(c,2)) {
            std::cout << "Rectangulo\n";
        }
        else if (pow(a,2) < pow(b,2) + pow(c,2)) {
            std::cout << "Acutangulo\n";
        }
        else {
            std::cout << "Obtusangulo\n";
        }

    } else {
        std::cout << "No es un triangulo\n";
    }

    return 0;
}