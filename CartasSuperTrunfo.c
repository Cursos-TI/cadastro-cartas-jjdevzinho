#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1;
  char codigo1[5];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Carta 2
  char estado2;
  char codigo2[5];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados - Carta 1
  printf("=== CADASTRO DA CARTA 1 ===\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta (formato: A01 a H04): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);
  printf("\n");

  // Área para entrada de dados - Carta 2
  printf("=== CADASTRO DA CARTA 2 ===\n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (formato: A01 a H04): ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2); // Usando " %49[^\n]" para ler strings com espaços
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área (em km²): ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);
  printf("\n");

  // Área para exibição dos dados das cidades
  printf("\n=== EXIBIÇÃO DOS DADOS ===\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}