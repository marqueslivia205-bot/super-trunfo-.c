#include <stdio.h>


int main() {
    //declaração das variaveis
// Carta 1 - Belo Horizonte
 char estado1 = 'A';
 char codigo1[4] = "A01";
 char cidade1[50] = "Belo Horizonte";
 long unsigned int populacao1 = 2315560;  // aprox. 2,3 milhões
 float area1 = 331.354;      // km²
 float pib1 = 105.00;       // bilhões
 int pontos_turisticos1  = 15;


 // Cálculos da carta1
float densidade_populacao1 = (float)populacao1 / area1;
float per_capita1 = (pib1 * 1000000000) / populacao1 / 1000;
//multiplicamos por 1 bilhao porque o PIB foi informado em bilhoes
float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + per_capita1 + 1.0 / densidade_populacao1;



// Carta 2 - Rio de Janeiro
 char estado2 = 'B';
 char codigo2[4] = "B02";
 char cidade2[50] = "Rio de Janeiro";
 long unsigned int populacao2 = 5556000;  // aprox. 5,56 milhões
 float area2 = 1200.20;     // km²
 float pib2 =359.60;       // bilhões
 int pontos_turisticos2 = 25;

    // Cálculos da carta2
float densidade_populacao2 = (float)populacao2 / area2;
float per_capita2 = (pib2 * 1000000000) / populacao2 / 1000;
//multiplicamos por 1 bilhao porque o PIB foi informado em bilhoes
float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + per_capita2 + 1.0 / densidade_populacao2;

// Exibição das cartas
 printf("\n===== CARTAS DO SUPER TRUNFO =====\n");

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacao1);
  printf("PIB per capita: %.2f mil\n", per_capita1);
  printf("Super Poder: %.2f\n", super_poder1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacao2);
  printf("PIB per capita: %.2f mil\n", per_capita2);
  printf("Super Poder: %.2f\n", super_poder2);

  //=== comparação == 

  printf("\n=== comparacao de cartas == \n");
  printf("populacao: carta1 venceu (%d)\n", (populacao1>populacao2)?1:0);
  printf("area: carta2 venceu (%d)\n", (area1<area2)?1:0);
  printf("pib: carta2 venceu (%d)\n", (pib1<pib2)?1:0);
  printf("pontos turisticos: carta2 venceu (%d)\n", (pontos_turisticos1<pontos_turisticos2)?1:0);
  printf("pib per capita: carta2 venceu (%d)\n", (per_capita1<per_capita2)?1:0);
  printf("densidade populacional: carta1 venceu (%d)\n", (densidade_populacao1<densidade_populacao2)?1:0);
  printf("super poder: carta2 venceu (%d)\n", (super_poder1<super_poder2)?1:0);

  return 0;
}
