#include <iostream>

int main() {

    double compra, descuento = 0;
    char tipo, cupon;
    bool finSemana;

    std::cin >> compra >> tipo >> cupon >> finSemana;

    if (tipo == 'V') descuento += 0.2;
    else descuento += 0.1;

    if (compra > 100) descuento += 0.1;

    switch(cupon) {
        case 'A': descuento += 0.1; break;
        case 'B': descuento += 0.2; break;
    }

    if (finSemana) descuento += 0.05;

    if (descuento > 0.5) descuento = 0.5;

    double total = compra - (compra * descuento);

     std::cout << "Total: " << total;

    return 0;
}