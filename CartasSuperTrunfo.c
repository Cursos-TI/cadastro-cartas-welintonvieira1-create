#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[50],estado2[50];
    char codigo1[50],codigo2[50];
    char nome1[50],nome2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosturisticos1,pontosturisticos2;
  // Área para entrada de dados
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", estado1);  
   
    printf("Digite o codigo do primeiro estado: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade do primeiro estado: \n");
    scanf("%s", nome1);

    printf("Digite a populacao do primeiro estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a area do primeiro estado: \n");
    scanf("%f", &area1);

    printf("Digite o pib do primeiro estado: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos do primeiro estado: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite o nome do segundo estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo do segundo estado: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade do segundo estado: \n");
    scanf("%s", nome2);

    printf("Digite a populacao do segundo estado: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a area do segundo estado: \n");
    scanf("%f", &area2);

    printf("Digite o pib do segundo estado: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos do segundo estado: \n");
    scanf("%d", &pontosturisticos2);
  // Área para exibição dos dados da cidade
    printf("Dados do primeiro estado:\n");
    printf("Nome: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f KM\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("Dados do segundo estado:\n");
    printf("Nome: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f KM\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
  

return 0;
} 
