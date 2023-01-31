#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//Função que mostra os assentos disponiveis 
int assentos_livres ()
{	
	int Caso_cadeira, i, j, lin, col, condi, n, t, x, p;
	int poltrona[10] [15];
	char ascii = 79;
	char asciii = 158;

	//zera a matriz
	for(i=0 ; i<10; i++)
	{
		for(j=0 ; j<15 ; j++)
		{
			poltrona [i] [j]=0;
		}
	}

    n=0;
	//mostra a matriz
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
	return 0;
}

//Funções que mostram os filmes disponiveis
int filmes_t()
{
	int quant_bilhetes, horario_sessao=0, forma_pagamento;
	printf("\t--------------------------------------\n");
	printf("\t Cine 1: Transformers\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao ? \n\n");
	printf("\t--------------------------------------\n");
	scanf("%d",&horario_sessao);
		if (horario_sessao==1) 
		{
			printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
			scanf("%d",&quant_bilhetes);
			
			if (quant_bilhetes<=3) 
			{
				assentos_livres();

				printf("\t---------------------------------------\n");	
				printf("\t FORMAS DE PAGAMENTO : : : \n\n");
				printf("\t [1]Inteira: 8,00 R$ \n");
				printf("\t [2]Meia: 4,00 R$ \n");
				scanf("%d",&forma_pagamento);
				printf("\t---------------------------------------\n");
				if (forma_pagamento==1)
				{
					printf("\tForma de Pagamento :: INTEIRA \n\n");
				}
				else
				{
					printf("\tForma de Pagamento :: MEIA ");
				}
				printf("\tSessao escolhida 1: 13:30\n\n");
				printf("\tSeu bilhete foi adiquirido com sucesso. \n");
				printf("\tDivirta-se. Um bom filme pra voce.\n ");
			}
			else 
			{
				printf("\tO limite de ingressos por pessoa e de 3\n ");
			}
		}
	if (horario_sessao==2)
	{
		printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");	
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
				printf("\tForma de Pagamento :: MEIA \n\n");
			}
			printf("\tSeu bilhete foi adiquirido com sucesso. \n");
			printf("\tSessao escolhida 2: 15:30\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	if (horario_sessao==3) 
	{
		printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");	
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
				printf("\tForma de Pagamento :: MEIA \n\n");
			}
			printf("\tSeu bilhete foi adiquirido com sucesso. \n");
			printf("\tSessao escolhida 3: 17:30\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	return 0;
}

int filmes_v()
{
	int quant_bilhetes, horario_sessao=0, forma_pagamento;
	printf("\t--------------------------------------\n");
	printf("\t Velozes e Furiosos \n");
	printf("\t Sessao 1: 13:45 \n");
	printf("\t Sessao 2: 16:15 \n");
	printf("\t Sessao 3: 18:45 \n");
	printf("\tComprar bilhete para qual sessao ? \n\n");
	printf("\t--------------------------------------\n");
	scanf("%d",&horario_sessao);
	if (horario_sessao==1) 
	{
		printf ("\tInforme a quantidade de bilhetes que deseja comprar:\n");
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
				printf("\tForma de Pagamento :: MEIA \n\n");
			}
			printf("\tSeu bilhete foi adiquirido com sucesso.\n");
			printf("\tSessao escolhida 1: 13:45\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	if (horario_sessao==2)
	{
		printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{	
			assentos_livres();
			printf("\t---------------------------------------\n");	
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			printf("\tSeu bilhete foi adiquirido com sucesso. \n");
			printf("\tSessao escolhida 2: 16:15\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	if (horario_sessao==3)
	{
		printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");	
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
				printf("\tForma de Pagamento :: MEIA \n\n");
			}

				printf("\tSeu bilhete foi adiquirido com sucesso. \n");
				printf("\tSessao escolhida 3: 18:45\n");
				printf("\tDivirta-se. Um bom filme pra voce.\n\n ");

		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	return 0;
}

int filmes_a()
{
	int quant_bilhetes, horario_sessao=0, forma_pagamento;

	printf("\t-----------------------------------------------\n");
	printf("\t Cine 3: Atividade Paranormal \n");
	printf("\t Sessao 1: 13:30 \n");
	printf("\t Sessao 2: 15:30 \n");
	printf("\t Sessao 3: 17:30 \n");
	printf("\tComprar bilhete para qual sessao ? \n\n");
	printf("\t-----------------------------------------------\n");
	scanf("%d",&horario_sessao);
	if (horario_sessao==1) 
	{
		printf ("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");	
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
				printf("\tForma de Pagamento :: MEIA \n\n");
			}
				printf("\tSeu bilhete foi adiquirido com sucesso.\n");
				printf("\tSessao escolhida 1: 13:30\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{	
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}		
	if (horario_sessao==2)
	{
		printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");	
		scanf("%d",&quant_bilhetes);
		
		if (quant_bilhetes<=3) 
		{
			assentos_livres();
			printf("\t---------------------------------------\n");
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");				
			printf("\t [1]Inteira: 8,00 R$ \n");				
			printf("\t [2]Meia: 4,00 R$ \n");				
			scanf("%d",&forma_pagamento);				
			printf("\t---------------------------------------\n");				
		if (forma_pagamento==1) 
			{				
				printf("\tForma de Pagamento :: INTEIRA \n\n");				
			}				
			else 
			{				
				printf("\tForma de Pagamento :: MEIA \n\n");				
			}				
				printf("\tSeu bilhete foi adiquirido com sucesso. \n");				
				printf("\tSessao escolhida 2: 15:30\n");				
				printf("\tDivirta-se. Um bom filme pra voce.\n\n ");			
		}			
		else 
		{			
		printf("\tO limite de ingressos por pessoa e de 3\n ");			
		}		
	}		
	if (horario_sessao==3)
		{		
		printf ("\tInforme a quantidade de bilhetes que deseja comprar:\n");			
		scanf("%d",&quant_bilhetes);
					
		if (quant_bilhetes<=3) 
		{			
			assentos_livres();
			printf("\t---------------------------------------\n");				
			printf("\t FORMAS DE PAGAMENTO : : : \n\n");				
			printf("\t [1]Inteira: 8,00 R$ \n");
			printf("\t [2]Meia: 4,00 R$ \n");
			scanf("%d",&forma_pagamento);
			printf("\t---------------------------------------\n");
			if (forma_pagamento==1) 
			{
				printf("\tForma de Pagamento :: INTEIRA \n\n");
			}
			else 
			{
			printf("\tForma de Pagamento :: MEIA \n\n");
			}
			printf("\tSeu bilhete foi adiquirido com sucesso.\n");
			printf("\tSessao escolhida 3: 17:30\n");
			printf("\tDivirta-se. Um bom filme pra voce.\n\n ");
		}
		else 
		{
			printf("\tO limite de ingressos por pessoa e de 3\n ");
		}
	}
	return 0;
}


//Principal
int main ()
{
	/*
		quant_blihetes= refere a quantidade de bilhetes que o cliente vai comprar
		caso_filmes= refere ao CASE para escolha dos filmes
		horario_sessao= refere a esolha do horario pelo cliente
		forma_pagamento= refere a forma de pagamento que o cliente escolheu	 
	*/
	int quant_bilhetes, caso_filmes, horario_sessao=0, forma_pagamento;
	do
	{
		printf("\t===============================================\n");
		printf("\t===============================================\n");
		printf("\t========== CINE PARA TODOS ====================\n");
		printf("\t===============================================\n");
		printf("\t===============================================\n\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t| FILMES EM CARTAZ |\n\n");
		printf("\t| [1] Transformers |\n");
		printf("\t| [2] Velozes e Furiosos |\n");
		printf("\t| [3] Atividade Paranormal |\n");
		printf("\t----------------------------------------------\n");
		printf("Zero para sair:\n\n ");
		scanf("%d",&caso_filmes);

		switch (caso_filmes)
		{
		default:		
			printf("Opcao invalida.\n");
		case 0:
			break;
		case 1:
			filmes_t(); //Chamei a Função do filme transformrs
			break;
		case 2:
			filmes_v(); //Chamei a Função do filme Velozes e Furiosos
			break;
		case 3:
			filmes_a();	//Chamei a Função do filme Atividade Paranormal
			break;
		}
	}
	while (caso_filmes != 0);

	system ("pause");
	return 0;
}
