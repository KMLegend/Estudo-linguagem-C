//02 - Desenvolver um algoritmo que leia um número inteiro e verifique se este é divisível por 5 e por 3 ao mesmo tempo.

#include <stdio.h>

int main()
{
    int numero;
    float aux;
    printf("Digite um numero para verificar , se o mesmo e divisivel por 5 e por 3 ao mesmo tempo: \n");
    scanf("%d", &numero);

    //Processamento de dados
    if(((numero % 5) == 0) && ((numero % 3) == 0))
    {
        printf("O numero %d e divisivel por 5 e por 3 ao mesmo tempo.\n",numero);
        system("pause");
    }
    else
    {
        printf("O numero %d nao e divisivel por 5 e por 3 ao mesmo tempo.\n",numero);
        system("pause");
    }

    return 0;
}