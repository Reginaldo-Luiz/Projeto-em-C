#include <stdio.h>
#include <string.h>

/*Esse programa usa estruturas de decisão (if, else if.)
Possui menu interativo
Trabalha com cartas cadastradas
Compara dois atributos das cartas
Usa estruturas de decisão encadeadas e aninhadas
Emprega operador ternário
Estrutura simples, ideal para fins acadêmicos e didáticos.
Descrição do jogo
Cada carta possui:
Nome
Ataque
Defesa
Velocidade
O jogador escolhe:
Qual carta usar
Dois atributos para comparação
O vencedor é definido pela soma dos dois atributos escolhidos.*/

// Estrutura da carta
struct Carta {
    char nome[30];
    int ataque;
    int defesa;
    int velocidade;
};

int main() {
// Na linha a baixo esta sendo declarada e a inicialização da primeira e a segunda carta     
    struct Carta carta1 = {"Dragao", 80, 70, 60};
    struct Carta carta2 = {"Fenix", 75, 65, 85};

// Variaveis para controle do menu e escolha dos atributos
    int opcao, atributo1, atributo2;
    int valor1_c1 = 0, valor2_c1 = 0;
    int valor1_c2 = 0, valor2_c2 = 0;

// Laço do menu principal
// Ele será exibido enquanto o usuario não escolher a opção 0 
    do {

// Exibe o menu principal        
        printf("\nSUPER TRUNFO\n");
        printf("1 - Mostrar Cartas\n");
        printf("2 - Comparar Cartas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

// Lê a opção digitada pelo usuário
        scanf("%d", &opcao);
        
// Verifica se o usuário escolheu a opçãp 1
        if (opcao == 1) {

//  O pritf exibe os dados da carta            
            printf("\nCarta 1: %s | Ataque: %d | Defesa: %d | Velocidade: %d\n",
                   carta1.nome, carta1.ataque, carta1.defesa, carta1.velocidade);

            printf("Carta 2: %s | Ataque: %d | Defesa: %d | Velocidade: %d\n",
                   carta2.nome, carta2.ataque, carta2.defesa, carta2.velocidade);
        }

        else if (opcao == 2) {

// Nesse caso o pritf solicita a escolha do primeiro atributo            
            printf("\nEscolha o PRIMEIRO atributo:\n");
            printf("1 - Ataque\n2 - Defesa\n3 - Velocidade\n");

// E nessa ele lê a escolha do primeiro atributo            
            scanf("%d", &atributo1);

// Nesse caso o pritf solicita a escolha do segundo atributo
            printf("\nEscolha o SEGUNDO atributo:\n");
            printf("1 - Ataque\n2 - Defesa\n3 - Velocidade\n");

// E nessa ele lê a escolha do segundo atributo              
            scanf("%d", &atributo2);

// Estrutura de desisão encadeada
// Decisão encadeada para o primeiro atributo
            if (atributo1 == 1) {
                valor1_c1 = carta1.ataque;
                valor1_c2 = carta2.ataque;
            } else if (atributo1 == 2) {
                valor1_c1 = carta1.defesa;
                valor1_c2 = carta2.defesa;
            } else if (atributo1 == 3) {
                valor1_c1 = carta1.velocidade;
                valor1_c2 = carta2.velocidade;
            }

// Estrutura de desisão encadeada 
// Decisão encadeada para o segundo atributo           
            if (atributo2 == 1) {
                valor2_c1 = carta1.ataque;
                valor2_c2 = carta2.ataque;
            } else if (atributo2 == 2) {
                valor2_c1 = carta1.defesa;
                valor2_c2 = carta2.defesa;
            } else if (atributo2 == 3) {
                valor2_c1 = carta1.velocidade;
                valor2_c2 = carta2.velocidade;
            }

// Soma dos atributos tanto da carta 1 e carta 2            
            int soma1 = valor1_c1 + valor2_c1;
            int soma2 = valor1_c2 + valor2_c2;

// Exibe o resultado da comparação
            printf("\nResultado da Comparacao:\n");
            printf("%s: %d pontos\n", carta1.nome, soma1);
            printf("%s: %d pontos\n", carta2.nome, soma2);

// Operador ternário para definir vencedor
            printf("\nVencedor: %s\n",
                   (soma1 > soma2) ? carta1.nome :
                   (soma2 > soma1) ? carta2.nome :
                   "Empate");
        }

// Se o usuário digite uma opção inválida
        else if (opcao != 0) {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);
// Exibe o encerramento do programa
    printf("\nJogo encerrado!\n");
    return 0;
}


