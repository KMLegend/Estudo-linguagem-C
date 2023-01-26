#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{

    int id, quantidade_ingressos, dia_da_semana;

    printf("Digite o id: \n");
    scanf("%d", &id);

    printf("Digite a quantidade de ingrssos: \n");
    scanf("%d", &quantidade_ingressos);
    if (quantidade_ingressos > 3 || quantidade_ingressos < 1)
    {
        printf("A quantidade maxima de ingressos por id e´ de 3 ingressos: \n");
        scanf("%d", &quantidade_ingressos);
    }
    printf("Digite o dia da semana,\n1 - para domingo: \n2 - para segunda: \n3 - para terça: \n4 - para quarta: \n5 - para quinta: \n6 - para sexta: \n7 - para sabado: \n");
    scanf("%d", &dia_da_semana);

    return 0;
}
