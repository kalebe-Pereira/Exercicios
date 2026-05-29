// Exercício 038
// Faça um Programa para uma caixa eletrônica.

// O programa deverá perguntar ao usuário o valor do saque e depois informar quantas notas de cada valor serão fornecidas.

// As notas disponíveis serão de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais.

// O programa não deve se preocupar com a quantidade de notas existentes na máquina.

// Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;

// Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece notas três de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.

#include <iostream>


int main()
{
    unsigned int saque;
    int nota100 = 0, nota50 = 0, nota10 = 0, nota5 = 0, umReal = 0;

    std::cout << "Digite o valor que deseja sacar: R$ ";
    std::cin >> saque;

    
    if(saque < 10 || saque > 600)
    {
        std::cout << "Saque indisponível" << std::endl;
        return 0;
    }

    int valor_digitado = saque;
    
    while(saque != 0)
    {
        if(saque >= 100)
        {
            saque -= 100;
            nota100 += 1;
        }
        else if (saque >= 50)
        {
            saque -= 50;
            nota50 += 1;
        }
        else if (saque >= 10)
        {
            saque -= 10;
            nota10 += 1;
        }
        else if (saque >= 5)
        {
            saque -= 5;
            nota5 += 1;
        }
        else if (saque >= 1)
        {
            saque -= 1;
            umReal += 1;
        }
    }

    system("clear");

    std::cout << "----------------------------------------------------------" << '\n';
    std::cout << "                          SAQUE                           " << '\n';
    std::cout << "----------------------------------------------------------" << '\n';
    std::cout << '\n';
    std::cout << "Valor sacado: R$ " << valor_digitado << '\n';
    std::cout << '\n';
    std::cout << "Notas de  100: " << nota100 << '\n';
    std::cout << "Notas de   50: " << nota50 << '\n';
    std::cout << "Notas de   10: " << nota10 << '\n';
    std::cout << "Notas de    5: " << nota5 << '\n';
    std::cout << "Moedas de   1: " << umReal<< '\n';
    std::cout << "----------------------------------------------------------" << '\n';
    
    return 0;
}