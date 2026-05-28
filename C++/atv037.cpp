// Exercício 037
// Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e imprima a quantidade de centenas, bolsas e unidades do mesmo.

// Observando os termos no plural a colocação do "e", da vírgula entre outros.

// Exemplo: 326 = 3 centenas, 2 dezenas e 6 unidades 12 = 1 dúzia e 2 unidades

// Testar com: 326, 300, 100, 320, 310.305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16

#include <iostream>

int main()
{
    unsigned int numero;

    std::cout << "Digite um valor: ";
    std::cin >> numero;

    if(numero > 999)
    {
        std::cout << "Número inválido!" << std::endl;
        return 0;
    }

    int centena = numero / 100;
    std::string texto_centena = (centena != 1) ? " Centenas" : " Centena";

    int dezena = (numero % 100) / 10;
    std::string texto_dezena = (dezena != 1) ? " Dezenas" : " Dezena";

    int unidade = numero % 10;
    std::string texto_unidade = (unidade != 1) ? " Unidades." : " Unidade.";

    if(centena == 0)
    {
        if(dezena == 0)
        {
            std::cout << unidade << texto_unidade << '\n';
        }
        else
        {
            std::cout << dezena << texto_dezena << " e "<< unidade << texto_unidade<< '\n';
        }
    }
    else if(dezena == 0)
    {
        std::cout << centena << texto_centena << " e " << unidade << texto_unidade << '\n';
    }
    else
    {
        std::cout << centena << texto_centena << ", " <<dezena << texto_dezena << " e " << unidade << texto_unidade << '\n';
    }
    
    return 0;
}