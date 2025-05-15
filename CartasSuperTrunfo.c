#include <stdio.h>

int main() {
char codigo[5] , codigo2[5] ;
char estado[10], estado2[10] ; 
int populacao, populacao2 ;
int area , area2;
float pib, pib2;
int pontostur, pontostur2;

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

float dp = populacao / area;
float pibpc = pib / populacao ;
float superpoder = estado + populacao + area + pib + pontostur + codigo - dp + pibpc ;

printf("Carta 1 \n estado:%s\n populaçao:%d\n area:d\n pib:%.2f\n pontos turisticos:%d\n codigo:%s\n densidade populacional:%.2f\n pib percapita:%.2f\n super poder:%f\n ", estado,populacao,area,pib,pontostur,codigo,dp,pibpc,superpoder);


// carta 2

printf("qual e o estado 2:\n");
scanf("%s", &estado2);

printf("qual e a   populaçao 2:\n");
scanf("%d", &populacao2);

printf("quala a area 2:\n");
scanf("%f", &area2);

printf("qual o  pib 2:\n");
scanf("%f", &pib2);

printf("qual e o numero de pontos turisticos 2:\n");
scanf("%d", &pontostur);

printf("qual e o codigo 2:\n");
scanf("%s", codigo);

float dp2 = populacao2 / area2;
float pibpc2 = pib2 / populacao2 ;
float superpoder2= estado2 + populacao2 + area2 + pib2 + pontostur2 + codigo2 - dp2 + pibpc2 ;

printf("Carta 2 \n estado:%s\n populaçao:%d\n area:%.2f\n pib:%,2f\n pontos turisticos:%d\n codigo:%s\n densidade populacional:%f\n pib percapita:%f\n super poder:%f\n ",estado2 , populacao2,area2,pib2,pontostur2,codigo2,dp2,pibpc2,superpoder2);
 










 return 0;

}