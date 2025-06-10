#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Cadastro Carta 1:
    char Estado1[30], estado2[30]; //
    char CodigoCarta1[30], codigoCarta2[30]; //
    char Cidade1[30], cidade2[30]; //
    int Populacao1, populacao2;//
    float Areakm2carta1, areakm2carta2;
    float PIB1, pib2;//
    int PontosTuristicos1, pontosTuristicos2; //
    float Densidadepopulacional1, densidadepopulacional2; // 
    float PIBpercapita1, pibpercapita2; //

    
    //Solicita ao usuario que insira o nome do Estado da primeira carta
    printf("Estado: \n");
    scanf(" %s", Estado1);

    //Solicita ao usuario que insira o codigo da primeira carta
    printf("Codigo da Carta: \n");
    scanf("%s", CodigoCarta1);

    //Solicita ao usuario que insira o nome da cidade do estado escolhido da primeira carta
    printf("Nome da Cidade: \n");
    scanf("%s", Cidade1);

    //Solicita ao usuario que insira a quantidade da população do local escolhido da primeira carta
    printf("População: \n");
    scanf("%d", &Populacao1);

    //Solicita ao usuario que insira a area do local escolhido em km² da primeira carta
    printf("Area em km²: \n");
    scanf("%f", &Areakm2carta1);

    //Solicita ao usuario que insira o PIB do local escolhido da primeira carta
    printf("PIB: \n");
    scanf("%f", &PIB1);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da primeira carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    //Operação aritmetica realizada para calcular a densidade populacional da primeira carta
    Densidadepopulacional1 = Populacao1 / Areakm2carta1;

    //Operação aritmetica realizada para calcular o PIB per Capita da primeira carta
    PIBpercapita1 = (PIB1 * 1000000000) / Populacao1;
   

    //Impressão das informações colocadas pelo usuario
    printf("*** Cadastro Carta 1 ***\n");
    printf("Estado Carta 1: %s\n", Estado1);
    printf("Codigo da Carta 1: %s\n", CodigoCarta1);
    printf("Nome da Cidade Carta 1: %s\n", Cidade1);
    printf("População Carta 1: %d\n", Populacao1);
    printf("Area em km² Carta 1: %.2f km²\n", Areakm2carta1);
    printf("PIB Carta 1: %.3f bilhões de reais\n", PIB1);
    printf("Pontos Turisticos Carta 1: %d\n", PontosTuristicos1);
    printf("Densidade Populacional Carta 1: %.2f hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita Carta 1: %.2f reais\n", PIBpercapita1);


    //-------------------------------------------------------------

    // Cadastro Carta 2:
    
    //Solicita ao usuario que insira o nome do Estado da segunda carta
    printf("Estado: \n");
    scanf(" %s", estado2);

    //Solicita ao usuario que insira o codigo da segunda carta
    printf("Codigo da Carta: \n");
    scanf("%s", codigoCarta2);

    //Solicita ao usuario que insira o nome da cidade do estado escolhido da segunda carta
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    //Solicita ao usuario que insira a quantidade da população do local escolhido da segunda carta
    printf("População: \n");
    scanf("%d", &populacao2);

    //Solicita ao usuario que insira a area do local escolhido em km² da segunda carta
    printf("Area em km²: \n");
    scanf("%f", &areakm2carta2);

    //Solicita ao usuario que insira o PIB do local escolhido da segunda carta
    printf("PIB: \n");
    scanf("%f", &pib2);

    //Solicita ao usuario que insira o numero de pontos turisticos do local escolhido da segunda carta
    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

     //Operação aritmetica realizada para calcular a densidade populacional da primeira carta
  
     densidadepopulacional2 = populacao2 / areakm2carta2;

 
     //Operação aritmetica realizada para calcular o PIB per Capita da primeira carta
    
     pibpercapita2 = (pib2 * 1000000000) / populacao2;

   
    //Solicita que o usuario coloque as informações necessarias da segunda carta
    printf("*** Cadastro Carta 2 ***\n");
    printf("Estado Carta 2: %s\n", estado2);
    printf("Codigo da Carta 2: %s\n", codigoCarta2);
    printf("Nome da Cidade Carta 2: %s\n", cidade2);
    printf("População Carta 2: %d\n", populacao2);
    printf("Area em km² Carta 2: %.2f km²\n", areakm2carta2);
    printf("PIB Carta 2: %.3f bilhões de reais\n", pib2);
    printf("Pontos Turisticos Carta 2: %d\n", pontosTuristicos2);
    printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita Carta 2: %.2f reais\n", pibpercapita2);

    //Comparação entre as cartas 1 e 2

    printf("COMPARAÇÃO (ATRIBUTO: AREA EM KM²)\n");

    printf("CARTA 1 - %s (%.3f km²)\n", Cidade1, Areakm2carta1);
    printf("CARTA 2 - %s (%.3f km²)\n", cidade2, areakm2carta2);
    
    if (Areakm2carta1 > areakm2carta2){
        printf("Cidade 1 %s tem maior área.\n", Cidade1);
    }else {
        printf("Cidade 2 %s tem maior área.\n", cidade2);
    }

    int escolhaAtributo;

    printf("*** COMPARANDO ATRIBUTOS  ***\n");
    printf("Escolha uma opção: \n");
    printf("1. População\n");
    printf("2. Área \n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo);


switch (escolhaAtributo){
case 1:
    printf("Atributo: População\n");
if (Populacao1 > populacao2)
    printf("Vencedor: %s\n", Cidade1);
else if (Populacao1 < populacao2)
    printf("Vencedor: %s\n", cidade2);
else
    printf("Empate!\n");
    break;
case 2:
    printf("Atributo: Área\n");
if (Areakm2carta1 > areakm2carta2)
    printf("Vencedor: %s\n", Cidade1);
else if (Areakm2carta1 < areakm2carta2)
    printf("Vencedor: %s\n", cidade2);
else
    printf("Empate!\n");
    break;
case 3:
    printf("Atributo: PIB\n");
if (PIB1 > pib2)
    printf("Vencedor: %s\n", Cidade1);
else if (PIB1 < pib2)
    printf("Vencedor: %s\n", cidade2);
else
    printf("Empate!\n");
    break;
case 4:
    printf("Atributo: Pontos Turisticos\n");
if (PontosTuristicos1 > pontosTuristicos2)
    printf("Vencedor: %s\n", Cidade1);
else if (PontosTuristicos1 < pontosTuristicos2)
    printf("Vencedor: %s\n", cidade2);
else
    printf("Empate!\n");
    break;
case 5:
    printf("Atributo: Densidade Populacional\n");
if (Densidadepopulacional1 < densidadepopulacional2)
    printf("Vencedor: %s\n", Cidade1);
else if (Densidadepopulacional1 > densidadepopulacional2)
    printf("Vencedor: %s\n", cidade2);
else
    printf("Empate!\n");
    break;    
default:
    printf("Opção inválida\n");
    break;
}

   

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    printf("Bem-vindo a comparação de atributos!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("H. População\n");
    printf("A. Area\n");
    printf("P. PIB\n");
    printf("T. Pontos Turisticos\n");
    printf("D. Densidade populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

switch (primeiroAtributo)
{
case 'H':
case 'h':
    printf("Voce escolheu a opção População!\n");
    resultado1 = Populacao1 > populacao2 ? 1:0;
    break;
case 'A':
case 'a':
        printf("Voce escolheu a opção Área!\n");
        resultado1 = Areakm2carta1 > areakm2carta2 ? 1:0;
        break;
case 'P':
case 'p':
        printf("Voce escolheu a opção PIB!\n");
        resultado1 = PIB1 > pib2? 1:0;
        break;
case 'T':
case 't':
        printf("Voce escolheu a opção Pontos Turisticos!\n");
        resultado1 = PontosTuristicos1 > pontosTuristicos2? 1:0;
        break;
case 'D':
case 'd':
        printf("Voce escolheu a opção Densidade Populacional!\n");
        resultado1 = Densidadepopulacional1 < densidadepopulacional2? 1:0;
        break;
default:
    printf("Opção invalida!\n");
    break;
}

    printf("Escolha o segundo atributo.\n");
    printf("H. População\n");
    printf("A. Area\n");
    printf("P. PIB\n");
    printf("T. Pontos Turisticos\n");
    printf("D. Densidade populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

if (primeiroAtributo == segundoAtributo)
{
    printf("Voce escolheu o mesmo atributo!\n");
} else 

    switch (segundoAtributo)
    {
    case 'H':
    case 'h':
        printf("Voce escolheu a opção População!\n");
        resultado2 = Populacao1 > populacao2 ? 1:0;
        break;
    case 'A':
    case 'a':
            printf("Voce escolheu a opção Área!\n");
            resultado2 = Areakm2carta1 > areakm2carta2 ? 1:0;
            break;
    case 'P':
    case 'p':
            printf("Voce escolheu a opção PIB!\n");
            resultado2 = PIB1 > pib2? 1:0;
            break;
    case 'T':
    case 't':
            printf("Voce escolheu a opção Pontos Turisticos!\n");
            resultado2 = PontosTuristicos1 > pontosTuristicos2? 1:0;
            break;
    case 'D':
    case 'd':
            printf("Voce escolheu a opção Densidade Populacional!\n");
            resultado2 = Densidadepopulacional1 < densidadepopulacional2? 1:0;
            break;
    default:
        printf("Opção invalida!\n");
        break;
    }


    if (resultado1 == 1 && resultado2 == 1) {
        printf("Carta vencedora: %s\n", Cidade1);
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Carta vencedora: %s\n", cidade2);
    } else {
        printf("Resultado: Empate.\n");
    }

    return 0;
}