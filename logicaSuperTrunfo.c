#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char cod1[10]; 
    char cod2[10];
    char estado1[20];
    char estado2[20];
    char nomecidade1[50]; 
    char nomecidade2[50];
    int pop1, pop2;
    float area1,area2, pib1, pib2;
    double densidade1, densidade2, pibper1, pibper2;
    int pt1,pt2;
    double power1, power2;
   
    /* Cadastro das Cartas:
     Implemente a lógica para solicitar ao usuário que insira os dados das cidades
     utilizando a função scanf para capturar as entradas.
     utilize o código do primeiro desafio

     Exemplo:
     printf("Digite o código da cidade: ");
     scanf("%s", codigo);
     
     (Repita para cada propriedade)*/
      
    printf("========SUPER TRUNFO =========\n");
    
    printf("CADASTRE 1ª CARTA\n");
    
    printf("Digite o Código da Carta 1: ");
    scanf("%s", cod1);
    
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade1);
        
    printf("População: ");
    scanf("%d", &pop1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt1);
    
    densidade1 = (double)(pop1 / area1); 

    pibper1 = (double)(pib1 / pop1);

    power1 = (pop1 + area1 + densidade1 + pt1);

    printf("SPECIAL = %f", power1);


    printf("\n   ***     \n");
    printf("CADASTRE 2ª CARTA\n");
    
    printf("Digite o Código da Carta 2: ");
    scanf("%s", cod2);

    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade2);
        
    printf("População: ");
    scanf("%d", &pop2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt2);
    
    densidade2 = (double)(pop2 / area2); 

    pibper2 = (double)(pib2 / pop2);

    power2 = (pop2 + area2 + densidade2 + pt2);

    printf("SPECIAL = %f\n", power2);
    printf("===========================\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

        if(area1 > area2)
    {
        printf("Carta %s, Estado  %s \n****** Venceu!******\n", cod1, estado1);

    }else if (area1 < area2)
    {
        printf("Carta %s, Estado  %s \n****** Venceu! ******\n", cod2, estado2); 
    }else
    {
        printf("****** EMPATE ******\n");        
    }
    
    printf("====================================\n");
    return 0;
}
