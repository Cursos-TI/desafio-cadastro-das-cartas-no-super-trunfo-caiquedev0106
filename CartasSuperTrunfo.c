#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

void exibirCarta(Carta carta) {
    printf("País: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Demográfica: %.2f\n", carta.densidade_demografica);
}

int menu() {
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    return opcao;
}

void compararCartas(Carta carta1, Carta carta2, int atributoEscolhido) {
    int vencedor = 0;

    switch (atributoEscolhido) {
        case 1: // População
            if (carta1.populacao > carta2.populacao) {
                vencedor = 1;
            } else if (carta1.populacao < carta2.populacao) {
                vencedor = 2;
            } else {
                vencedor = 0; // Empate
            }
            break;
        
        case 2: // Área
            if (carta1.area > carta2.area) {
                vencedor = 1;
            } else if (carta1.area < carta2.area) {
                vencedor = 2;
            } else {
                vencedor = 0; // Empate
            }
            break;
        
        case 3: // PIB
            if (carta1.pib > carta2.pib) {
                vencedor = 1;
            } else if (carta1.pib < carta2.pib) {
                vencedor = 2;
            } else {
                vencedor = 0; // Empate
            }
            break;
        
        case 4: // Pontos turísticos
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                vencedor = 1;
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                vencedor = 2;
            } else {
                vencedor = 0; // Empate
            }
            break;
        
        case 5: // Densidade Demográfica
            if (carta1.densidade_demografica < carta2.densidade_demografica) { // Menor vence
                vencedor = 1;
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                vencedor = 2;
            } else {
                vencedor = 0; // Empate
            }
            break;
        
        default:
            printf("Opção inválida!\n");
            return;
    }

    // Exibição do resultado
    printf("\nResultado da comparação:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);
    switch (vencedor) {
        case 0:
            printf("\nEmpate!\n");
            break;
        case 1:
            printf("\nA carta do país '%s' venceu!\n", carta1.nome);
            break;
        case 2:
            printf("\nA carta do país '%s' venceu!\n", carta2.nome);
            break;
    }
}

int main() {
    Carta carta1 = {"Brasil", 413993437, 9515767.0, 4204000.0, 500, 825.1};
    Carta carta2 = {"alemanha", 11149300, 257022.0, 4100000.0, 200, 137.0};

    int opcao;
    
    printf("Bem-vindo ao Super Trunfo!\n");
    
    opcao = menu();  // Exibir o menu e obter a escolha do jogador
    compararCartas(carta1, carta2, opcao);  // Comparar as cartas com o atributo escolhido
    
    return 0;
}