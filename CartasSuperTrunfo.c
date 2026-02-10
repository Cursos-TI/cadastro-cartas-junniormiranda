#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char cod1[3], cod2[3];
    char cidade1[10], cidade2[10];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    int escolhajogador;
       
// Inserção dos dados das duas primeiras cartas de um estado
    printf ("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado);

    printf("INSIRA OS DADOS DA PRIMEIRA CARTA\n");
    printf("Codigo da carta (a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Número de habitantes da cidade: ");
    scanf("%u", &populacao1);
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
    scanf("%u", &populacao2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("Numero de pontos turísticos da cidade: ");
    scanf("%d", &turismo2);

    densidade2 = (float) populacao2 / area2;
    percapita2 = pib2 / populacao2; 
        
// Área para exibição dos dados das cartas
    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f Km²\n", area1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.3f habitantes por área\n", densidade1);
    printf("PIB per Capita: %f\n", percapita1);
    
    printf("--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f Km²\n", area2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.3f habitantes por área\n", densidade2);
    printf("PIB per Capita: %f\n", percapita2);

//Menu interativo
    printf("### Escolha um atributo para comparação ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Sair do jogo\n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: POPULAÇÃO\n");
        printf("%s: %u - %s: %u\n", cidade1, populacao1, cidade2, populacao2);
        if(populacao1 == populacao2){
            printf("Empate!\n");
        }else if(populacao1 > populacao2){
            printf("A cidade %s venceu!\n", cidade1);
        }else{
            printf("A cidade %s venceu!\n", cidade2);
        }
        break;
    case 2:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: ÁREA\n");
        printf("%s: %.2f - %s: %.2f\n", cidade1, area1, cidade2, area2);
        if(area1 == area2){
            printf("Empate!\n");
        }else if(area1 > area2){
            printf("A cidade %s venceu!\n", cidade1);
        }else{
            printf("A cidade %s venceu!\n", cidade2);
        }
        break;
    case 3:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: PIB\n");
        printf("%s: %.2f - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
        if(pib1 == pib2){
            printf("Empate!\n");
        }else if(pib1 > pib2){
            printf("A cidade %s venceu!\n", cidade1);
        }else{
            printf("A cidade %s venceu!\n", cidade2);
        }
        break;
    case 4:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("%s: %d - %s: %d\n", cidade1, turismo1, cidade2, turismo2);
        if(turismo1 == turismo2){
            printf("Empate!\n");
        }else if(turismo1 > turismo2){
            printf("A cidade %s venceu!\n", cidade1);
        }else{
            printf("A cidade %s venceu!\n", cidade2);
        }
        break;
    case 5:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: DENSIDADE DEMOGRÁFICA\n");
        printf("%s: %.3f - %s: %.3f\n", cidade1, densidade1, cidade2, densidade2);
        if(densidade1 == densidade2){
            printf("Empate!\n");
        }else if(densidade1 < densidade2){
            printf("A cidade %s venceu!\n", cidade1);
        }else{
            printf("A cidade %s venceu!\n", cidade2);
        }
        break;
    case 6:
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributo de comparação: FIM DE JOGO\n");
        break;
    
    default:
        printf("Opção inválida!!!\n");
        break;
    }    

//comparação das cartas
    
//imprimindo resultados
    
    

return 0;
} 
