// Exercício 025
// Faça um Programa que leia três números e mostre o maior e o menor deles.

#include <iostream>

int main()
{
    int n1, n2, n3, maior, menor;

    std::cout << "Digite o 1° número: ";
    std::cin >> n1;

    std::cout << "Digite o 2° número: ";
    std::cin >> n2;
    
    std::cout << "Digite o 3° número: ";
    std::cin >> n3;
    
    if(n1 > n2 && n1 > n3)
    {
        maior = n1;
    }
    else if(n2 > n3 && n2 > n1)
    {
        maior = n2;
    }
    else
    {
        maior = n3;
    }

    if(n1 < n2 && n1 < n3)
    {
        menor = n1;
    }
    else if(n2 < n3 && n2 < n1)
    {
        menor = n2;
    }
    else
    {
        menor = n3;
    }


    std::cout << "\n\nMaior número: " << maior << std::endl;
    std::cout << "Menor número: " << menor << std::endl;

    return 0;
}