// Exercício 024
// Faça um Programa que leia três números e mostre o maior deles.

#include <iostream>

int main()
{
    int n1, n2, n3;

    std::cout << "Digite o 1° número: ";
    std::cin >> n1;

    std::cout << "Digite o 2° número: ";
    std::cin >> n2;
    
    std::cout << "Digite o 3° número: ";
    std::cin >> n3;

    if(n1 > n2 && n1 > n3)
    {
        std::cout << "O maior número é " << n1 << std::endl;
    }
    else if(n2 > n1 && n2 > n3)
    {
        std::cout << "O maior número é " << n2 << std::endl;
    }
    else if(n3 > n2 && n3 > n1)
    {
        std::cout << "O maior número é " << n3 << std::endl;
    }
    else
    {
        std::cout << "Os números são iguais" << '\n';
    }

    return 0;
}