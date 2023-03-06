/*Faça um programa em C que simule o lançamento de um dado 30 vezes(funções srand e
rand) e depois conte quantas vezes cada numero aparece e mostre na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    //Declaração de Variaveis
    int dado, i, aux[7] = {0,0,0,0,0,0,0};
    
    srand(time(NULL));

    //Processamento de dados
    for ( i = 1; i <= 30; i++)
    {
        dado = (rand() % 6) + 1;
        printf(" numero: [%d]\n", dado);
        aux[dado]++;
    }

    printf("\nO numero 1 foi rodado: %dx\n", aux[1]);
    printf("O numero 2 foi rodado: %dx\n", aux[2]);
    printf("O numero 3 foi rodado: %dx\n", aux[3]);
    printf("O numero 4 foi rodado: %dx\n", aux[4]);
    printf("O numero 5 foi rodado: %dx\n", aux[5]);
    printf("O numero 6 foi rodado: %dx\n", aux[6]);

    return 0;
}