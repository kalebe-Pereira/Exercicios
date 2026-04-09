// Exercicio 020
// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <iostream>

int main()
{
    int num;

    std::cout << "Digite o número: ";
    std::cin >> num;

    std::string texto = (num > 0) ? "O número é positivo.": "O número é negativo.";

    std::cout << texto << '\n';

    return 0;
}