#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct agendamento {
	int matricula;
	int horario;
	int reservas;
	int maquinas[19];
	char dia_semana;
};

typedef struct labs
{
	int laboratorio;
	int lab1, lab2, lab3, lab4, lab5;
};



int main ()
{
	int parar, reserva, cancelamento;

	//Gerenado a variavel do tipo agendamento, Variavel Pessoa.
	struct agendamento pessoa; 
	struct labs lab;
	
	//Leitura dos dados:

	do
	{
		printf("Digite sua matricula: ");
		scanf("%d",&pessoa.matricula);

		if(pessoa.reservas > 3) {
			printf("Numero de reservar maximo atingido.");
		}

		printf("\nDeseja cancelar uma reserva: \n[1] - Sim\n[2] - Nao");
		scanf("%d",reserva);

		//Escolha lab
		printf("Digite qual o laboratorio: \n");
		printf("[1] - [2] - [3] - [4] - [5]\n: ");
		scanf("%d",&lab.laboratorio);
		switch (lab.laboratorio)
		{
		case 1:
			lab.lab1 = pessoa.matricula;
			break;
		case 2:
			lab.lab2 = pessoa.matricula;
			break;
		case 3:
			lab.lab3 = pessoa.matricula;
			break;
		case 4:
			lab.lab4 = pessoa.matricula;
			break;
		case 5:
			lab.lab5 = pessoa.matricula;
			break;
		default:
			printf("Escolha invalida...");
			parar = 0;
			break;
		} 

		if(pessoa.matricula == lab.lab1 || pessoa.matricula == lab.lab2 || pessoa.matricula == lab.lab3 || pessoa.matricula == lab.lab4 || pessoa.matricula == lab.lab5){
			printf("Digite o horario desejado, horario de funcionamento das 8 as 22: ");
			scanf("%d", pessoa.horario);
		}
		



		

	} while (parar != 0);
	
	system ("pause");
	return 0;
}























/*
//-------------------------------------------------------------------------------------------------------Parte cancelamento------------------------------------------------------------------------------------------------//
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
		//-------------------------------------------------------------------------------------------------------Parte cancelamento------------------------------------------------------------------------------------------------//
*/