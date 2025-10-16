#include <iostream>
using namespace std;

int main() {
    int a, b, c, menor;

    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "Menor = " << menor << endl;

    return 0;
}