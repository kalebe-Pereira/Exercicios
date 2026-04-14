// Exercicio 026
// Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include <iomanip>
#include <ios>
#include <iostream>

int main()
{
    float preco1, preco2, preco3;
    
    std::cout << "Digite a 1º opção de produto: ";
    std::cin >> preco1;
    
    std::cout << "Digite a 2º opção de produto: ";
    std::cin >> preco2;
    
    std::cout << "Digite a 3º opção de produto: ";
    std::cin >> preco3;

    if(preco1 < preco2 && preco1 < preco3)
    {
        std::cout << std::fixed << std::setprecision(2) << 
        "Produto mais batato: 1 (Recomendado): R$ " << preco1 << std::endl;
    }
    else if(preco2 < preco1 && preco2 < preco3)
    {
        std::cout << std::fixed << std::setprecision(2) << 
        "Produto mais batato: 2 (Recomendado): R$ " << preco2 << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2)
            << "Produto mais batato: 3 (Recomendado): R$ " << preco3 << std::endl;
    }

    return 0;
}
