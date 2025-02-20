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
    int opcao1;
    int opcao2;
    int p1 = 0, p2 = 0;
   
    /* Cadastro das Cartas:
     Implemente a lógica para solicitar ao usuário que insira os dados das cidades
     utilizando a função scanf para capturar as entradas.
     utilize o código do primeiro desafio

     Exemplo:
     printf("Digite o código da cidade: ");
     scanf("%s", codigo);
     
     (Repita para cada propriedade)*/

     //CADASTROS DA CARTA 1
      
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

    // CADASTRO DE CARTA 2
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
    
    
    //Menu Interativo

    printf("=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(" Menu de Comparação \n");
    printf("[1] POPULAÇÃO \n");
    printf("[2] ÁREA EM KM² \n");
    printf("[3] DENSIDADE POPULACIONAL \n");
    printf("[4] PONTOS TURISTICOS \n");
    printf("[0] SAIR \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=====================================================\n");
    printf("\nEscolha uma opção a ser Comparado: ");
    scanf("%d", &opcao1);
    printf("Escolha mais uma opção: ");
    scanf("%d", &opcao2);
    
       // Comparação da Carta 1:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
  
     switch (opcao1)
    {
    case 1: 
     if(pop1 > pop2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério POPULAÇÂO!******\n", cod1, nomecidade1, estado1);    
    }
    else 
    { 
        p2++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério POPULAÇÂO! ******\n", cod2, nomecidade2, estado2);
    }
    break;

    case 2: 
        if(area1 > area2)
    {   
        p1++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério ÁREA!******\n", cod1, nomecidade1, estado1);    
    }else 
    {
        p2++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério ÁREA! ******\n", cod2, nomecidade2, estado2); 
    }        
    break;
    
    case 3: 
    if(densidade1 < densidade2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério DENSIDADE!******\n", cod1, nomecidade1, estado1);
    } else 
    {
        p2++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério DENSIDADE! ******\n", cod2, nomecidade2, estado2);
    }        
    break;

    case 4: 
        if(pt1 > pt2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério PONTOS TURÍSTICOS!******\n", cod1, nomecidade1, estado1);
    } else 
    {
        p2++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério PONTOS TURÍSTICOS! ******\n", cod2, nomecidade2, estado2); 
    }        
    break;

    case 0: 
        printf("====================================\n");
        printf("Sistema Finalizado");  
        printf("====================================\n");
    break;
    }

    switch (opcao2)
    {
    case 1: 
     if(pop1 > pop2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério POPULAÇÂO!******\n", cod1, nomecidade1, estado1);
    }
    else 
    { 
        p2++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério POPULAÇÂO! ******\n", cod2, nomecidade2, estado2);
    }
    break;

    case 2: 
        if(area1 > area2)
    {   
        p1++;
        printf("         ***         \n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério ÁREA!******\n", cod1, nomecidade1, estado1);
    }else 
    {
       p2++;
       printf("         ***         \n");
       printf("Carta %s, %s \ndo Estado  %s \n****** Venceu no Critério ÁREA! ******\n", cod2, nomecidade2, estado2); 
    }        
    break;
    
    case 3: 
    if(densidade1 < densidade2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério DENSIDADE!******\n", cod1, nomecidade1, estado1);
    } else 
    {
        p2++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério DENSIDADE! ******\n", cod2, nomecidade2, estado2);
    }        
    break;

    case 4: 
        if(pt1 > pt2)
    {
        p1++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério PONTOS TURÍSTICOS!******\n", cod1, nomecidade1, estado1);
    } else 
    {
        p2++;
        printf("         ***         \n");
        printf("Carta %s,  %s \ndo Estado  %s \n****** Venceu no Critério PONTOS TURÍSTICOS! ******\n", cod2, nomecidade2, estado2); 
    }        
    break;

    case 0: 
        printf("====================================\n");
        printf("Sistema Finalizado");  
        printf("====================================\n");
    break;
    }

    //Resultado Final

    if (p1 > p2)
    {
        printf("=====================================================\n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu!******\n", cod1, nomecidade1, estado1);
        printf("=====================================================\n");
    }
    else if(p2 > p1)
    {
        printf("=====================================================\n");
        printf("Carta %s, %s \ndo Estado  %s \n****** Venceu! ******\n", cod2, nomecidade2, estado2); 
        printf("=====================================================\n");
    }
    else
    {
        printf("=====================================================\n");
        printf("~~~ Jogo Empatado ~~~\n");
        printf("=====================================================\n");
    }

    return 0;

}