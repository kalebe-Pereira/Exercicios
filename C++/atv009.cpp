// Exercício 009
// Faça um programa que parte a temperatura em graus fahrenheit, transforma e mostra a temperatura em graus Celsius. C=(5*(F-32)/9).

#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Digite a temperatura em fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "A temperatura de " << fahrenheit << " em Celsius é " << celsius << '\n';

    return 0;
}