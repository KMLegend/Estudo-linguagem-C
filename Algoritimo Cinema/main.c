#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main (void)
{
	int Caso_cadeira, i, j, lin, col, condi, n, t, x, p;
	int poltrona[10] [15];
	char ascii = 79;
	char asciii = 158;
	
	for(i=0 ; i<10; i++)
	{
		for(j=0 ; j<15 ; j++)
		{
			poltrona [i] [j]=0;
		}
	}

    n=0;
    printf("\tC\n\tO\n\tL\n\tU\n\tN\n\tA\n");
    
    printf("LINHA");
    printf("   0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 \n");
            for(i=0 ; i<10; i++)
    {
                    printf("\t");
                    n==1;
                    printf("%d ",n);
                    n++;
                
                for(j=0 ; j<15 ; j++)
                {
                    if(poltrona[i] [j]==0)
                    {
                        printf("%c ",ascii);
                    }	
                    else
                        printf("%c ",asciii);
                }
                
            printf("\n");
    }
    printf("\n");
    printf("-------------------------------------------------------------\n");


	do
	{			
			printf("[1] - Escolher Cadeira\n");
			printf("[2] - Ver disposicao das cadeiras\n");
			printf("[3] - Cancelar cadeira\n\n");
			printf("[4] - Escolha concluida\n\n");
			scanf("%d", &Caso_cadeira);
			
			switch(Caso_cadeira)
			{	
				case 1: //Escolher Cadeira

					printf("Fila: ");
                    scanf("%d", &lin);
                
                    printf("Coluna: ");
                    scanf("%d",&col);
                    
                    if (lin<10 && col<15)
                    {
                        if (poltrona [lin] [col]==0)
                        {
                            poltrona [lin] [col]=1;
                        }
                        else
                        {
                            printf("***ATENCAO CADEIRA OCUPADA***\n\n");
                        }
                    }
                    else
                    {
                        printf("***CADEIRA INEXISTENTE***");
                    }


                    printf("\n");
                    printf("-------------------------------------------------------------\n");
                    
                    break;
				case 2: //ver caideiras
					n=0;
					printf("\tC\n\tO\n\tL\n\tU\n\tN\n\tA\n");
					
					printf("LINHA");
					printf("   0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 \n");
							for(i=0 ; i<10; i++)
					{
									printf("\t");
									n==1;
									printf("%d ",n);
									n++;
								
								for(j=0 ; j<15 ; j++)
								{
									if(poltrona[i] [j]==0)
									{
										printf("%c ",ascii);
									}	
									else
										printf("%c ",asciii);
								}
								
							printf("\n");
					}
					printf("\n");
					printf("-------------------------------------------------------------\n");
					break;
				case 3: //esvaziar cadeiras
					printf("O que deseja fazer?\n");
					printf("[1] - Cancelar uma cadeira?\n");
					printf("[2] - Cancelar todas as cadeiras?\n");
					
					scanf("%d",&condi);
						if(condi == 1)
						{
							printf("\nFila: ");
							scanf("%d", &lin);
							printf("\nColuna: ");
							scanf("%d",&col);
							if(lin<10 && col<10)
							{
								poltrona [lin] [col]=0;
							}
							else
							{
								printf("***CADEIRA INEXISTENTE***\n");
							}
						}
						else 
						for(i=0 ; i<10; i++)
						{
							for(j=0 ; j<15 ; j++)
							{
								poltrona [i] [j]=0;
							}
						}
					printf("-------------------------------------------------------------\n");
					break;
				default:
					Caso_cadeira=0;
					
			}
		
	}while(Caso_cadeira!=0);
	system("pause");
	return(0);
}