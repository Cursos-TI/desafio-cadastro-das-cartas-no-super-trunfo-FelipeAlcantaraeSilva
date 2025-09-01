#include <stdio.h> // Inclusão de biblioteca;

int main(){ // Declaração de início;

char estado1, codigodacarta1, nomedacidade1, estado2, codigodacarta2, nomedacidade2; // Declaração variáveis "char";
int pontosturisticos1, pontosturisticos2; // Declaração variáveis "int";
float area1, densidadepopulacional1, area2, densidadepopulacional2, pib1, percapita1, pib2, percapita2, superpoder1, superpoder2; // Declaração variáveis "float";
unsigned long int populacao1, populacao2; // Declaração variáveis "unsigned long int";

printf("Para a CARTA 1: \n \n"); // Exibe na tela o texto;

printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf("%c", &estado1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%u", &populacao1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area1); // Lê e armazena os dados de entrada do usuário;
densidadepopulacional1=populacao1/area1; // "Densidade Populacional"; i.e., População / Área;

printf("Digite o PIB (em reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib1); // Lê e armazena os dados de entrada do usuário;
percapita1=pib1/populacao1; // "PIB per Capita"; i.e., PIB / População;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%d", &pontosturisticos1); // Lê e armazena os dados de entrada do usuário;

superpoder1 = populacao1 + area1 + pib1 + percapita1 + pontosturisticos1 + (1/densidadepopulacional1); // "Superpoder"; i.e., soma dos atributos + inverso da densidade populacional;

printf("\nPara a CARTA 2:\n\n"); // Exibe na tela o texto;
                                                                                        
printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf(" %c", &estado2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%u", &populacao2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area2); // Lê e armazena os dados de entrada do usuário;
densidadepopulacional2=populacao2/area2; // "Densidade Populacional"; i.e., População / Área;

printf("Digite o PIB (em reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib2); // Lê e armazena os dados de entrada do usuário;
percapita2=pib2/populacao2; // "PIB per Capita"; i.e., PIB / População;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%d", &pontosturisticos2); // Lê e armazena os dados de entrada do usuário;

superpoder2 = populacao2 + area2 + pib2 + percapita2 + pontosturisticos2 + (1/densidadepopulacional2); // "Superpoder"; i.e., soma dos atributos + inverso da densidade populacional;

printf("\nComparação de Cartas:\n \n"); // Exibe na tela o texto;

printf("População: Carta 1 venceu (%u) \n", populacao1 > populacao2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Área: Carta 1 venceu (%u) \n", area1 > area2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("PIB: Carta 1 venceu (%u) \n", pib1 > pib2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Pontos Turísticos: Carta 1 venceu (%d) \n", pontosturisticos1 > pontosturisticos2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Densidade Populacional: Carta 1 venceu (%u) \n", densidadepopulacional1 < densidadepopulacional2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("PIB per Capita: Carta 1 venceu (%u) \n", percapita1 > percapita2); //Exibe na tela o texto juntamente com o resultado da variável;
printf("Super Poder: Carta 1 venceu (%d) \n", superpoder1 > superpoder2); //Exibe na tela o texto juntamente com o resultado da variável;

return 0; // Declaração de fim com sucesso e sem erros.

}
