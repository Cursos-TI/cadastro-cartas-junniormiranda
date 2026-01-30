#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char cod1[3], cod2[3];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float percapita1, percapita2;


// Inserção dos dados das duas primeiras cartas de um estado
    printf ("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado);

    printf("INSIRA OS DADOS DA PRIMEIRA CARTA\n");
    printf("Codigo da carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Area da cidade: ");
    scanf("%f", &area1);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &turismo1);

    densidade1 = (float) populacao1 / area1;
    percapita1 = pib1 / populacao1;

    printf("INSIRA OS DADOS DA SEGUNDA CARTA\n");
    printf("Codigo da carta: ");
    scanf("%s", cod2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("Numero de pontos turísticos da cidade: ");
    scanf("%d", &turismo2);

    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;   
    
// Área para exibição dos dados das cartas
    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f Km²\n", area1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", percapita1);
    
    printf("--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f Km²\n", area2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", percapita2);

    if(turismo1 > turismo2){
        printf("Atributo: Maior número de pontos turísticos:\n");
        printf("CARTA 1 - %s:", cidade1);
        printf(" %d Pontos turísticos \n", turismo1);
        printf("CARTA 2 - %s:", cidade2);
        printf(" %d Pontos turísticos \n", turismo2);
        printf("Resultado: Carta 1 - %s", cidade1);
        printf(" Venceu!\n");
    }else{
        printf("Atributo: Maior número de pontos turísticos:\n");
        printf("CARTA 1 - %s:", cidade1);
        printf(" %d Pontos turísticos \n", turismo1);
        printf("CARTA 2 - %s:", cidade2);
        printf(" %d Pontos turísticos \n", turismo2);
        printf("Resultado: Carta 2 - %s", cidade2);
        printf(" Venceu!\n");
    } 

return 0;
} 
