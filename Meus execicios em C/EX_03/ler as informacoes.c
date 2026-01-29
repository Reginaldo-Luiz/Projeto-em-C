#include <stdio.h>
    /*
     Nesse exemplo estamos trabalhando com entrada e saida de dados o programa le as  imformações do usuário o coma coamndo sacnaf.
*/

int main(){

    int idade;
    float altura;
    char nome[30];
    
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("A sua altura é: %.2f\n", altura);

    printf("Digite o seu nome:");
    scanf("%s", &nome);
    printf("O seu nome é: %s", nome);

    return 0;




    
    /*
        sintaxe scanf.

        scanf("formato1" "formato2", &variavel1, variavel2, ...);

        %d: Imprime um inteiro no formato decimal.

        %i: Equivalente a %d.

        %f: Imprime um número de ponto flutuante no formato padrão.

        %e: Imprime um número de ponto flutuante na notação cientifica.

        %c: Imprime um único caracter.

        %s: Imprime uma cadeia (string) de caracter. 
    */



}