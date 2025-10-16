#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;
    cin >> preco >> quantidade >> dinheiro;

    double troco = dinheiro - (preco * quantidade);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}