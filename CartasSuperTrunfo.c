#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
char codigo[5] , codigo2[5] ;
char estado[10], estado2[10] ; 
int populacao, populacao2 ;
float area , area2;
float pib, pib2;
int pontostur, pontostur2;
int dp = area / populacao;

printf("qual e o estado:\n");
scanf("%s", &estado);

printf("qual e populaçao:\n");
scanf("%d", &populacao);

printf("quala a area:\n");
scanf("%f", &area);

printf("qual o pib:\n");
scanf("%f", &pib);

printf("qual e o numero de pontos turisticos:\n");
scanf("%d", &pontostur);

printf("qual e o codigo\n");
scanf("%s\n", &codigo);


printf("Carta 1 \n estado:%s\n populaçao:%d\n area:%f\n pib:%f\n pontos turisticos:%d\n codigo:%s\n dp:%d\n ",estado,populacao,area,pib,pontostur,codigo,dp);


//printf("qual e o  estado 2:\n");
//scanf("%s", &estado2);

//printf("qual e a   populaçao 2:\n");
//scanf("%d", &populacao2);

//printf("quala a area 2:\n");
//scanf("%f", &area2);

//printf("qual o  pib 2:\n");
//scanf("%f", &pib2);

//printf("qual e o numero de pontos turisticos 2:\n");
//scanf("%d", &pontostur);

//printf("qual e o codigo 2:\n");
//scanf("%s", codigo);

//printf("Carta 2 \n%s\n %d\n %f\n %f\n %d\n %d\n %s\n",estado2 , populacao2,area2,pib2,pontostur2,codigo2);

    return 0;
}