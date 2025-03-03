#include <stdio.h>

int main(){
    // Declaração das variáveis
    int pop1, pop2, pt1, pt2;
    float area1, area2, pib1, pib2;
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[100], nome2[100];
    //Cadastro da Primeira carta
   
    printf("Seja bem vindo ao sistema de cartas do super trunfo\n\n");
    printf("Vamos cadastrar os dados da primeira carta!\n");

    //Imprime os pedidos e lê o que foi escrito pelo teclado
    printf("Digite a letra que representa o estado da primeira carta: ");
    scanf(" %c", &estado1);
   
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    //Evitar Utilizar nomes com espaço devido a uma limitação do scanf
    
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nome1);
   
    printf("Digite o número da população da primeira carta: ");
    scanf("%d", &pop1);
    
    printf("Digite o número da área do estado da primeira carta: ");
    scanf("%f", &area1);
    
    printf("Digite o número do pib da primeira carta: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pt1);

    //Separa os dados da carta 1 da carta 2 por razão de organização
    //Imprime os pedidos e lê o que foi escrito pelo teclado

    printf("\n");

    printf("Vamos cadastrar os dados da segunda carta!\n");
    printf("Digite a letra que representa o estado da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o código da seguda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nome2);
    printf("Digite o número da população da segunda carta: ");
    scanf("%d", &pop2);
    printf("Digite o número da área do estado da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o número do pib da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pt2);
    printf("\n");

    //Exibir todas as informações cadastradas

    printf("O cadastro das cartas está completo! Veja abaixo os dados!");

    //Carta 1

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("Número de pontos turísticos: %d\n", pt1);

    //Carta 2

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("Número de pontos turísticos: %d\n", pt2);

    return 0;
}