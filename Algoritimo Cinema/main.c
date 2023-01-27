#include <stdio.h>
#include <string.h>
#include <conio.h>

int ingresso(dia_da_semana)
{

    if (dia_da_semana == "sexta" || dia_da_semana == "sabado" || dia_da_semana == "domingo")
    {
        int ingresso = 20;
    }
    else if (dia_da_semana == "segunda" || dia_da_semana == "terca" || dia_da_semana == "quarta" || dia_da_semana == "quinta")
    {
        int ingresso = 10;
    }
    return ingresso;

}


int main(void)
{
    char dia_da_semana[56];
    int id, quantidade_ingressos, reservas = 0, linha = 0, coluna = 0, sala[25][30];

    /*
    printf("Digite o id: \n");
    scanf("%d", &id);

    printf("Digite a quantidade de ingrssos: \n");
    scanf("%d", &quantidade_ingressos);
    if (quantidade_ingressos > 3 || quantidade_ingressos < 1)
    {
        printf("A quantidade maxima de ingressos por id e´ de 3 ingressos: \n");
        scanf("%d", &quantidade_ingressos);
    }
    printf("Digite o dia da semana: \n");
    scanf("%s",&dia_da_semana);

    */
    for (int l = 0; l < 25; l++)
    {
        for (int c = 0; c < 30; c++)
        {
            sala[l][c] = 0;
        }
        
    }
    
    do{
        printf("0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29\n");
        
        for (int l = 0; l < 25; l++)
        {
            
            for (int c = 0; c < 30; c++)
            {
                printf("%d\n", sala[l][c]);
            }
            printf("\n%d\n", l);
            printf("Digite a linha e coluna da poltrona desejada: ");
            scanf("%d %d", & linha, &coluna);

            if (linha < 0 || linha > 24)
            {
                printf("\nLinha invalidada. Digite outra linha valida\n");
            }
            else if (coluna < 0 || coluna > 29)
            {
                printf("\nColuna invalidada. Digite outra coluna valida\n");
            }
            else if (sala[linha][coluna] == 1)
            {
                printf("\nPoltrona invalida. Escolha outra\n");
            }
            else
            {
                sala[linha][coluna] = 1;
                printf("\nReserva realizada com sucesso\n");
                reservas++;
            }
            
        }
        
    }while (reservas < 750 && linha >= 0 || coluna >= 0);
  

    getch();
    return 0;
}