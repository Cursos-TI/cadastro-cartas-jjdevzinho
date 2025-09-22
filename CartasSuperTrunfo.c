#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Criar um programa que permita ao usuário inserir os dados de duas cartas do Super Trunfo
// Para cada carta: Estado (A-H), Código (A01-H04), Nome da Cidade, População, Área, PIB e Pontos Turísticos

// Enum para estados válidos
enum Estados
{
  ESTADO_A = 'A',
  ESTADO_B = 'B',
  ESTADO_C = 'C',
  ESTADO_D = 'D',
  ESTADO_E = 'E',
  ESTADO_F = 'F',
  ESTADO_G = 'G',
  ESTADO_H = 'H'
};

// Função para validar se o estado é válido
int validarEstado(char estado)
{
  return (estado >= 'A' && estado <= 'H');
}

int main()
{
// Exemplo de saída
// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50

// Área para definição das variáveis para armazenar as propriedades das cidades
#define TOTAL_DE_CARTAS 2
  struct Carta
  {
    char estado;
    char codigo[4];
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
  };

  struct Carta cartas[TOTAL_DE_CARTAS];

  // Área para entrada de dados
  for (int i = 0; i < TOTAL_DE_CARTAS; i++)
  {
    printf("=== CARTA %d ===\n", i + 1);
    
    // Validação do estado
    do
    {
      printf("Digite o estado (A-H): ");
      scanf(" %c", &cartas[i].estado);

      if (!validarEstado(cartas[i].estado))
      {
        printf("Estado inválido! Digite uma letra de A a H.\n");
      }
    } while (!validarEstado(cartas[i].estado));

    // Validação do código da carta
    do
    {
      printf("Digite o código da carta (formato: A01 a H04): ");
      scanf(" %3s", cartas[i].codigo);

      // Verificar se o código tem exatamente 3 caracteres
      if (strlen(cartas[i].codigo) != 3)
      {
        printf("Código inválido! Use o formato: letra do estado (A-H) + número (01-04).\n");
        continue;
      }

      // Verificar se a primeira letra é um estado válido (A-H)
      if (!validarEstado(cartas[i].codigo[0]))
      {
        printf("Estado inválido no código! Use uma letra de A a H.\n");
        continue;
      }

      // Verificar se os dois últimos caracteres formam um número de 01 a 04
      char numeroStr[3];
      numeroStr[0] = cartas[i].codigo[1];
      numeroStr[1] = cartas[i].codigo[2];
      numeroStr[2] = '\0';
      
      int numero = atoi(numeroStr);
      if (numero < 1 || numero > 4)
      {
        printf("Número inválido! Use um número de 01 a 04.\n");
        continue;
      }

      break;
    } while (1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", cartas[i].nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &cartas[i].populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &cartas[i].area);

    printf("Digite o PIB: ");
    scanf("%f", &cartas[i].pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cartas[i].pontosTuristicos);

    printf("\n");
  }

  // Área para exibição dos dados da cidade
  for (int i = 0; i < TOTAL_DE_CARTAS; i++)
  {
    printf("Carta %d:\n", i + 1);
    printf("Estado: %c\n", cartas[i].estado);
    printf("Código: %s\n", cartas[i].codigo);
    printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
    printf("População: %d\n", cartas[i].populacao);
    printf("Área: %.2f km²\n", cartas[i].area);
    printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    printf("\n");
  }

  return 0;
}
