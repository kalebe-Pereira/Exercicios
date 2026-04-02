// Exercício 007
// Faça um programa que calcula a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <iostream>

int main()
{
    float lado;
    float dobro;

    std::cout << "Digite um lado do quadrado: ";
    std::cin >> lado;

    std::cout << "Area do quadrado: " << lado * lado << std::endl;
    std::cout << "Dobro da área: " << 2 * (lado * lado) << '\n';

    return 0;
}