#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome1, nome2;
    int idade1, idade2;

    cin >> nome1 >> idade1;
    cin >> nome2 >> idade2;

    double media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << endl;

    return 0;
}