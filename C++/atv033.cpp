// Exercício 033
// Faça um programa que parte os 3 lados de um triângulo. O programa deve informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo for: equilátero, isósceles ou escaleno.

// Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados para maior que o terceiro; Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes;

#include <iostream>

void triangulo(int a, int b, int c);


int main()
{
    int v1, v2, v3;

    std::cout << "Digite o 1° lado: ";
    std::cin >> v1;
    
    std::cout << "Digite o 2° lado: ";
    std::cin >> v2;
    
    std::cout << "Digite o 3° lado: ";
    std::cin >> v3;

    triangulo(v1, v2, v3);

    return 0;
}
void triangulo(int a, int b, int c)
{
    if(a == b && a == c)
    {
        std::cout << "É equilátero pai" << '\n';
    }
    else if(a == b || a == c || b == c)
    {
        std::cout << "É isósceles fi" << '\n';
    }
    else
    {
        std::cout << "É escaleno chefe" << '\n';
    }
}
