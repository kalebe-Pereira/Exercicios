// Exercício 021
// Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, sexo Inválido.

#include <iostream>

int main()
{
    char sexo;
    std::cout << "Digite o sexo [m/f]: ";
    std::cin >> sexo;

    if(sexo == 'f' || sexo == 'F')
    {
        std::cout << "Sexo: Feminino." << std::endl;
    }
    else if(sexo == 'm' or sexo == 'M')
    {
        std::cout << "Sexo: Masculino." << std::endl;
    }
    else
    {
        std::cout << "Sexo Inválido." << std::endl;
    }

    return 0;
}