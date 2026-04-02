// Exercício 009
// Faça um programa que parte a temperatura em graus Farenheit, transforma e mostra a temperatura em graus Celsius. C=(5*(F-32)/9).


#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float farenheit; float celsius;

    cout << "Digite a temperatura em Farenheit: ";
    cin >> farenheit;

    celsius = (farenheit - 32) / 1.8;

    cout << fixed << setprecision(2) <<
    "A temperatura de " << farenheit << " em Celsius é " << celsius << endl;

    return 0;
}