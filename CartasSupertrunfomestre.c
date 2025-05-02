#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomecidade1[60] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomecidade2[60] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;

    // Cálculo de Densidade Populacional (habitantes por km²)
    float densidadepopulacional1 = populacao1 / area1;
    float densidadepopulacional2 = populacao2 / area2;

    // Cálculo de PIB per Capita (convertido de bilhões para reais)
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo Super Poder
    float superpoder1 = populacao1 + area1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
    float superpoder2 = populacao2 + area2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    // Exibição dos Dados das Cartas
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n\n", superpoder1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f\n\n", superpoder2);

    // Comparações (1 = carta 1 venceu / 0 = carta 2 venceu)
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}