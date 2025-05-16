#include <stdio.h>

int main() {
    char codigo[5], codigo2[5];
    char estado[10], estado2[10]; 
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontostur, pontostur2;

    // Carta 1
    printf("Qual é o estado:\n");
    scanf("%s", estado);

    printf("Qual é a população:\n");
    scanf("%d", &populacao);

    printf("Qual é a área:\n");
    scanf("%f", &area);

    printf("Qual é o PIB:\n");
    scanf("%f", &pib);

    printf("Qual é o número de pontos turísticos:\n");
    scanf("%d", &pontostur);

    printf("Qual é o código:\n");
    scanf("%s", codigo);

    float dp = populacao / area;
    float pibpc = pib / populacao;
    float densidadep = 1/dp;
    float superpoder = populacao + area + pib + pontostur + densidadep + pibpc;

    printf(" Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontostur);
    printf("Código: %s\n", codigo);
    printf("Densidade populacional: %.2f\n", dp);
    printf("PIB per capita: %.2f\n", pibpc);
    printf("Super poder: %.2f\n", superpoder);

    // Carta 2
    printf("\nQual é o estado 2:\n");
    scanf("%s", estado2);

    printf("Qual é a população 2:\n");
    scanf("%ld", &populacao2);

    printf("Qual é a área 2:\n");
    scanf("%f", &area2);

    printf("Qual é o PIB 2:\n");
    scanf("%f", &pib2);

    printf("Qual é o número de pontos turísticos 2:\n");
    scanf("%d", &pontostur2);

    printf("Qual é o código 2:\n");
    scanf("%s", codigo2);

    float dp2 = populacao2 / area2;
    float pibpc2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pontostur2 - dp2 + pibpc2;

    printf(" Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontostur2);
    printf("Código: %s\n", codigo2);
    printf("Densidade populacional: %.2f\n", dp2);
    printf("PIB per capita: %.2f\n", pibpc2);
    printf("Super poder: %.2f\n", superpoder2);

    //calculo
    
    int popv = populacao >= populacao2 ;
    int areav = area >= area2;
    int pibv = pib >= pib2;
    int ptv = pontostur >= pontostur2;
    int dpv = dp >= dp2;
    int pibpcv = pibpc >= pibpc2;
    int spv = superpoder >= superpoder2;

    printf("\na populacao 1 e maior que a 2? %d\n",popv);
    printf("a area 1 e maior que a area 2? %d\n",areav);
    printf("o pib 1 e maior que o pib 2? %d\n",pibv);
    printf("os pontos turisticos 1 e maior que os pontos turisticos 2? %d\n",ptv);
    printf("a densidade populacional 1 e maior que a densidade populacional 2? %d\n",dpv);
    printf("o pib percapta 1 e maior que o pib percapita 2? %d\n",pibpcv);
    printf("o super poder 1 e maior que o super poder 2? %d\n",spv);

   
    
    return 0;
}
