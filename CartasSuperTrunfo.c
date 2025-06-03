#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Mestre
// Cadastro, cálculo de atributos derivados, comparação e cálculo do Super Poder

int main() {
    // Declaração das variáveis para os atributos das duas cartas
    char code1[4], code2[4]; // Código das cidades
    unsigned long int population1, population2; // População (unsigned long int)
    float area1, area2; // Área em km2
    float gdp1, gdp2; // PIB em milhões
    int touristSpots1, touristSpots2; // Pontos turísticos

    // Variáveis para os atributos calculados
    float density1, density2; // Densidade Populacional
    float gdpPerCapita1, gdpPerCapita2; // PIB per Capita
    float superPower1, superPower2; // Super Poder

    // Variáveis para resultado das comparações (1 = carta 1 vence, 0 = carta 2 vence)
    int res_population, res_area, res_gdp, res_tourist, res_density, res_gdpPerCapita, res_superPower;

    // Cadastro da Carta 1
    printf("=== Cadastro de Cartas Super Trunfo - Cidades ===\n");

    printf("\nCarta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%3s", code1);
    printf("População: ");
    scanf("%lu", &population1);
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
    scanf("%lu", &population2);
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

    // Cálculo do Super Poder para cada carta
    // Super Poder = População + Área + PIB + Pontos turísticos + (1/Densidade) + PIB per Capita
    superPower1 = (float)population1 + area1 + gdp1 + (float)touristSpots1 + (1.0f/density1) + gdpPerCapita1;
    superPower2 = (float)population2 + area2 + gdp2 + (float)touristSpots2 + (1.0f/density2) + gdpPerCapita2;

    // Exibição dos dados das cartas cadastradas, incluindo os atributos calculados
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", code1);
    printf("População: %lu\n", population1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f milhões\n", gdp1);
    printf("Pontos turísticos: %d\n", touristSpots1);
    printf("Densidade Populacional: %.2f hab/km2\n", density1);
    printf("PIB per Capita: %.6f milhões/hab\n", gdpPerCapita1);
    printf("Super Poder: %.6f\n", superPower1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", code2);
    printf("População: %lu\n", population2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões\n", gdp2);
    printf("Pontos turísticos: %d\n", touristSpots2);
    printf("Densidade Populacional: %.2f hab/km2\n", density2);
    printf("PIB per Capita: %.6f milhões/hab\n", gdpPerCapita2);
    printf("Super Poder: %.6f\n", superPower2);

    // Comparação dos atributos entre as cartas
    // Para densidade populacional, vence o menor valor. Para os demais, vence o maior valor.

    // População: maior vence
    res_population = (population1 > population2) ? 1 : 0;
    // Área: maior vence
    res_area = (area1 > area2) ? 1 : 0;
    // PIB: maior vence
    res_gdp = (gdp1 > gdp2) ? 1 : 0;
    // Pontos turísticos: maior vence
    res_tourist = (touristSpots1 > touristSpots2) ? 1 : 0;
    // Densidade Populacional: menor vence
    res_density = (density1 < density2) ? 1 : 0;
    // PIB per Capita: maior vence
    res_gdpPerCapita = (gdpPerCapita1 > gdpPerCapita2) ? 1 : 0;
    // Super Poder: maior vence
    res_superPower = (superPower1 > superPower2) ? 1 : 0;

    // Exibição dos resultados das comparações
    printf("\n=== Comparação das Cartas ===\n");
    printf("População: %d\n", res_population);
    printf("Área: %d\n", res_area);
    printf("PIB: %d\n", res_gdp);
    printf("Pontos turísticos: %d\n", res_tourist);
    printf("Densidade Populacional (menor vence): %d\n", res_density);
    printf("PIB per Capita: %d\n", res_gdpPerCapita);
    printf("Super Poder: %d\n", res_superPower);

    return 0;
}
