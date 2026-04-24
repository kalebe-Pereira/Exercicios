// Exercício 029
// As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e eles os contrataram para desenvolver o programa que calculará os reajustes.

// Faça um programa que recebe o salário de um colaborador e reajuste segundo os seguintes sorteios, com base no salário atual:

// salários até R$ 280,00 (incluindo) : aumento de 20%
// salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
// salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
// salários de R$ 1500,00 em diante :
//     aumento de 5% Após o aumento ser realizado,
// informe na tela:
//     o salário antes do reajuste;
//     o percentual de aumento aplicado;
//     o valor do aumento;
//     o novo salário, após o aumento.

#include <iostream>

int main()
{
    float salario, aumento;
    int percentual;

    std::cout << "----------------------------------------------------" << '\n';
    std::cout << "                       TABAJARA                     " << '\n';
    std::cout << "----------------------------------------------------" << "\n\n";
    
    std::cout << "Digite sey salário: R$ ";
    std::cin >> salario;

    if(salario < 280)
    {
        percentual = 20;
        aumento = salario * 0.20;
    }
    else if(salario >= 280 && salario < 700)
    {
        percentual = 15;
        aumento = salario * 0.15;
    }
    else if(salario >= 70 && salario < 1500)
    {
        percentual = 10;
        aumento = salario * 0.20;
    }
    else if(salario >= 1500)
    {
        percentual = 5;
        aumento = salario * 0.05;
    }

    system("clear");

    std::cout << " ------------- INFORMAÇÕES-----------" << '\n';
    std::cout << "Salário.....: R$ " << salario << '\n';
    std::cout << "Percentual..: " << percentual << '%' << '\n';
    std::cout << "Aumento.....: R$ " << aumento << '\n';
    std::cout << "Novo Salário: R$ " << salario + aumento << '\n';

    return 0;
}