#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double medida1, medida2, valor, m2, preco;
    cout<<"qual é o comprimento do terreno"<< endl;
    cin >>medida1;
    cout<<"qual é a largura do terreno"<< endl;
    cin>>medida2;
    cout<<"qual é o preço do metro quadrado"<< endl;
    cin>>valor;
    m2=medida1*medida2;
    preco=m2*valor;
    cout<<"O terreno tem:"<<m2<<"metros quadrados"<<"E ele custa"<<preco;
    cout<<fixed<<setprecision(2);

    return 0;
}