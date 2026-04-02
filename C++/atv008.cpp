// Exercício 008
// Faça um Programa que pergunta quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <iomanip>
#include <iostream>

int main()
{
    int hora; float ganho_hora; float salario;

    std::cout << "Digite as horas trabalhadas no mês: ";
    std::cin >> hora;

    std::cout << "Digite o salário por hora: ";
    std::cin >> ganho_hora;

    salario = hora * ganho_hora;

    std::cout << std::fixed << std::setprecision(2) 
    << "Seu salário mensal é " << salario << std::endl;

    return 0;
}