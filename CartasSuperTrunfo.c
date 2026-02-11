#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigoCarta[4], codigoCarta2[4];    
    char cidade[30], cidade2[30];

    int populacao, populacao2;
    float area, area2;              
    float PIB, PIB2;

    int ptsturisticos, ptsturisticos2;

  // Área para entrada de dados

    printf("Para participar do jogo de Super Trunfo, digite o que se pede sobre as cartas: \n");
    
    printf("Carta 01:\n");
    
    printf("Digite uma letra entre A e H para definir o Estado da carta: \n");
    scanf("%c", &estado);

    printf("Agora o código da carta, inclua a letra que representa o Estado escolhido (ex: A01):\n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade);

    printf("Qual a população desta cidade?: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Agora digite o Produto Interno bruto da cidade (PIB): \n");
    scanf("%f", &PIB);

    printf("E por fim, digite quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &ptsturisticos);

       //preenchimento da carta 2 abaixo
         /*aqui o usuário será instruído a digitar o que se deve enviar para o programa*/

    printf("Agora você deve preencher os dados da carta 2: \n");

    printf("Carta 02:\n");

    printf("Digite uma letra entre A e H para definir o Estado da carta: \n");
    scanf(" %c", &estado2);

    printf("Agora o código do da carta, inclua a letra que representa o Estado escolhido (ex: B01):\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Qual a população desta cidade?: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Agora digite o Produto Interno bruto da cidade (PIB): \n");
    scanf("%f", &PIB2);

    printf("E por fim, digite quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &ptsturisticos2);
     
    // Área para exibição dos dados da cidade
    //apresentação abaixo das cartas 1 e 2 que foram preenchidas
    printf("Carta 01:\n");
    printf("Estado: %c.\n", estado);
    printf("Código: %s.\n", codigoCarta);
    printf("Nome da Cidade: %s.\n", cidade);
    printf("População: %d.\n", populacao);
    printf("Área: %.2f km². \n", area);
    printf("PIB: %.2f Bilhões de reais. \n", PIB);
    printf("Número de Pontos Turísticos: %d.\n", ptsturisticos);

    printf("Carta 02:\n");
    printf("Estado: %c.\n", estado2);
    printf("Código: %s.\n", codigoCarta2);
    printf("Nome da Cidade: %s.\n", cidade2);
    printf("População: %d.\n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: %.2f Bilhões de reais. \n", PIB2);
    printf("Número de Pontos Turísticos: %d.\n", ptsturisticos2);

return 0;
} 
