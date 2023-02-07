#include <stdlib.h>
#include <stdio.h>
#include <math.h>



//Estrutura de Variaveis do tipo pessoa.
typedef struct
{
	int matricula;
	int reservas;
} Pessoa;

Pessoa lista_pessoas[50];
int quantidade_pessoas = 0;
//Estrutura de Variaveis do tipo Laboratorio.
typedef struct
{
	int laboratorio;
	int horarios[6][25];
} Laboratorio;

// Gerando a variavel do tipo agendamento, Variavel Pessoa.
Laboratorio lista_laboratorios[6]; // os laboratorios com sua quantidades lista_laboratorios[6] = 1 ao 5 laboratorios.

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

//Função para mostrar os lugares disponiveis
void visualiza_agendamentos()
{
	int i, j;
	int laboratorio_escolhido;
	printf("Digite qual o laboratorio: \n");
	printf("1 - 2 - 3 - 4 - 5\n: ");
	scanf("%d", &laboratorio_escolhido);
	if (laboratorio_escolhido < 1 || laboratorio_escolhido > 5)
	{
		printf("Laboratorio invalido.");
	}

	printf("    ");
	for ( i = 8; i < 23; i++)
	{
		printf("%02d:00 ",i);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 0:
			printf("SEG ");
			break;
		case 1:
			printf("TER ");
			break;
		case 2:
			printf("QUA ");
			break;
		case 3:
			printf("QUI ");
			break;
		case 4:
			printf("SEX ");
			break;
		default:
			break;
		}
		for (j = 8; j < 23; j++)
		{

			printf("%5d ", lista_laboratorios[laboratorio_escolhido].horarios[i][j]);
		}
		printf("\n");
	}
	return ;
}

//Função de agendar um Horario no laboratorio
int agendar(int matricula)
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

	if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] == 0)
	{
		if (quantidade_horas == 1)
		{
			lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = matricula;
		}
		else if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] == 0)
		{
			lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = matricula;
			lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] = matricula;
		}
		else
		{
			printf("%d no dia da semana escolhido , esta indisponivel", laboratorio_escolhido);
		}
	}

	printf("foi reservado com sucesso.\n");

	

	return 1;
}


//Função de cancelamento um de Horario no laboratorio
int cancelar(int matricula)
{
	
/*
	return 0; --> deu errado
	return 1; --> deu certo , cancela só 1 reserva
	return 2; --> deu certo cancela tudo
*/

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

	if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] == 0)
	{
		printf("Esse horario ja esta vago.");
		return 0;	
	}
	if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] != matricula)
	{
		printf("O horario selecionado foi reservado por outra matricula, nao e possivel cancelar.");
		return 0;
	}
	
	
	if (quantidade_horas == 1)
	{
		lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = 0;
		if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] == matricula)
		{
			return 1;
		}
	}
	else if (lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] == matricula)
	{
		lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = 0;
		lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido + 1] = 0;
		
	}
	else
	{
		printf("voce selecionou 2 horas porem o seu horario corresponde a somente 1 hora, sera cancelado apenas o seu horario.");
		lista_laboratorios[laboratorio_escolhido].horarios[dia_semana_escolhido][horario_escolhido] = 0;
	}


	printf("foi cancelado com sucesso.\n");

	return 2;
}





int busca_pessoa(int matricula)
{
    
    for (int i = 0; i < quantidade_pessoas; i++)
    {
        if (lista_pessoas[i].matricula == matricula)
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


//Principal
int main()
{
	//Variavel de decisão do Menu:
	int opcao = 1 , i = 0;

	

	lista_laboratorios[1] = inicia_laboratorio(1);
	lista_laboratorios[2] = inicia_laboratorio(2);
	lista_laboratorios[3] = inicia_laboratorio(3);
	lista_laboratorios[4] = inicia_laboratorio(4);
	lista_laboratorios[5] = inicia_laboratorio(5);

	Pessoa pessoa;
	
	
	// Leitura dos dados:
	do
	{
		int matricula, sucesso;
		printf("Digite sua matricula: ");
		scanf("%d", &matricula);
		
		int posicao = busca_pessoa(matricula);

		if(posicao == -1)
		{
			pessoa = inicia_pessoa(matricula);
			lista_pessoas[quantidade_pessoas] = pessoa;
			quantidade_pessoas++;
		}
		else
		{
			pessoa = lista_pessoas[posicao];
		}

		if(pessoa.reservas == 3)
		{
			printf("Numero de reservas maximo permitidos");
		}

		printf("O que deseja fazer hoje:\n [1] - Agendar uma Reserva\n [2] - Cancelar uma Reserva\n [3] - Vizualizar agendamentos\n [0] - Para finalizar o programa");
		scanf("%d",&opcao);
		switch (opcao)
		{
			case 0:
				break;
			case 1:
				sucesso = agendar(matricula);
				if (sucesso == 1)
				{
					pessoa.reservas++;
				}
				break;
			case 2:
				sucesso = cancelar(matricula);
				if (sucesso == 2)
				{
					pessoa.reservas--;
				}
				break;
			case 3:
				visualiza_agendamentos();
				break;

			default:
				break;
		}

	} while (opcao != 0);

	system("pause");
	return 0;
}