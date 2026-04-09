// Exercício 018
// Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include <iomanip>
#include <iostream>

int main()
{
    float tamanho, velocidade;

    std::cout << "Digite o tamanho do arquivo em MB: ";
    std::cin >> tamanho;

    std::cout << "Digite a velocidade da internet em Mbps: ";
    std::cin >> velocidade;

    float tempo_em_segundos = tamanho / velocidade;

    std::cout << std::fixed << std::setprecision(2)
        << "A velocidade do download será aproximadamente: " << tempo_em_segundos / 60 <<  " Minutos." <<std::endl;

    return 0;
}