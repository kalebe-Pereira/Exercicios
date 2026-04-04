// Exercício 014
// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.

// Toda vez que ele trouxer um peso de peixes maior que o previsto pelo regulamento de pesca do estado de São Paulo (50 quilos) deverá pagar uma multa de R$ 4,00 por quilo excedente.

// João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.

// Gravar na variável excesso a quantidade de quilos além do limite e na multa variável o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens apropriadas.

#include <iostream>

int main()
{
    float peso, multa, excesso;

    std::cout << "Digite o peso do peixe (Kg): ";
    std:;std::cin >> peso;

    system("clear");

    excesso = peso - 50;

    multa = excesso * 4;

    std::cout << "Peso do peixe: " << peso << std::endl;
    std::cout << "Taxa da multa (após 50 Kg): R$ 4,00 por kg." << '\n';
    std::cout << "\n\n";
    
    if(peso >= 50)
    {
        std::cout << "Peso excedido: " << excesso << '\n';
        std::cout << "Valor a pagar: R$ " << multa << '\n';
    }

    return 0;
}