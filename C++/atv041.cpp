// Exercicio 041
// Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.

// O resultado da operação deve ser acompanhado de uma frase que diga se o número é: par ou ímpar; positivo ou negativo; inteiro ou decimal.

#include <iostream>


int main()
{
    float n1, n2;
    char operacao;
    float resultado;

    std::cout << "Digite o 1º número: ";
    std::cin >> n1;

    std::cout << "Digite o 2º número: ";
    std::cin >> n2;

    std::cout << 
        "\n[+] SOMA" << 
        "\n[-] SUBTRAÇÃO" << 
        "\n[*] MULTIPLICAÇÃO" << 
        "\n[/] DIVISÃO" << std::endl;

    std::cout << "\nDigite sua operação: ";
    std::cin >> operacao;

    switch(operacao)
    {
        case '+':
            resultado = n1 + n2; 
            std::cout << "A soma é " << resultado << '.' << '\n';
            break;
        
        case '-':
            resultado = n1 - n2;
            std::cout << "A subtração é " << resultado << '.' << '\n';
            break;
        
        case '*':
            resultado = n1 * n2;
            std::cout << "A multiplicação é " << resultado << '.' << '\n';
            break;

        case '/':
            resultado = n1 / n2;
            std::cout << "A divisão é " << resultado << '.' << '\n';
            break;
    }

    if(int(resultado) % 2 == 0) 
    {
        std::cout << "O número é par";
    }
    else
    {
        std::cout << "O número é impar";
    }

    if(resultado > 0)
    {
        std::cout << ", positivo";
    }
    else
    {
        std::cout << ", negativo";
    }

    if(float(resultado) != resultado)
    {
        std::cout << " e decimal." << std::endl;
    }
    else
    {
        std::cout << " e inteiro." << std::endl;
    }

    return 0;
}