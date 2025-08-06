#include <stdio.h>

int main(){
    // Dados da Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    char estado1, cidade1[50], codigo1[4];

    // Dados da Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    char estado2, cidade2[50], codigo2[4];


    //Entrada das Informações da CARTA 1
    printf("Digite as informações da Carta 1\n");
    
    printf("Digite o ESTADO (entre 'A' e 'H') da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o CÓDIGO da Carta 1 (letra do estado + número): ");
    scanf("%s", codigo1);

    printf("Digite a CIDADE da Carta 1: ");
    scanf(" %[^\n]", cidade1); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a ÁREA (km²) da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de PONTOS TURÍSTICOS da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    
    // Entrada das Informações da CARTA 2
    printf("\n\nDigite as informações da Carta 2\n");
    
    printf("Digite o ESTADO (entre 'A' e 'H') da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o CÓDIGO da Carta 2 (letra do estado + número): ");
    scanf("%s", codigo2);

    printf("Digite a CIDADE da Carta 2: ");
    scanf(" %[^\n]", cidade2); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a ÁREA (km²) da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de PONTOS TURÍSTICOS da Carta 2: ");
    scanf("%d", &pontosTuristicos2);


    // Cálculo da Densidade Populacional & PIB per capita da CARTA 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) (pib1 * 1000000000.0) / populacao1;


    // Cálculo da Densidade Populacional & PIB per capita da CARTA 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000.0) / populacao2;


    // Exibição de Dados
    printf("\n\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional1, pibPerCapita1);
    
    printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional2, pibPerCapita2);

    return 0;    

}