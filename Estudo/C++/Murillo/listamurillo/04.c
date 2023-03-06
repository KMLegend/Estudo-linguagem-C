/*Escreva uma função em C que mostre na tela os números primos(divisíveis apenas por 1 e
por eles mesmos) de 1 a 100;*/

#include <stdio.h>

int main()
{
    int  i, primo; // Declaração de variaveis

    for (i = 1; i <= 100; i++)
    {
        primo = 1;
        for(int j = 2; j < i; j++) 
        { 
            if (i % j == 0) // Se for primo
            {
                primo = 0;
            }
        }
        if (primo == 1) {
			printf("%d ", i);
		}
    }
    return 0;
}
