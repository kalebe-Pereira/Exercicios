// Exercício 027
// Faça um Programa que leia três números e mostre-os em ordem decrescente.

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

    if(n1 > n2 && n2 > n3)
    {
        std::cout << n1 << ' ' << n2 << ' ' << n3 << std::endl;
    }
    else if(n2 > n1 && n1 > n3)
    {
        std::cout << n2 << ' ' << n1 << ' ' << n3 << '\n';
    }
    else if(n3 > n1 & n1 > n2)
    {
        std::cout << n3 << ' ' << n1 << ' ' << n2 << '\n';
    }
    else if(n1 > n3 && n3 > n2)
    {
        std::cout << n1 << ' ' << n3 << ' ' << n2 << '\n';
    }
    else if(n2 > n3 && n3 > n1)
    {
        std::cout << n2 << ' ' << n3 << ' ' << n1 << '\n';
    }
    else
    {
        std::cout << n3 << ' ' << n2 << ' ' << n1  << '\n';
    }

    return 0;
}