#include <stdio.h>


#define TAM_CODIGO 5
#define TAM_NOME 50

int main() {
    
    char estado1;
    char codigo1[TAM_CODIGO];
    char nome1[TAM_NOME];
    int populacao1;
    int pontos_turisticos1;

   
    char estado2;
    char codigo2[TAM_CODIGO];
    char nome2[TAM_NOME];
    int populacao2;
    int pontos_turisticos2;

    printf("Cadastro da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome1, TAM_NOME, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

   
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome2, TAM_NOME, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    
    printf("\n--- Informações das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
