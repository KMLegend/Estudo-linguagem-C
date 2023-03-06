/*Dados os vetores x = {5, 7, 51, 6, 34, 48}e y = {47, 14, 2, 9, 85, 26} crie um programa em C
que cria um terceiro vetor z que armazenará os resultados das multipçicações entre cada
elemento de x com cada elemento de y, ou seja o vetor z terá 36 posições.*/
#include <stdio.h>



int main()
{
    int x[6] = {5, 7, 51, 6, 34, 48},  y[6] = {47, 14, 2, 9, 85, 26}, z[6]; // Declaração de variaveis

    // Processamento de dados
    for (int i = 0; i < 6; i++)
    {
        z[i]= x[i] * y[i];
        printf("A posicao %d possui o numero %d e esta sendo multiplicado por %d que resulta em: %d\n",i,x[i],y[i],z[i]);
    }

    return 0;
}