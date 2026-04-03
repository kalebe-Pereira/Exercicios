// Exercício 012
// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcula seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <iomanip>
#include <iostream>

int main()
{
    float altura, peso;
    
    std::cout << "Digite sua altura: ";
    std::cin >> altura;

    peso = (72.7 * altura) - 58;

    std::cout << std::fixed << std::setprecision(2) <<
    "Seu peso ideal é " << peso << std::endl;

    return 0;
}