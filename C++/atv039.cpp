// Exercício 039
// Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o módulo operador (resto da divisão).

#include <iostream>

int main()
{
    int num;

    std::cout << "Digite um número: ";
    std::cin >> num;

    if(num % 2 == 0)
    {
        std::cout << "É par fi" << std::endl;
    }
    else
    {
        std::cout << "É impar cumpadi" << '\n';
    }

    return 0;
}