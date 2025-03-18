#include <stdio.h>

int main() {

    //carta 1
    // declara uma variavel para armazenar uma letra
   char estado1;
   // Código da carta (ex: "A01") -> 3 caracteres + 1 nulo '\0'
   char codigo1 [4];
   // Nome da cidade (espaço para até 49 caracteres + '\0')
   char cidade1 [50];
    // Número de habitantes
   int populacao1;
   // Área em km²
   float area1;
   // PIB da cidade
   float pib1;
   // Número de pontos turísticos
   int pontos1;

   // Carta 2
char estado2;
char codigo2[4];      
char cidade2[50];     
int populacao2;
float area2;
float pib2;
int pontos2;

printf("Vamos começar seu jogo de super trunfo?\n");
printf("Para iniciarmos vamos fazer o cadastro de suas cartas\n");

printf("carta 1\n");
printf("Digite uma letra de A a H para o primeiro estado:\n");
scanf(" %c", &estado1);

printf("Digite um codigo de 01 a 04 para a carta:\n");
scanf(" %s", codigo1);

printf("O codigo de sua carta é: %c%s\n", estado1, codigo1);

printf("Digite o nome da cidade para este estado:\n");
scanf("%s", cidade1);

printf("Qual a população da cidade: %s\n", cidade1);
scanf("%d", &populacao1);

printf("Qual a area da cidade: %s\n", cidade1);
scanf("%f", &area1);

printf("Qual o PIB da cidade: %s\n", cidade1);
scanf("%f", &pib1);

printf("Quantos potos turisticos tem a cidade: %s\n", cidade1);
scanf("%d", &pontos1);

printf("CARTA 1:\n");
printf("Codigo da carta: %c%s\n", estado1, codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Sua população: %d\n", populacao1);
printf("Sua area: %.2f km²\n", area1);
printf("Seu PIB: %.2f Bilhões\n", pib1);
printf("Quantidade de postos turisticos: %d\n\n", pontos1);


printf("PARABENS VOCE ADICIONOU SUA PRIMEIRA CARTA\n\n");


printf("carta 2\n");
printf("Digite uma letra de A a H para o segundo estado:\n");
scanf(" %c", &estado2);

printf("Digite um codigo de 01 a 04 para a carta:\n");
scanf(" %s", codigo2);

printf("O codigo de sua carta é: %c%s\n", estado2, codigo2);

printf("Digite o nome da cidade para este estado:\n");
scanf("%s", cidade2);

printf("Qual a população da cidade: %s\n", cidade2);
scanf("%d", &populacao2);

printf("Qual a area da cidade: %s\n", cidade2);
scanf("%f", &area2);

printf("Qual o PIB da cidade: %s\n", cidade2);
scanf("%f", &pib2);

printf("Quantos potos turisticos tem a cidade: %s\n", cidade2);
scanf("%d", &pontos2);

printf("CARTA 2:\n");
printf("Codigo da carta: %c%s\n", estado2, codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Sua população: %d\n", populacao2);
printf("Sua area: %.2f km²\n", area2);
printf("Seu PIB: %.2f Bilhões\n", pib2);
printf("Quantidade de postos turisticos: %d\n\n", pontos2);


printf("PARABENS VOCE ADICIONOU SUA SEGUNDA CARTA");


return 0;
}