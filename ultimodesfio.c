#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() 
{

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
    int escolha1, escolha2;
    unsigned long int total1 = (populacao1 + area1 + pib1 + turismo1 + densidade1); 
    unsigned long int total2 = (populacao2 + area2 + pib2 + turismo2 + densidade2);
    
       
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
    printf("### Escolha os atributos para comparação ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Sair do jogo\n");
    printf("Primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Segundo atributo: ");
    scanf("%d", &escolha2); 
 
    if(escolha1 == 6 || escolha2 == 6)
    {
        printf("*** Fim do Jogo ***\n");
    } else if(escolha1 == escolha2)
    {
        printf("Escolha repetida, inicie o jogo novamente!\n");
    } else
    {
        printf("Cidades: %s - %s\n", cidade1, cidade2);
        printf("Atributos de comparação: %d - %d\n", escolha1, escolha2); 
    
        switch (escolha1)
        {
        case 1: 
            printf("%s: %u habitantes e %s: %u habitantes\n", cidade1, populacao1, cidade2, populacao2);
            break;
        case 2:  
            printf("%s: %.2f Km² e %s: %.2f Km²\n", cidade1, area1, cidade2, area2);
            break;
        case 3:  
            printf("%s: %.2f bilhões de reais e %s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
            break;
        case 4:  
            printf("%s: %d pontos turísticos e %s: %d pontos turísticos\n", cidade1, turismo1, cidade2, turismo2);
            break;    
        case 5:    
            printf("%s: %.3f habitantes por área e %s: %.3f habitantes por área\n", cidade1, densidade1, cidade2, densidade2);
            break;
        case 6:
            printf("*** FIM DE JOGO ***\n");
            break;
    
        default:
            printf("Opção inválida!!!\n");
            break;
        } 
        switch (escolha2)
        {
        case 1:
            printf("%s: %u habitantes e %s: %u habitantes\n", cidade1, populacao1, cidade2, populacao2);
            break;
        case 2:  
            printf("%s: %.2f Km² e %s: %.2f Km²\n", cidade1, area1, cidade2, area2);
            break;
        case 3:  
            printf("%s: %.2f bilhões de reais e %s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
            break;
        case 4:  
            printf("%s: %d pontos turísticos e %s: %d pontos turísticos\n", cidade1, turismo1, cidade2, turismo2);
            break;    
        case 5:    
            printf("%s: %.3f habitantes por área e %s: %.3f habitantes por área\n", cidade1, densidade1, cidade2, densidade2);
            break;
        case 6:
            printf("*** FIM DE JOGO ***\n");
            break;
        default:
            printf("Opção inválida!!!\n");
            break;
        }
            if((escolha1 == 1) && (escolha2 == 2) || (escolha1 == 2) && (escolha2 == 1)) 
            {   
                total1 = populacao1 + area1;
                total2 = populacao2 + area2; 
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 1) && (escolha2 == 3) || (escolha1 == 3) && (escolha2 == 1)) 
            {   
                total1 = populacao1 + pib1;
                total2 = populacao2 + pib2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if((escolha1 == 1) && (escolha2 == 4) || (escolha1 == 4) && (escolha2 == 1))
            {
                total1 = populacao1 + turismo1;
                total2 = populacao2 + turismo2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 1) && (escolha2 == 5) || (escolha1 == 5) && (escolha2 == 1))
            {
                total1 = populacao1 + densidade1;
                total2 = populacao2 + densidade2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 2) && (escolha2 == 3) || (escolha1 == 3) && (escolha2 == 2))
            {
                total1 = area1 + pib1;
                total2 = area2 + pib2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if((escolha1 == 2) && (escolha2 == 4) || (escolha1 == 4) && (escolha2 == 2))
            {
                total1 = area1 + turismo1;
                total2 = area2 + turismo2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 2) && (escolha2 == 5) || (escolha1 == 5) && (escolha2 == 2))
            {
                total1 = area1 + densidade1;
                total2 = area2 + densidade2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if((escolha1 == 3) && (escolha2 == 4) || (escolha1 == 4) && (escolha2 == 3))
            {
                total1 = pib1 + turismo1;
                total2 = pib2 + turismo2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 3) && (escolha2 == 5) || (escolha1 == 5) && (escolha2 == 3))
            {
                total1 = pib1 + densidade1;
                total2 = pib2 + densidade2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            } else if ((escolha1 == 4) && (escolha2 == 5) || (escolha1 == 5) && (escolha2 == 4))
            {
                total1 = turismo1 + densidade1;
                total2 = turismo2 + densidade2;
                printf("%s: %d pontos e %s: %d pontos\n", cidade1, total1, cidade2, total2);
            }
                if(total1 == total2){
                    printf("As cartas empataram!\n");
                } else if(total1 > total2){
                    printf("Carta 1 - %s, venceu!!\n", cidade1);
                } else{
                    ("Carta 2 - %s, venceu!!\n", cidade2);
            }
    }
    
return 0;
} 