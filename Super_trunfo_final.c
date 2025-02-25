#include <stdio.h>

int main(){
    
      // CRIAÇÃO DAS VARIÁVEIS QUE VÃO RECEBER AS INFORMAÇÕES DAS CARTAS.
        
         //VARIÁVEIS PRIMEIRA CARTA.
         char estado1[30];
         char codigocarta1[30];
         char nomecidade1[30];
         int populacao1;
         int areakm1;
         float pib1;
         int numturisticos1;
         int densidadedemografica1;
         float pibpercapita1;
         long long int superpoder1;

         // VARIÁVEIS SEGUNDA CARTA.
        char estado2[30];
        char codigocarta2[30];
        char nomecidade2[30];
        int populacao2;
        int areakm2;
        float pib2;
        int numturisticos2;
        int densidadedemografica2;
        float pibpercapita2; 
        long long int superpoder2;
      
      // CRIAÇÃO DOS CÓDIGOS PARA CALCULAR A DENSIDADE POPULACIONAL, O PIB PER CAPITA E O SUPER PODER AUTOMATICAMENTE.

      pibpercapita1 = (float)pib1 / populacao1;
      densidadedemografica1 = populacao1 / areakm1;   // REFERENTE PRIMEIRA CARTA.

      pibpercapita2 = (float)pib2 / populacao2;
      densidadedemografica2 = populacao2 / areakm2; // REFERENTE A SEGUNDA CARTA.

      superpoder1 = (int)populacao1 + areakm1 + pib1 + numturisticos1 + densidadedemografica1 + pibpercapita1; // REFERENTE PRIMEIRA CARTA

      superpoder2 = (int)populacao2 + areakm2 + pib2 + numturisticos2 + densidadedemografica2 + pibpercapita2; // REFERENTE SEGUNDA CARTA

    printf("***** SUPER TRUNFO *******\n");
    printf("Escolha uma opção: \n");
    printf("1. Iniciar.\n");
    printf("2. Regras do Jogo.\n");
    printf("3. Sair do jogo.\n");
    printf("Opção: ");
    int opcao;
    scanf("%d", &opcao);
    
    
    switch (opcao)
    {
    case 1:

        // CRIAÇÃO DA ENTRADA DE DADOS (INFORMAÇÕES) DAS CARTAS.
        
        // PRIMEIRA CARTA.
         printf("Olá, seja bem vindo a criação das cartas do jogo. A seguir será solicitado informações que serão adicionadas a cada carta do jogo. Vamos começar! \n");
    
         printf("Primeiro, digite o estado: ");
         scanf("%s", estado1);

         printf("Agora digite o código da carta: ");
         scanf("%s", codigocarta1);

         printf("Agora digite o nome da cidade: ");
         scanf("%s", nomecidade1);
 
         printf("Agora digite a população: ");
         scanf("%d", &populacao1);

         printf("Agora digite a área em km²: ");
         scanf("%d", &areakm1);

         printf("Agora digite o pib: ");
         scanf("%f", &pib1);

         printf("Agora digite o número de pontos turísticos: ");
         scanf("%d", &numturisticos1);
    
         // SEGUNDA CARTA.
    
         printf("Agora vamos cadastrar a segunda carta!\n");
    
         printf("Primeiro, digite o estado: ");
         scanf("%s", estado2);

         printf("Agora digite o código da carta: ");
         scanf("%s", codigocarta2);

         printf("Agora digite o nome da cidade: ");
         scanf("%s", nomecidade2);

         printf("Agora digite a população: ");
         scanf("%d", &populacao2);

         printf("Agora digite a área em km²: ");
         scanf("%d", &areakm2);

         printf("Agora digite o pib: ");
         scanf("%f", &pib2);

         printf("Agora digite o número de pontos turísticos: ");
         scanf("%d", &numturisticos2);

         // IMPRIMINDO NA TELA OS DADOS DA PRIMEIRA CARTA CADASTRADA.
    
         printf("**** Dados da primeira carta cadastrada: ***** \n Estado: %s\n Código da carta: %s\n Nome da Cidade: %s\n População: %d\n Área em Km²: %d km²\n Pib: R$ %.2f\n Números Pontos Turísticos: %d\n", estado1, codigocarta1, nomecidade1, populacao1, areakm1, pib1, numturisticos1);
         printf(" Pib per capita: R$ %.2f\n", pibpercapita1);
         printf(" Densidade demográfica: %d Hab/km²\n", densidadedemografica1);
  
         // IMPRIMINDO NA TELA OS DADOS DA SEGUNDA CARTA CADASTRADA.
    
         printf("**** Dados da segunda carta cadastrada: ***** \n Estado: %s\n Código da carta: %s\n Nome da Cidade: %s\n População: %d\n Área em Km²: %d km²\n Pib: R$ %.2f\n Números Pontos Turísticos: %d\n", estado2, codigocarta2, nomecidade2, populacao2, areakm2, pib2, numturisticos2);
         printf(" Pib per capita: R$ %.2f\n", pibpercapita2);
         printf(" Densidade demográfica: %d Hab/km²\n", densidadedemografica2);
         
         // CÓDIGOS DA LÓGICA DO JOGO.
         
         int atributo;
         printf("Escolha um atributo para batalhar: \n");
         printf("1.-População\n");
         printf("2.-Área Km²\n");
         printf("3.-Pib\n");
         printf("4.-Números de pontos turísticos\n");
         printf("5.-Pib per capita\n");
         printf("6.-Densidade Demográfica\n");
         printf("7.-Super Poder\n");
         printf("Atributo: ");
         scanf("%d", &atributo);
         
         switch (atributo)
         {
         case 1:
               populacao1 > populacao2 ? printf("População da carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("População da carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break;
         
         case 2:
               areakm1 > areakm2 ? printf("Area km² da carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Area km² da carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break; 
         
         case 3:
               pib1 > pib2 ? printf("Pib da carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Pib da carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break; 
         
         case 4:
               numturisticos1 > numturisticos2 ? printf("Número de pontos turísticos da carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Número de pontos turísticos da carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break; 
         
         case 5:
               pibpercapita1 > pibpercapita2 ? printf("Pib da carta codigo %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Pib da carta codigo %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break;
         
         case 6:
               densidadedemografica1 > densidadedemografica2 ? printf("Carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break;      
         
         case 7:
               superpoder1 > superpoder2 ? printf("Super Poder da carta código %s %s foi a vencedora!", codigocarta1, nomecidade1) : printf("Super Poder da carta código %s %s foi a vencedora!", codigocarta2, nomecidade2);
               break;      

         
         default:
               printf("Opção Inválida.");
               break;
         }
         
         break;
    case 2:
         printf("Regras do jogo: \n");
         printf("- Escolha um atributo da carta para batalhar com o segundo jogador.\n");
         printf("- A carta com o maior valor será a vencedora.\n");
         printf("- Quando o atributo escolhido para a batalha for Densidade Populacional a carta vencedora será a de menor valor.\n");
         break;
    
    case 3:
         printf("Saindo do jogo...\n");
         break;
    
    default:
         printf("Opção Inválida.");
         break;
    }




    return 0;
}
