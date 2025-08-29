#include <stdio.h> // Inclusão de biblioteca;

int main(){ // Declaração de início;

char estado1, codigodacarta1[04], nomedacidade1[50], estado2, codigodacarta2[04], nomedacidade2[50]; // Declaração variáveis "char";
int populacao1, pontosturisticos1, populacao2, pontosturisticos2; // Declaração variáveis "int";
float area1, pib1, area2, pib2; // Declaração variáveis "float";
                
                    
printf("Para a CARTA 1: \n \n"); // Exibe na tela o texto;

printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf("%c", &estado1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%d", &populacao1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o PIB (em bilhões de reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%i", &pontosturisticos1); // Lê e armazena os dados de entrada do usuário;

printf("\nPara a CARTA 2:\n\n"); // Exibe na tela o texto;
                                                                                        
printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf(" %c", &estado2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%d", &populacao2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o PIB (em bilhões de reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%i", &pontosturisticos2); // Lê e armazena os dados de entrada do usuário;

printf("\nSEGUEM AS INFORMAÇÕES DIGITADAS:\n \n"); // Exibe na tela o texto;

printf("Carta 1: \n"); // Exibe na tela o texto;
printf("Estado: %c \n", estado1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Código: %s \n", codigodacarta1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Nome da Cidade: %s \n", nomedacidade1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("População: %d \n", populacao1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Área: %.2f km² \n", area1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("PIB: %.2f bilhões de reais \n", pib1); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Número de Pontos Turísticos: %i \n \n", pontosturisticos1); //Exibe na tela o texto juntamente com o resultado da variável;

printf("Carta 2: \n"); // Exibe na tela o texto;
printf("Estado: %c \n", estado2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Código: %s \n", codigodacarta2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Nome da Cidade: %s \n", nomedacidade2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("População: %d \n", populacao2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Área: %.2f km² \n", area2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("PIB: %.2f bilhões de reais \n", pib2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Número de Pontos Turísticos: %i \n \n", pontosturisticos2); //Exibe na tela o texto juntamente com o resultado da variável;

return 0; // Declaração de fim com sucesso e sem erros.

}