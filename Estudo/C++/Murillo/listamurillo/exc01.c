/*1) Escreva um programa em C que peça ao usuário 10 números inteiros e depois mostre na tela
esses números em ordem inversa ao que foi digitado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[10], j = 10, i = 1;

    printf("Digite os numeros: \n");
    
    while (i < 11)
    {
        printf("[%d]: ",i);
        scanf("%d",&numero[i]);
        i++;
    }

    while (j >= 1)
    {
        printf("%d  ", numero[j]);
        
        j--;
    }
    

    system("pause");
    return 0;
}