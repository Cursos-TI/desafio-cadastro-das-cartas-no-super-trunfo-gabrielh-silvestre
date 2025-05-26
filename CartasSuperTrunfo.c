#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char code1[4], code2[4];
    int population1, population2;
    float area1, area2;
    float gdp1, gdp2;
    int touristSpots1, touristSpots2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", code1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f milhões\n", gdp1);
    printf("Pontos turísticos: %d\n", touristSpots1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", code2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões\n", gdp2);
    printf("Pontos turísticos: %d\n", touristSpots2);

    return 0;
}
