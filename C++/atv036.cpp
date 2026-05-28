// Exercício 036
// Faça um programa que peça um dado no formato dd/mm/aaaa e determine se o mesmo é um dado válido.

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

class VerifyData
{
    public:
        int d, m, y;
        VerifyData(std::string d);

        int checkDay(int d);
        int checkMonth(int m);
        int checkDaysinMonth(int d, int m);
        int checkYear(int y);
    };   
    
int main()
{
    std::string dataUsuario;
    
    std::cout << "Digite uma data(dd/mm/aaaa): ";
    std::cin >> dataUsuario;
    
    VerifyData *data = new VerifyData(dataUsuario);

    delete data;

    return 0;
}

VerifyData::VerifyData(std::string data)
{

    data.erase(std::remove(data.begin(), data.end(), '/'), data.end());
    
    if(data.length() != 8)
    {
        std::cout << "Formato inválido!" << '\n';
    }

    int d = std::stoi(data.substr(0, 2));
    int m = std::stoi(data.substr(2, 2));
    int y = std::stoi(data.substr(4,4));

    this -> d = d;
    this -> m = m;
    this -> y = y;

    bool valida = true;

    if(!checkDay(d))
    {
        valida = false;
    }
    
    if(!checkMonth(m))
    {
        valida = false;
    }

    if(valida && !checkDaysinMonth(d, m))
    {
        valida = false;
    }

    if(!checkYear(y))
    {
        valida = false;
    }

    if(valida)
    {
        std::cout << "Sua data é válida." << std::endl;
    }
}

int VerifyData::checkDay(int d)
{
    if(d == 0 || d > 31)
    {
        std::cout << "Dia inválido!" << '\n';
        return 0;
    }

    return 1;
}

int VerifyData::checkMonth(int m)
{
    if(m == 0 || m > 12)
    {
        std::cout << "Mês Inválido.!" << '\n';
        return 0;
    }
    return 1;
}

int VerifyData::checkYear(int y)
{
    if(y == 0 || y > 9999)
    {
        std::cout << "Ano inválido!" << '\n';
        return 0;
    }
    return 1;
}

int VerifyData::checkDaysinMonth(int d, int m)
{
    int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(d > (diasMeses[m - 1]))
    {
        std::cout << "Quantidade de dias no mês inválida. " << '\n';
        return 0;
    }
    return 1;
}