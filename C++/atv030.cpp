// Exercicio 030
// Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).

// O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

// Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%

// Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

//     Salário Bruto: (5 * 220)        : R$ 1100,00
//     (-) IR (5%)                     : R$   55,00
//     (-) INSS ( 10%)                 : R$  110,00
//     FGTS (11%)                      : R$  121,00
//     Total de descontos              : R$  165,00
//     Salário Liquido                 : R$  935,00

#include <iostream>

int main()
{
    float salarioBruto, salarioHora,salarioLiquido, IR, INSS, FGTS;
    int horasTrabalhadas;  

    std::cout << "Digite o salário por hora: R$ ";
    std::cin >> salarioHora;

    std::cout << "Digite as horas trabalhadas: ";
    std::cin >> horasTrabalhadas;

    salarioBruto = horasTrabalhadas * salarioHora;
    INSS = salarioBruto * 0.10;
    FGTS = salarioBruto * 0.11;

    if(salarioBruto <= 900)
    {
        IR  = 0;
    }
    else if(salarioBruto <= 1500)
    {
        IR = salarioBruto * 0.05;
    }
    else if(salarioBruto <= 2500)
    {
        IR = salarioBruto * 0.10;   
    }
    else
    {
        IR = 0.20;
    }

    salarioLiquido = salarioBruto - (IR + FGTS + INSS);

    system("clear");

    std::cout << "Salário Bruto..: R$ " << salarioBruto << '\n'; 
    std::cout << "IR.............: R$ " << IR << '\n'; 
    std::cout << "INSS...........: R$ " << INSS << '\n'; 
    std::cout << "FGTS...........: R$ " << FGTS << '\n'; 
    std::cout << "Salário Líquido: R$ " << salarioLiquido << '\n'; 

    return 0;
}