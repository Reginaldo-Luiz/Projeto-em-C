#include <stdio.h>
    /*
     Nesse exemplo estamos trabalhando com entrada e saida de dados o programa le as  imformações do usuário o coma coamndo sacnaf.
*/

int main(){
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
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