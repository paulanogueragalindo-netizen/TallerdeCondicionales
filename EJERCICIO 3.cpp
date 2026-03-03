#include <iostream>

int main() {

    int permisos;
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    std::cout << "Ingrese un numero (0 a 7):\n";
    std::cin >> permisos;

    std::cout << "Permisos detectados:\n";

    if (permisos & LEER) {
        std::cout << "Puede LEER\n";
    }

    if (permisos & ESCRIBIR) {
        std::cout << "Puede ESCRIBIR\n";
    }

    if (permisos & EJECUTAR) {
        std::cout << "Puede EJECUTAR\n";
    }

    int todos = LEER | ESCRIBIR | EJECUTAR;
    std::cout << "Valor de todos los permisos (OR): \n" << todos;

    std::cout << "Negacion de permisos (~): \n" << (~permisos);

    return 0;
}