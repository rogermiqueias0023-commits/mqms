#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valorHora;
    int horas;

    cin >> nome >> valorHora >> horas;

    double pagamento = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento de " << nome << " sera de R$ " << pagamento << endl;

    return 0;
}