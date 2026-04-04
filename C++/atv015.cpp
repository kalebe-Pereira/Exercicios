// Exercício 015
// Faça um Programa que pergunta quanto você ganha por hora e o número de horas trabalhadas no mês.

// Calcule e mostre o total do seu salário no mês específico, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme tabela abaixo:

// + Salário Bruto : R$
// - IR (11%) : R$
// - INSS (8%) : R$
// - Sindicato ( 5%) : R$
// = Salário Liquido : R$
// Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <iomanip>
#include <iostream>

int main()
{
    int hora_trabalhada;
    float valor_hora;
    float salario_bruto, salario_liquido, inss, ir, sindicato;

    std::cout << "Digite as horas trabalhadas: ";
    std::cin >> hora_trabalhada;

    std::cout << "Digite o salário por hora: ";
    std::cin >> valor_hora;

    system("clear");

    salario_bruto = hora_trabalhada * valor_hora;

    inss = salario_bruto * 0.08;
    ir = salario_bruto * 0.11;
    sindicato = salario_bruto * 0.05;

    salario_liquido = salario_bruto - inss - ir - sindicato;

    std::cout << std::fixed << std::setprecision(2)
        << "Salário Bruto : R$ " << salario_bruto << '\n'
        << " - IR: R$ " << ir << '\n'
        << " -INSS: R$ " << inss << '\n'
        << " - SINDICATO: R$ " << sindicato << '\n';

    std::cout << "-------------------------------" << '\n';

    std::cout << std::fixed << std::setprecision(2)
    << "Salário Líquido: " << salario_liquido << '\n';

    return 0;
}
