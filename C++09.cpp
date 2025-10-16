#include <iostream>
using namespace std;

int main() {
    int codigo, quantidade;
    double total;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

    if (codigo == 1) total = quantidade * 5.00;
    else if (codigo == 2) total = quantidade * 3.50;
    else if (codigo == 3) total = quantidade * 4.80;
    else if (codigo == 4) total = quantidade * 8.90;
    else if (codigo == 5) total = quantidade * 7.32;

    cout << "Valor a pagar: R$ " << total << endl;

    return 0;
}