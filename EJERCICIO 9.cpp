#include <iostream>

int main() {

    double peso, altura, imc;

    std::cin >> peso >> altura;

    imc = peso / (altura * altura);

    std::cout << "IMC: " << imc;

    if (imc < 18.5) std::cout << "Bajo peso";
    else if (imc < 25) std::cout << "Normal";
    else if (imc < 30) std::cout << "Sobrepeso";
    else if (imc < 35) std::cout << "Obesidad I";
    else std::cout << "Obesidad II";

    return 0;
}