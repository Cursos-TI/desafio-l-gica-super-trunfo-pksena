#include <stdio.h>

int main() {
    
    char estado1[20], estado2[20];
    char cdc1[20], cdc2[20];
    char nome1[20], nome2[20];
    float populacao1, populacao2, area1, area2;
    float densidadepopulacional1, densidadepopulacional2,pibpercapita1,pibpercapita2;
    int pib1, pib2;
    int pt1, pt2;

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s",&estado1);

    printf("digite o codigo da carta: ");
    scanf("%s",&cdc1);

    printf("digite nome da cidade: ");
    scanf("%s", &nome1);
    
    printf("numero da população: ");
    scanf("%f", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%d", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pt1);

    printf("densidade populacional: %f\n",populacao1/area1);
    printf("PIB per capita: %f\n",pib1/populacao1);
    

    printf("Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s",&estado2);

    printf("digite o codigo da carta: ");
    scanf("%s",&cdc2);

    printf("digite nome da cidade: ");
    scanf("%s", &nome2);
    
    printf("numero da população: ");
    scanf("%f", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%d", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pt2);

    printf("densidade populacional: %f\n",populacao2/area2);
    printf("PIB per capita: %f\n",pib2/populacao2);
    

    printf("Carta 1:\n");

    printf("estado: %s\n",estado1);
    printf("Codigo da carta: %s\n",cdc1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %f\n",populacao1);
    printf("Área: %f\n",area1);
    printf("PIB: %d\n",pib1);
    printf("Ponto turisticos: %d",pt1);

    printf("Carta 2:\n");

    printf("estado: %s\n",estado2);
    printf("Codigo da carta: %s\n",cdc2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %f\n",populacao2);//Nao entendi porque a função float, quando coloco um "." no meio do numero, 80.000 por exemplo, aparece mais 3 zeros depois do numero
    printf("Área: %f\n",area2);
    printf("PIB: %d\n",pib2);
    printf("Ponto turisticos: %d\n",pt2);

    if(pib1/populacao1>pib2/populacao2){
    printf("a Carta 1 venceu com PIB per capita de %f",pib1/populacao1);}
    else if(pib1/populacao1<pib2/populacao2){
    printf("a Carte 2 venceu com PIB per capita de %f",pib2/populacao2);}
    else{
    printf("carta 1 e carta 2 empataram com PIB per capita igual");}