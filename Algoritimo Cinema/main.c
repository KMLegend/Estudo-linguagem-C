#include <stdlib.h>
#include <stdio.h>
#include <math.h>

	typedef struct agendamento
	{
		int matricula;
		int laboratorio;
		int horario;
		int reservas;
		char dia_semana;

	};


int main ()
{
	int parar, reserva, cancelamento;

	//Gerenado a variavel do tipo agendamento, Variavel Pessoa.
	struct agendamento pessoa; 

	//Leitura dos dados:

	do
	{
		printf("Digite sua matricula: ");
		scanf("%d",&pessoa.matricula);

		printf("\nDeseja cancelar uma reserva: \n[1] - Sim\n[2] - Nao");
		scanf("%d",reserva);

		if(pessoa.reservas > 3)
		{
			printf("Numero de reservar maximo atingido.");
		}

		

	} while (parar != 0);
	
	
	
	
	system ("pause");
	return 0;
}



/*
if(reserva == 1)
		{
			printf("Qual reserva voce gostaria de retirar: \n");
			printf("%d\n\n", pessoa.matricula);
			printf("[1] - %d\n",pessoa.dia_semana);
			printf(": ");
			scanf("%d", cancelamento);
			switch (cancelamento)
			{
			case 1:
				printf("[1] - %d\n",pessoa.laboratorio);
				printf("[2] - %d\n\n",pessoa.horario);
				scanf("%d", cancelamento);
				switch (cancelamento)
				{
				case 1:
					
					break;
				
				default:
					break;
				}
				break;
			
			default:
				break;
			}

		}
*/