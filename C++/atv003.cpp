// Exercício 003
// Faça um Programa que peça dois números e imprima a soma.

#include "iostream"

int main()
{
    int num1, num2;

    std::cout << "Digite o 1º número: ";
    std::cin >> num1;

    std::cout << "Digite o 2º número: ";
    std::cin >> num2;

    std::cout << "A soma entre " << num1 << " e " << num2 << " é igual a " << num1 + num2 << '\n';

    return 0;
}