#include <stdio.h>

/**
 * Desafio: Nível Novato - Comparando Cartas do Super Trunfo
 * 
 * Este programa permite o cadastro de duas cartas de cidades para o jogo Super Trunfo e
 * realiza a comparação entre elas baseada em um único atributo (População).
 * 
 * Atributos: Estado, Código da Carta, Nome da Cidade, População, Área, PIB, Pontos Turísticos.
 * Cálculos: Densidade Populacional (População / Área) e PIB per capita (PIB / População).
 */

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[50], codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração de variáveis para a Carta 2
    char estado2[50], codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); // Lê a string incluindo espaços
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2); // Lê a string incluindo espaços
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // --- Exibição dos Dados e Comparação ---
    // Atributo escolhido para comparação: POPULAÇÃO
    // Obs: A escolha do atributo é feita diretamente no código, conforme os requisitos.
    
    printf("\n========================================\n");
    printf("   COMPARAÇÃO DE CARTAS (Atributo: População)\n");
    printf("========================================\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
    printf("----------------------------------------\n");

    /**
     * Lógica de Decisão: Para o atributo População, a carta com o maior valor vence.
     * Estamos utilizando a estrutura if-else para realizar essa comparação.
     */
    if (populacao1 > populacao2) {
        printf("Resultado: CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("Resultado: EMPATE!\n");
    }
    printf("========================================\n");

    // Exibindo os cálculos adicionais solicitados no desafio
    printf("\nValores calculados para referência:\n");
    printf("Carta 1 [%s]: Densidade Populacional = %.2f hab/km², PIB per Capita = %.2f\n", cidade1, densidade1, pib_per_capita1);
    printf("Carta 2 [%s]: Densidade Populacional = %.2f hab/km², PIB per Capita = %.2f\n", cidade2, densidade2, pib_per_capita2);

    return 0;
}
