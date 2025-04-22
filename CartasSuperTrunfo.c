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




















    return 0;
}
