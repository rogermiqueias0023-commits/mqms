#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double areaQuadrado = A * A;
    double areaTriangulo = (A * B) / 2;
    double areaTrapezio = ((A + B) * C) / 2;

    cout << fixed << setprecision(4);
    cout << "QUADRADO = " << areaQuadrado << endl;
    cout << "TRIANGULO = " << areaTriangulo << endl;
    cout << "TRAPEZIO = " << areaTrapezio << endl;

    return 0;
}
