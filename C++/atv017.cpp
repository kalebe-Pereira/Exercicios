//  Exercicio 017
// Faça um Programa para uma loja de tintas.

// O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

// Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.

// Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:

// comprar apenas latas de 18 litros;
// comprar apenas galões de 3,6 litros;
// misturar latas e galões, de forma que o preço seja o menor.
//     Acrescente 10% de folga e sempre arredonde os valores para cima,
//     isto é, considere latas cheias.

#include <cmath>
#include <iostream>

int main()
{
    float area;

    std::cout << "Digite a área em m²: ";
    std::cin >> area;

    float rendimento_tinta= (area * 1.1) / 6;
    
    int preco_lata = std::ceil(rendimento_tinta/ 3.6) * 25;
    int preco_galao = std::ceil(rendimento_tinta/ 18) * 80;

    int galao_mista = std::floor(rendimento_tinta / 18);
    float resto = rendimento_tinta - (galao_mista * 18) ;
    int lata_mista = std::ceil(resto / 3.6);

    //Não entendi direito como fazer, fiz do melhor jeito que eu pensei.
    
    std::cout << "\n\nPreço lata: R$" << preco_lata << '\n';
    std::cout << "Preço galão: R$ " << preco_galao << '\n';
    std::cout 
        << "Mista: " << galao_mista << 
        " galões e " << lata_mista <<" latas: R$ " << 
        (galao_mista *  80) + (lata_mista * 25 )<< '\n';

    return 0;
}