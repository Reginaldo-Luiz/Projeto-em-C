#include <stdio.h>
/*
     Nesse exemplo estamos trabalhando com entrada e saida de dados o programa imprime o resultado com o comando printf
*/
int main(){
    
    int idade = 45;
    float altura = 1.67;
    double saldoBancario = 12345.67;
    char inicial = 'k';
    char nome[30] ="Reginaldo";

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Saldobancário: %.2freais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
    return 0;

    /*
        %d: Imprime um inteiro no formato decimal.

        %i: Equivalente a %d.

        %f: Imprime um número de ponto flutuante no formato padrão.

        %e: Imprime um número de ponto flutuante na notação cientifica.

        %c: Imprime um único caracter.

        %s: Imprime uma cadeia (string) de caracter. 
    */
}