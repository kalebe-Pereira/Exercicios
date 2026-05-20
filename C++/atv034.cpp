// Exercício 034
// Faça um programa que calcula as raízes de uma descoberta de segundo grau, na forma ax² + bx + c.

// O programa deverá pedir os valores de a, deve fazer as consistências, informando ao usuário nas seguintes situações:

// Se o usuário informar o valor de A igual a zero, a equação não é do segundo
//     grau e o programa não deve fazer pedir os demais valores,
//     sendo encerrado;
// Se o delta calculado for negativo, a equação não possui raízes reais.
//     Informe ao usuário e encerre o programa;
// Se o delta calculado for igual a zero a equação possui apenas uma raiz
//     real; informe-a ao usuário;
// Se o delta for positivo, a equação possui duas raiz reais;
//     informe-as ao usuário;

#include <iostream>
#include <math.h>

int main()
{
    double a, b, c;

    std::cout << "Digita a: ";
    std::cin >> a;
    
    std::cout << "Digita b: ";
    std::cin >> b;

    std::cout << "Digita c: ";
    std::cin >> c;

    if(a == 0)
    {
        std::cout << "A equação não é de segundo grau." << std::endl;
        return 0;
    }

    double delta = b * b -4 * a * c;

    if(delta < 0)
    {
        std::cout << "A equação não possui raizes reais." << std::endl;
        return 0;
    }

    double raiz1 = b + sqrt(delta) / 2 * a;
    double raiz2 = b - sqrt(delta) / 2 * a;

    if(delta == 0)
    {
        std::cout << "A equação possui uma raiz, sendo: " << raiz1 << std::endl;
    }
    else
    {
        std::cout << "A equação possui 2 raizes, sendo " << raiz1 << " e " << raiz2 << std::endl;
    }
    

    return 0;
}