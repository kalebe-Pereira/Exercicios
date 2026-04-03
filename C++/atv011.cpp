// Exercício 011
// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <iostream>

int main()
{
    int n1, n2;
    float n3;

    std::cout << "Digite o 1º número inteiro: ";
    std::cin >> n1;

    std::cout << "Digite o 2º número inteiro: ";
    std::cin >> n2;

    std::cout << "Digite um número com vírgula: ";
    std::cin >> n3;

    std:: cout << "\n\nO produto do dobro primeiro com metade do segundo: " << (n1 * 2) * (n2/2) << std::endl;

    std::cout << "\n\nA soma do triplo do primeiro com o terceiro: " << n1 * 3 + n3 << std::endl;

    std::cout << "\n\nO terceiro elevado ao cubo: " << n3 * n3 * n3 << std::endl;

    return 0;
}