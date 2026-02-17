#include <stdio.h>

int main() {

/*aqui estão as variáveis que armazenarão os valores de cada carta, as variáveis sem número no nome representam a carta 1, e as com número 2 representam a carta 2.*/

    char estado, estado2;
    char codigoCarta[4], codigoCarta2[4];    
    char cidade[30], cidade2[30];

    unsigned long int populacao, populacao2;
    float area, area2;              
    float PIB, PIB2;

    //operações matemáticas
    /*aqui estão as variáveis responsáveis por calcular a
     densidade populacional e o PIB per Capita*/
    float DensiPp;
    float PIBpC;

    float DensiPp2;
    float PIBpC2;

    int ptsturisticos, ptsturisticos2;
    float superPoder1, superPoder2;
     
    //apresentação e preenchimento da carta 1
     /*aqui o usuário será instruído a digitar o que se deve enviar para o programa*/
    printf("Para participar do jogo de Super Trunfo, digite o que se pede sobre as cartas: \n");
    
    printf("Carta 01:\n");
    
    printf("Digite uma letra entre A e H para definir o Estado da carta: \n");
    scanf("%c", &estado);

    printf("Agora o código da carta, inclua a letra que representa o Estado escolhido (ex: A01):\n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Qual a população desta cidade?: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões, ex: 1.5): \n");
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
    scanf(" %[^\n]", cidade2);

    printf("Qual a população desta cidade?: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões, ex: 1.5): \n");
    scanf("%f", &PIB2);

    printf("E por fim, digite quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &ptsturisticos2);

   //aqui as variáveis irão calcular a densidade populacional e o pib per capita da carta 1
    DensiPp = (float) populacao / area;
    PIBpC = (PIB * 1000000000) / (float)populacao;

    superPoder1 = (float)populacao + area + PIB + (float)ptsturisticos + PIBpC - DensiPp;

   //apresentação abaixo das cartas 1 e 2 que foram preenchidas
    printf("Carta 01:\n");
    printf("Estado: %c.\n", estado);
    printf("Código: %s.\n", codigoCarta);
    printf("Nome da Cidade: %s.\n", cidade);
    printf("População: %d.\n", populacao);
    printf("Área: %.2f km². \n", area);
    printf("PIB: %.2f Bilhões de reais. \n", PIB);
    printf("Número de Pontos Turísticos: %d.\n", ptsturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPp);
    printf("PIB per Capita: %.2f\n", PIBpC);

   //aqui as variáveis irão calcular a densidade populacional e o pib per capita da carta 2
    DensiPp2 = (float) populacao2 / area2;
    PIBpC2 = (PIB2 * 1000000000) / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + PIB2 + (float)ptsturisticos2 + PIBpC2 - DensiPp2;

    printf("Carta 02:\n");
    printf("Estado: %c.\n", estado2);
    printf("Código: %s.\n", codigoCarta2);
    printf("Nome da Cidade: %s.\n", cidade2);
    printf("População: %d.\n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: %.2f Bilhões de reais. \n", PIB2);
    printf("Número de Pontos Turísticos: %d.\n", ptsturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPp2);
    printf("PIB per Capita: %.2f\n", PIBpC2);

    printf("*** Comparação ***\n");
    printf("População: Carta %d venceu\n", 2 - (populacao > populacao2));
    printf("Área: Carta %d venceu\n", 2 - (area > area2));
    printf("PIB: Carta %d venceu\n", 2 - (PIB > PIB2));
    printf("Pontos Turísticos: %d venceu\n", 2 - (ptsturisticos > ptsturisticos2));
    printf("Densidade Populacional: %d venceu\n", 2 - (DensiPp < DensiPp2));
    printf("PIB per Capita: Carta %d venceu\n", 2 - (PIBpC > PIBpC2));
    printf("Super Poder: Carta %d venceu\n", 2 - (superPoder1 > superPoder2));

    return 0;

}