#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[10], codigo1[10], cidade1[10];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[10], codigo2[10], cidade2[10];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada dos dados da Carta 1
    printf("Carta 1 - Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o Código da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("PIB (Digite o Pib em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da Carta 2
    printf("\nCarta 2 - Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o Código da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("PIB (Digite o Pib em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Comparação por População
    printf("\nComparação de Cartas (População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Resultado usando operador ternário
    printf("Resultado: %s venceu!\n",
           (populacao1 > populacao2) ? cidade1 :
           (populacao1 < populacao2) ? cidade2 : "Empate");

    return 0;
}
