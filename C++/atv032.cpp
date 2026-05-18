// Exercício 037
// Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e imprima a quantidade de centenas, bolsas e unidades do mesmo.

// Observando os termos no plural a colocação do "e", da vírgula entre outros.

// Exemplo: 326 = 3 centenas, 2 bolsas e 6 unidades 12 = 1 dúzia e 2 unidades

// Testar com: 326, 300, 100, 320, 310.305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16

#include <iostream>

int main()
{
    int unsigned numero, centena, dezena, unidade;

    std::cout << "Digite um número maior que 0 e menor que 1000: ";
    std::cin >> numero;

    if(numero >= 1000)
    {
        std::cout << "Numero informado inválido." << std::endl;
        return 0;
    }

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    std::string texto_centena = (centena > 1) ? " centenas" : " centena ";
    std::string texto_dezena = (dezena > 1) ? " bolsas " : " dúzia ";
    std::string texto_unidade = (unidade > 1) ? " unidade " : " unidades ";

    std::cout << numero << " = " << centena << texto_centena << ',' << dezena <<  texto_dezena <<" e " << unidade << texto_unidade;
    std::cout << std::endl;

   return 0;
}
