
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double base, altura, area, perimetro, diagonal;
    cin >> base >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}