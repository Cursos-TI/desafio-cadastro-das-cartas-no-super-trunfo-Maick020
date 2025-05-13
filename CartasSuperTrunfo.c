#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
char codigo[5];
char estado[10]; 
int populacao;
float area;
float pib;
int pontostur;

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
scanf("%s", codigo);

printf("Carta 1 \n%s\n %d\n %f\n %f\n %d\n %d\n %s\n",estado , populacao,area,pib,pontostur,codigo);


    return 0;
}