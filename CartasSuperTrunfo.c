#include <stdio.h>

int main(){

    char carta1[] = "Carta 1";
    char codigo1[] = "C01";
    char cidade1[] = "Fortaleza";
    char estado1 = 'C';
    int populacao1 = 2430000;
    float pib1 = 65.16;
    float area1 = 312.353;
    int pontosturisticos1 = 61; 

    float densidadepopulacional1 = (float) populacao1/area1;
    float pibpercapita1 = (float) populacao1/pib1; 
    float inverso_densidade1 = 1.0f / (densidadepopulacional1 + 0.0001f);
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inverso_densidade1;
 

    scanf("%s", carta1);
    printf("Carta 1: \n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %c\n", estado1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.3f km² \n", area1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n");

    char carta2[] = "Carta 2";
    char codigo2[] = "E02";
    char cidade2[] = "Vitória";
    char estado2 = 'E';
    int populacao2 = 322869;
    float pib2 = 3.15;
    float area2 = 97.123;
    int pontosturisticos2 = 50; 
    
    float densidadepopulacional2 = (float) populacao2/area2;
    float pibpercapita2 = (float) populacao2/pib2; 
    float inverso_densidade2 = 1.0f / (densidadepopulacional2 + 0.0001f);
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inverso_densidade2;

 

    scanf("%s", carta2);
    printf("Carta 2: \n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %c\n", estado2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.3f km²\n", area2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    printf("Resultados da Comparação (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("PIB per capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Densidade Populacional: %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);
    printf("\n");
    
    int escolha1, escolha2;

    // --- Escolha do primeiro atributo ---
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - PIB per capita\n6 - Densidade Demográfica\nEscolha: ");
    scanf("%d", &escolha1);

    // --- Escolha do segundo atributo, sem repetir ---
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        if (escolha1 != 1) printf("1 - População\n");
        if (escolha1 != 2) printf("2 - Área\n");
        if (escolha1 != 3) printf("3 - PIB\n");
        if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
        if (escolha1 != 5) printf("5 - PIB per capita\n");
        if (escolha1 != 6) printf("6 - Densidade Demográfica\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == escolha1) {
            printf("Você escolheu o mesmo atributo! Escolha um diferente.\n");
        }
    } while (escolha2 == escolha1);

    // --- Determinar valores dos atributos selecionados ---
    float valor1_a1, valor2_a1, valor1_a2, valor2_a2;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_a1 = populacao1; valor2_a1 = populacao2; break;
        case 2: valor1_a1 = area1; valor2_a1 = area2; break;
        case 3: valor1_a1 = pib1; valor2_a1 = pib2; break;
        case 4: valor1_a1 = pontosturisticos1; valor2_a1 = pontosturisticos2; break;
        case 5: valor1_a1 = pibpercapita1; valor2_a1 = pibpercapita2; break;
        case 6: valor1_a1 = densidadepopulacional1; valor2_a1 = densidadepopulacional2; break;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor1_a2 = populacao1; valor2_a2 = populacao2; break;
        case 2: valor1_a2 = area1; valor2_a2 = area2; break;
        case 3: valor1_a2 = pib1; valor2_a2 = pib2; break;
        case 4: valor1_a2 = pontosturisticos1; valor2_a2 = pontosturisticos2; break;
        case 5: valor1_a2 = pibpercapita1; valor2_a2 = pibpercapita2; break;
        case 6: valor1_a2 = densidadepopulacional1; valor2_a2 = densidadepopulacional2; break;
    }

    // --- Lógica de comparação e soma ---
    float soma1 = valor1_a1 + valor1_a2;
    float soma2 = valor2_a1 + valor2_a2;

    printf("\n=== COMPARAÇÃO ===\n");
    printf("Cidades: %s (%s) vs %s (%s)\n", cidade1, codigo1, cidade2, codigo2);

    printf("\nAtributo 1 (%d): %.2f vs %.2f\n", escolha1, valor1_a1, valor2_a1);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", escolha2, valor1_a2, valor2_a2);

    printf("\nSoma dos atributos:\n");
    printf("- %s: %.2f\n", cidade1, soma1);
    printf("- %s: %.2f\n", cidade2, soma2);

    printf("\nResultado: ");
    if (soma1 > soma2) {
        printf("🏆 Vencedor: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("🏆 Vencedor: %s\n", cidade2);
    } else {
        printf("🤝 Empate!\n");
    }

    return 0;
}