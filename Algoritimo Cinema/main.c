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
    int id, quantidade_ingressos;

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
    gets(dia_da_semana);
    if (dia_da_semana != "segunda" || "terca" || "quarta" || "quinta" || "sexta" || "sabado" || "domingo")
    {
        /* code */
    }
    

    




    getch();
    return 0;
}