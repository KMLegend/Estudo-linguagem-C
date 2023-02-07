#include <stdlib.h>
#include <stdio.h>
#include <math.h>



typedef struct 
{
    int matricula;
} Pessoas;

Pessoas pessoa[5];

Pessoas inicia_pessoa(int matricula)
{
	Pessoas p;

	p.matricula = matricula;

	return p;
}

int busca_pessoa(int matricula)
{
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        if (pessoa[i].matricula == matricula)
        {
            printf("A matricula %d se encontra na posicao %d\n", matricula, i);
            return i;
        }else
        {
            printf("A matricula nao existe no vetor");
        }
    }
    return -1;
}

int main()
{
    int i = 0,j = 0,count;
    int matricula;

    do
    {
        
        printf("digite a matricula: ");
        scanf("%d",&matricula);

        pessoa[i] = inicia_pessoa(matricula);
        i++;

    } while (i < 5);
    


    do
    {
        
        printf("Digite a matricula para busca: ");
        scanf("%d",&matricula);


        busca_pessoa(matricula);

        j++;
    } while (j < 5);
    

    
    
    
    
    system("pause");
    return 0;

}