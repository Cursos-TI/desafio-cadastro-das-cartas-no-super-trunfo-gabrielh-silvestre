#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Intermediário
// Cadastro de cartas com cálculo de Densidade Populacional e PIB per Capita

int main() {
    // Declaração das variáveis para os atributos das duas cartas
    char code1[4], code2[4]; // Código das cidades
    int population1, population2; // População
    float area1, area2; // Área em km2
    float gdp1, gdp2; // PIB em milhões
    int touristSpots1, touristSpots2; // Pontos turísticos

    // Variáveis para os atributos calculados
    float density1, density2; // Densidade Populacional
    float gdpPerCapita1, gdpPerCapita2; // PIB per Capita

    // Cadastro da Carta 1
    printf("=== Cadastro de Cartas Super Trunfo - Cidades ===\n");

    printf("\nCarta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%3s", code1);
    printf("População: ");
    scanf("%d", &population1);
    printf("Área (km2): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &gdp1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &touristSpots1);

    // Cadastro da Carta 2
    printf("\nCarta 2:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%3s", code2);
    printf("População: ");
    scanf("%d", &population2);
    printf("Área (km2): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &gdp2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &touristSpots2);

    // Cálculo dos atributos derivados para Carta 1
    // Densidade Populacional = População / Área
    density1 = population1 / area1;
    // PIB per Capita = PIB / População
    gdpPerCapita1 = gdp1 / population1;

    // Cálculo dos atributos derivados para Carta 2
    density2 = population2 / area2;
    gdpPerCapita2 = gdp2 / population2;

    // Exibição dos dados das cartas cadastradas, incluindo os atributos calculados
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", code1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f milhões\n", gdp1);
    printf("Pontos turísticos: %d\n", touristSpots1);
    printf("Densidade Populacional: %.2f hab/km2\n", density1);
    printf("PIB per Capita: %.6f milhões/hab\n", gdpPerCapita1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", code2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões\n", gdp2);
    printf("Pontos turísticos: %d\n", touristSpots2);
    printf("Densidade Populacional: %.2f hab/km2\n", density2);
    printf("PIB per Capita: %.6f milhões/hab\n", gdpPerCapita2);

    return 0;
}
