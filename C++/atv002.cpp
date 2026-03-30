// Exercício 002
// Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include "iostream"

int main()
{
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    std::cout << "O número informado foi " << numero << std::endl;

    return 0;
}