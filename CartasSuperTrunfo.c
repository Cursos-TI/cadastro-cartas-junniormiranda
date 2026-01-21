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

// Inserção dos dados das duas primeiras cartas de um estado
    printf ("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado);

    printf("INSIRA OS DADOS DA PRIMEIRA CARTA\n");
    printf("Codigo da carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Número de habitantes da cidade: ");
    scanf("%i", &populacao1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Area da cidade: ");
    scanf("%f", &area1);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%i", &turismo1);

    printf("INSIRA OS DADOS DA SEGUNDA CARTA\n");
    printf("Codigo da carta: ");
    scanf("%s", cod2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Número de habitantes da cidade: ");
    scanf("%i", &populacao2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("Numero de pontos turísticos da cidade: ");
    scanf("%i", &turismo2);


       
// Área para exibição dos dados das cartas
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f Km²\n", area1);
    printf("Número de pontos turísticos: %i\n", turismo1);
    printf("");
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Área: %f Km²\n", area2);
    printf("Número de pontos turísticos: %i\n", turismo2);

  

return 0;
} 
