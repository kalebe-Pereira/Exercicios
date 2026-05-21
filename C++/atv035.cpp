// Exercício 035
// Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.

#include <iostream>

int main()
{
    unsigned int ano;

    std::cout << "Digite um ano qualquer aí seu tchola: ";
    std::cin >> ano;

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        std::cout << "Ano bissexto pai" << std::endl;
    }
    else
    {
        std::cout << "Ano normal" << '\n';
    }


    return 0;
}