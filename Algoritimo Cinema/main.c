#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//Estrutura de Variaveis do tipo pessoa.
typedef struct
{
	int matricula;
	int reservas;
} Pessoa;

//Estrutura de Variaveis do tipo Laboratorio.
typedef struct
{
	int laboratorio;
	int horarios[6][25];
} Laboratorio;


//Função do tipo Pessoa , Feita para iniciar as matriculas e as Reservas
Pessoa inicia_pessoa(int matricula)
{
	Pessoa p;

	p.matricula = matricula;
	p.reservas = 0;

	return p;
}


//Função do tipo Laboratorio, Feita para iniciar os Dias da semana e seus respctivos Horarios disponiveis pela matriz l.horarios[i][j]
Laboratorio inicia_laboratorio(int laboratorio)
{
	Laboratorio l;
	int i, j;
	l.laboratorio = laboratorio;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 25; j++)
		{
			l.horarios[i][j] = 0;
		}
	}

	return l;
}

void visualiza_agendamentos(Laboratorio *lab, int laboratorio_escolhido)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 25; j++)
		{
			printf("%d ", lab[laboratorio_escolhido].horarios[i][j]);
		}
		printf("\n");
	}
}

int agendar(Laboratorio *lab)
{
	// Escolha lab
	int laboratorio_escolhido;
	printf("Digite qual o laboratorio: \n");
	printf("1 - 2 - 3 - 4 - 5\n: ");
	scanf("%d", &laboratorio_escolhido);
	if (laboratorio_escolhido < 1 || laboratorio_escolhido > 5)
	{
		printf("Laboratorio invalido.");
		return 0; 
	}

	int dia_semana_escolhido;
	printf("Digite qual o dia da semana: \n");
	printf("1 - segunda\n2 - terca\n3 -quarta\n4 -quinta\n5 - sexta\n: ");
	scanf("%d", &dia_semana_escolhido);
	if (dia_semana_escolhido < 1 || dia_semana_escolhido > 5)
	{
		printf("Dia da semana invalido.");
		return 0; 
	}

	int horario_escolhido;
	printf("Digite o horario desejado , das 8 as 22: \n");
	scanf("%d", &horario_escolhido);
	if (horario_escolhido < 8 || horario_escolhido > 22)
	{
		printf("Horario invalido.");
		return 0; 
	}

	int quantidade_horas;
	printf("Digite quanto tempo desejado: \n 1- Uma hora\n 2 - Duas Horas\n");
	scanf("%d", &quantidade_horas);
	if (quantidade_horas < 1 || quantidade_horas > 2)
	{
		printf("Quantidade de horas invalidas.");
		return 0; 
	}
	if (horario_escolhido == 21 && quantidade_horas == 2)
	{
		printf("Quantidade de horas execedida , por favo escolha 20 ou 21 para nao execeder o horario de funcionamento");
		return 0; 
	}

	if (lab[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] == 0)
	{
		if (quantidade_horas == 1)
		{
			lab[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = 1;
		}
		else if (lab[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] == 0)
		{
			lab[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = 1;
			lab[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] = 1;
		}
		else
		{
			printf("%d no dia da semana escolhido , esta indisponivel", laboratorio_escolhido);
		}
	}

	printf("foi reservado com sucesso.\n");

	visualiza_agendamentos(lab, laboratorio_escolhido);

	return 1;
}

int main()
{
	int opcao = 1;

	// Gerenado a variavel do tipo agendamento, Variavel Pessoa.
	Laboratorio lab[6]; // os laboratorios com sua quantidades lab[6] = 1 ao 5 laboratorios.

	lab[1] = inicia_laboratorio(1);
	lab[2] = inicia_laboratorio(2);
	lab[3] = inicia_laboratorio(3);
	lab[4] = inicia_laboratorio(4);
	lab[5] = inicia_laboratorio(5);




	// Leitura dos dados:
	do
	{
		int matricula;
		printf("Digite sua matricula: ");
		scanf("%d", &matricula);
		Pessoa pessoa = inicia_pessoa(matricula);
		
		if (pessoa.reservas == 3)
		{
			printf()
		}
		


		int sucesso_agendar = agendar(lab);
		if (sucesso_agendar == 1)
		{
			pessoa.reservas++;
		}
		

	} while (opcao != 0);

	system("pause");
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