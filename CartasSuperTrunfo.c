#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {
    //Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomecidade1[60] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;

    //Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomecidade2[60] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;

    // Exibição dos Dados das Cartas
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de pontos turisticos: %d\n", pontosturisticos1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de pontos turisticos: %d\n", pontosturisticos2);
    
    return 0;

}
