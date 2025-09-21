#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade[50];
  char codigo[10];
  char estado;
  int populaçao, turismo; 
  float area, pib;
  
  // Área para entrada de dados
  printf("CARTA 01 \n");
  printf("Digite a letra do Estado:\n");
  scanf(" %c", &estado);

  printf("Digite o codigo da carta: \n");
  scanf("%s" , &codigo);

  printf("Digite o nome do Cidade: \n");
  scanf("%s" , &cidade);

  printf("Digite o número de habitantes: \n");
  scanf("%d" , &populaçao);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d" , &turismo);

  printf("Digite a área da Cidade (em km²): \n");
  scanf("%f" , &area);

  printf("Digite o PIB da Cidade: \n");
  scanf("%f" , &pib);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade2[50];
  char codigo2[10];
  char estado2;
  int populaçao2, turismo2;
  float area2, pib2;
  
  // Área para entrada de dados
  printf("CARTA 02 \n");
  printf("Digite a letra do Estado:\n");
  scanf(" %c", &estado2);

  printf("Digite o codigo da Carta: \n");
  scanf("%s", &codigo2);

  printf("Digite o nome do Cidade: \n");
  scanf("%s" , &cidade2);

  printf("Digite o número de habitantes: \n");
  scanf("%d" , &populaçao2);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d" , &turismo2);

  printf("Digite a área da Cidade (em km²): \n");
  scanf("%f" , &area2);

  printf("Digite o PIB da Cidade: \n");
  scanf("%f" , &pib2);
  
  // Área para exibição dos dados da cidade
  printf("CARTA 01 \n");
  printf("Estado: %c \n", estado);
  printf("Código da carta: %s \n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d \n", populaçao);
  printf("Área (em km²): %f \n", area);
  printf("PIB: %f \n", pib);
  printf("\n");

  printf("CARTA 02 \n");
  printf("Estado: %c \n", estado2);
  printf("Código da Carta: %s \n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d \n", populaçao2);
  printf("Área (em km²): %f \n", area2);
  printf("PIB: %f \n", pib2);

return 0;
} 