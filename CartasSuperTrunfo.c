#include <stdio.h>

int main(){

    int populacao, num_Pturisticos;

    float pib, area;

    char estado;

    char cidade[30];

    char cod_carta[3];

    int populacao2, Pturisticos2;

    float pib2, area2;

    char estado2;

    char cidade2[30];

    char cod_carta2[3];

    printf("primeira carta:\n\n");

    printf("digite um estado de A a H:");
    scanf("%c", &estado);

    printf("digite  o codigo da carta:");
    scanf("%s", cod_carta);

    printf("digite o nome da cidade:");
    scanf(" %29[^\n]", cidade);

    printf("digite o numeros da populacao:");
    scanf("%i", &populacao);

    printf("digite o tamanho da area:");
    scanf("%f", &area);

    printf("digite o pib:");
    scanf("%f", &pib);

    printf("digite N ponto turisticos:");
    scanf("%i", &num_Pturisticos);

    printf("\n\n");

    printf("segunda carta:\n\n");

    printf("digite um estado de A a H:");
    scanf(" %c", &estado2);

    printf("digite  o codigo da carta:");
    scanf("%s", cod_carta2);

    printf("digite o nome da cidade:");
    scanf(" %29[^\n]", cidade2);

    printf("digite o numeros da populacao:");
    scanf("%i", &populacao2);

    printf("digite o tamanho da area:");
    scanf("%f", &area2);

    printf("digite o pib:");
    scanf("%f", &pib2);

    printf("digite N ponto turisticos:");
    scanf("%i", &Pturisticos2);

    printf("Carta 1:\n");

    printf("Estado: %c\n",estado);
    
    printf("Código: %c%s\n",estado, cod_carta);
    
    printf("Nome da Cidade: %s\n",cidade);
    
    printf("População: %i\n",populacao);
    
    printf("Área: %.2f\n",area);
    
    printf("PIB: %.2f\n",pib);
    
    printf("Número de Pontos Turísticos: %i\n\n",num_Pturisticos);

    printf("Carta 2:\n");

    printf("Estado: %c\n",estado2);
    
    printf("Código: %c%s\n",estado2, cod_carta2);
    
    printf("Nome da Cidade: %s\n",cidade2);
    
    printf("População: %i\n",populacao2);
    
    printf("Área: %.2f\n",area2);
    
    printf("PIB: %.2f\n",pib2);
    
    printf("Número de Pontos Turísticos: %i\n\n",Pturisticos2);

return 0;

}

