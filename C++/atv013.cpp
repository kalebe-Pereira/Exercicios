// Exercício 013
// // Tendo como dado de entrada a altura (h) de uma pessoa, constrói um algoritmo que calcula seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72,7 h) - 58 Para mulheres: (62,1 h) - 44,7

#include <iomanip>
#include <iostream>

int main()
{
    char sexo; float altura, peso;
    
    std::cout << "Digite seu altura: ";
    std::cin >> altura;

    std::cout << "Digite seu sexo[m/f]: ";
    std::cin >> sexo;

    if(sexo == 'f')
    {
        peso = (62.1 * altura) - 44.7;
    }
    else if(sexo == 'm')
    {
        peso = (72.7 * altura) - 58;
    }
    else {
        std::cout << "Sexo inválido." << '\n';
        return 0;
    }

    std::cout << std::fixed << std::setprecision(2)
    << "Seu peso ideal é de " << peso << std::endl;

    return 0;
}

