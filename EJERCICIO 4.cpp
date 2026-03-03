#include <iostream>

int main() {
    char operation;
    double num1, num2, resultado;

    std:: cout<< "ingrese dos numeros: \n";
    std:: cin>> num1 >> operation >> num2;

    switch (operation) {

        case '+':
            std::cout << "resultado: " << num1 + num2;
            break;

        case '-':
            std::cout << "resultado: " << num1 - num2;
            break;

        case '*':
            std::cout << "resultado: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                std::cout << "resultado: " << num1 / num2;
            } else {
                std::cout << "operacion invalida";
            }
            break;

        case '%':
            if ((int)num2 != 0) {
                std::cout << "resultado: " << (int)num1 % (int)num2;
            } else {
                std::cout << "operacion invalida";
            }
            break;

        default:
            std::cout << "Esa operacion no existe";
    }

    return 0;
}
