// Exercício 028
// Faça um Programa que exige em que você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.

// Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include <iostream>

int main()
{
    char opcao;
    std::cout << "Digite M-(Matutino), V-(Verspertino), N-(Noturno): ";
    std::cin >> opcao;

    switch(opcao)
    {

        case 'M':
        case 'm':
        std::cout << "Bom dia!" << '\n';
            break;
        case 'V':
        case 'v':
            std::cout << "Boa tarde!" << '\n';
            break;
        case 'N':
        case 'n':
            std::cout << "Boa noite!" << '\n';
            break;
        default:
        std::cout << "Opção inválida!" << '\n';    
    }
        
        return 0;
}