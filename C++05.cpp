#include <iostream>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;
    double total, troco;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = preco * quantidade;

    if (dinheiro < total) {
        cout << "DINHEIRO INSUFICIENTE. FALTAM R$ " << total - dinheiro << endl;
    } else {
        troco = dinheiro - total;
        cout << "TROCO = R$ " << troco << endl;
    }

    return 0;
}