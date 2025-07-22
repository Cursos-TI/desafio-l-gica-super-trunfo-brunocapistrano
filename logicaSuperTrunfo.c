#include <stdio.h>

int main(){

    /* Definição das variáveis */
    char estado1[2], estado2[2], codigoDaCarta1[3], codigoDaCarta2[3], nomeDaCidade1[50], nomeDaCidade2[50];
    unsigned long int populacao1, populacao2;
    float areaDaCidade1, areaDaCidade2;
    float pib1, pib2;
    int numerosDePontosTuristicos1,numerosDePontosTuristicos2;

    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapta1, pibPerCapta2;

    /* Primeira carta */
    printf("\n--- Iniciando A Criação Da Primeira Cidade ---\n\n");
    printf("1 - Qual o estado dessa carta? \nEscolha letras entre A - H: ");
    scanf("%s", estado1);
    printf("\n");
    printf("2 - Qual o código da carta? \nInsira a Letra do Estádo e um número entre 01 - 04: ");
    scanf("%s", codigoDaCarta1);
    printf("\n");
    printf("3 - Qual o nome da Cidade?\n");
    scanf(" %s", nomeDaCidade1);
    printf("\n");
    printf("4 - Qual a população dessa cidade? ");
    scanf("%lu", &populacao1);
    printf("\n");
    printf("5 - Em quilômetros quadrados, qual a área da cidade? ");
    scanf("%f", &areaDaCidade1);
    printf("\n");
    printf("6 - Qual o PIB da cidade? ");
    scanf("%f", &pib1);
    printf("\n");
    printf("7 - Qual o número de pontos turísticos? ");
    scanf("%d", &numerosDePontosTuristicos1);
    printf("\n");

    /* Segunda carta */
    printf("\n--- Iniciando A Criação Da Segunda Cidade ---\n\n");
    printf("1 - Qual o estado dessa carta? \nEscolha letras entre A - H: ");
    scanf("%s", estado2);
    printf("\n");
    printf("2 - Qual o código da carta? \nInsira a Letra do Estádo e um número entre 01 - 04: ");
    scanf("%s", codigoDaCarta2);
    printf("\n");
    printf("3 - Qual o nome da Cidade?\n");
    scanf("%s", nomeDaCidade2);
    printf("\n");
    printf("4 - Qual a população dessa cidade? ");
    scanf("%lu", &populacao2);
    printf("\n");
    printf("5 - Em quilômetros quadrados, qual a área da cidade? ");
    scanf("%f", &areaDaCidade2);
    printf("\n");
    printf("6 - Qual o PIB da cidade? ");
    scanf("%f", &pib2);
    printf("\n");
    printf("7 - Qual o número de pontos turísticos? ");
    scanf("%d", &numerosDePontosTuristicos2);
    printf("\n");

    /* Densidade e pib da primeira carta */
    densidadePopulacional1 = populacao1 / areaDaCidade1;
    pibPerCapta1 = pib1 / populacao1;

    /* Densidade e pib da segunda carta */
    densidadePopulacional2 = populacao2 / areaDaCidade2;
    pibPerCapta2 = pib2 / populacao2;

    /* Inverso da densidade de cada carta */
    float inversoDensidade1 = 1 / densidadePopulacional1;
    float inversoDensidade2 = 1 / densidadePopulacional2;

    /* Super poder de cada carta */
    float superPoderCarta1 = populacao1 + areaDaCidade1 + pib1 + numerosDePontosTuristicos1 + pibPerCapta1 + inversoDensidade1;
    float superPoderCarta2 = populacao2 + areaDaCidade2 + pib2 + numerosDePontosTuristicos2 + pibPerCapta2 + inversoDensidade2;

    /* Exibe a primeira carta */
    printf("--- Primeira Carta Criada ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaDaCidade1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerosDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta1);
    printf("--- Fim ---\n"); 

    /* Exibe a segunda carta */
    printf("--- Segunda Carta Criada ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaDaCidade2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerosDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta2);
    printf("--- Fim ---\n"); 

    /* Comparação */



    int comparacao1, comparacao2;
    printf("\nEscolha uma opção de comparação:\n");
    printf("População (1), PIB (2), Super Pode (3) ou Densidade Populacional (4)\n");
    scanf("%d", &comparacao1);
    printf("\nEscolha uma segunda opção de comparação:\n");
    printf("População (1), PIB (2), Super Pode (3) ou Densidade Populacional (4)\n");
    scanf("%d", &comparacao2);

    if (comparacao1 == comparacao2) {
        printf("Você escolheu duas opcoes iguais.");
    } else {
        switch (comparacao1)
        {
        case 1:
            printf("--- Comparação de Cartas (Atributo: População)---\n");
            printf("Carta 1 - %s: %lu \n", nomeDaCidade1, populacao1);
            printf("Carta 2 - %s: %lu \n", nomeDaCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (populacao1 < populacao2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 2:
            printf("--- Comparação de Cartas (Atributo: PIB)---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, pib1);
            printf("Carta 2 - %s: %.2fa \n", nomeDaCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (pib1 < pib2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 3:
            printf("--- Comparação de Cartas (Atributo: Super Poder) ---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, superPoderCarta1);
            printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, superPoderCarta2);
            if (superPoderCarta1 > superPoderCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (superPoderCarta1 < superPoderCarta2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 4:
            printf("--- Comparação de Cartas (Atributo: Densidade Populacional)---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, densidadePopulacional2);
            if (inversoDensidade1 < inversoDensidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (inversoDensidade1 > inversoDensidade2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        default:
            break;
        }
        switch (comparacao2)
        {
        case 1:
            printf("--- Comparação de Cartas (Atributo: População)---\n");
            printf("Carta 1 - %s: %lu \n", nomeDaCidade1, populacao1);
            printf("Carta 2 - %s: %lu \n", nomeDaCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (populacao1 < populacao2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 2:
            printf("--- Comparação de Cartas (Atributo: PIB)---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, pib1);
            printf("Carta 2 - %s: %.2fa \n", nomeDaCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (pib1 < pib2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 3:
            printf("--- Comparação de Cartas (Atributo: Super Poder) ---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, superPoderCarta1);
            printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, superPoderCarta2);
            if (superPoderCarta1 > superPoderCarta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (superPoderCarta1 < superPoderCarta2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        case 4:
            printf("--- Comparação de Cartas (Atributo: Densidade Populacional)---\n");
            printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, densidadePopulacional2);
            if (inversoDensidade1 < inversoDensidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
            } else if (inversoDensidade1 > inversoDensidade2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
            } else {
                printf("Empate!");
            }
            break;
        default:
            break;
        }
    }

    
    return 0;
}
