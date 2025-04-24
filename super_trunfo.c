#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Cadastro Carta 1:
    char Estado1[30]; //estado: Sergipe
    char CodigoCarta1[30]; //codigo carta:A01
    char Cidade1[30]; //cidade: Aracaju
    int Populacao1;//populacao:602.757
    float Areakm2carta1;//area: 182,163
    float PIB1;//pib: 16.447 bilhoes
    int PontosTuristicos1; //pontos turisticos: 32
    float Densidadepopulacional1; // Populacao/Areakm2
    float PIBpercapita1; // PIB/Populacao

    
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
    char estado2[30]; //estado: Pernambuco
    char codigoCarta2[30]; //codigo carta:B01
    char cidade2[30]; // cidade:Recife
    int populacao2; //população:1.488.920
    float areakm2carta2; //area:218,843
    float pib2; // pib:54.970 milhões
    int pontosTuristicos2; //pontos turisticos:50
    float densidadepopulacional2; // populacao/areakm2
    float pibpercapita2; // pib/populacao
    
    
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
    printf("PIB Carta 2: %.3f milhões de reais\n", pib2);
    printf("Pontos Turisticos Carta 2: %d\n", pontosTuristicos2);
    printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita Carta 2: %.2f reais\n", pibpercapita2);

    //Comparação entre as cartas 1 e 2

    printf("COMPARAÇÃO (ATRIBUTO: AREA EM KM²)\n");

    printf("CARTA 1 - Aracaju (SE): 182.163 km²\n");
    printf("CARTA 2 - Recife (PE): 218.843 km²\n");
    
    if (Areakm2carta1 > areakm2carta2){
        printf("Carta 1 %s venceu!\n", Cidade1);
    }else {
        printf("Carta 2 %s venceu!\n", cidade2);
    }




    return 0;
} 
 