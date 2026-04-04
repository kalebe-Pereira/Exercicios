// Exercício 016
// Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

// Considere que a cobertura de tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custa R$ 80,00.

// Informe ao usuário as quantidades de latas de tinta que serão compradas e o preço total.

#include <cmath>
#include <iostream>

int main()
{
    float area;

    std::cout << "Digite a área da parede (em m²): ";
    std::cin >> area;

    float tinta_usada = area / 3;

    float latas = std::ceil(tinta_usada / 18);

    std::cout << "Quantidade necessária de tinta: " << latas << std::endl;
    std::cout << "Preço unitário: R$ 80,00" << '\n';
    std::cout << "Preço total a pagar: R$ " << latas * 80 << '\n';

    return 0;
}