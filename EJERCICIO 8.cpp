#include <iostream>

int main() {

    double saldo = 1000;
    int opcion, trans = 0;
    double monto;

    std::cout << "1.Depositar 
    std::cout << 2.Retirar 3.Consultar: ";
    std::cin >> opcion;

    switch(opcion) {

        case 1:
            std::cin >> monto;
            saldo += monto;
            trans++;
            break;

        case 2:
            std::cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                trans++;
            } else {
                std::cout << "Saldo insuficiente\n";
            }
            break;

        case 3:
            std::cout << "Saldo: " << saldo;
            break;
    }

    std::cout << "Transacciones: " << trans;
    return 0;
}