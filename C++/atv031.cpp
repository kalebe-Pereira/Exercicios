// Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deverá aparecer valor inválido.

#include <iostream>

int main()
{
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    switch (numero)
    {
        case 1:
            std::cout << "Dia da semena: Domingo" << '\n';
            break;
        case 2:
            std::cout << "Dia da semana: Segunda" << '\n';
            break;
        case 3:
            std::cout << "Dia da semana: Terça" << '\n';
            break;
        case 4:
            std::cout << "Dia da semana: Quarta" << '\n';
            break;
        case 5:
            std::cout << "Dia da semana: Quinta" << '\n';
            break;
        case 6:
            std::cout << "Dia da semana: Sexta" << '\n';
            break;
        case 7:
            std::cout << "Dia da semana: Sábado" << '\n';
            break;
        default:
            std::cout << "Número inválido" << '\n';
    }

    return 0;
}