#include <stdio.h>
/*
     Nesse exemplo estamos trabalhando com entrada e saida de dados o programa imprime o resultado com o comando printf
*/
int main(){
    
    int idade = 45;
    float altura = 1.67;
    double saldoBancario = 12345.67;
    char inicial = 'k';
    char nome[30] ="Reginaldo Luiz";

    printf("A idade do %s é: %d anos\n", nome, idade);
    printf("A altura: %.2f \n", altura);
    printf("O saldo: bancário: %.2freais\n", saldoBancario);
    printf("A inicial do Nome: %c\n", inicial);
    printf("O nome: %s\n", nome);
    return 0;

    /*
        printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

        %d: Imprime um inteiro no formato decimal.

        %i: Equivalente a %d.

        %f: Imprime um número de ponto flutuante no formato padrão.

        %e: Imprime um número de ponto flutuante na notação cientifica.

        %c: Imprime um único caracter.

        %s: Imprime uma cadeia (string) de caracter. 
    */
}