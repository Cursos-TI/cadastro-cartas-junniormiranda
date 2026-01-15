#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char cod1[3];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

// Área para entrada de dados
    printf ("Digite uma letra de A a H para representar um estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", cod1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);

  // Área para exibição dos dados da cidade

return 0;
} 
