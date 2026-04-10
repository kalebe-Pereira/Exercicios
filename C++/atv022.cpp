// Exercício 022
// Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <iostream>

int main()
{
    char letra;

    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        std::cout << "A letra é vogal" << '\n';
    }
    else
    {
        std::cout << "A letra é consoante" << '\n';
    }

    return 0;
}