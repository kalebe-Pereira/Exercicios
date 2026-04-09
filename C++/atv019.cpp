// Exercicio 019
// Faça um Programa que peça dois números e imprima o maior deles.

#include <iostream>
#include <ostream>

int main()
{
    int n1, n2;

    std::cout << "Digite o 1° número: ";
    std::cin >> n1;

    std::cout << "Digite o 2° número: ";
    std::cin >> n2;

    if(n1 > n2)
    {
        std::cout << "O maior número é " << n1 << std::endl;
    }
    else if(n2 > n1)
    {
        std::cout << "O maior número é " << n2 << std::endl;
    }
    else
    {
        std::cout << "Os números são iguais" << std::endl;
    }

    return 0;
}