#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
int assentos(char sala[15][20])
{
    for (int linha = 0; linha < 15; linha++)
        {
            for (int coluna = 0; coluna < 20; coluna++)
            {
                sala[linha][coluna] = 0;
                printf("%d ", sala[linha][coluna]);
            }
            printf("\n");
        }
    return 0;
}
*/

void reservar_assento(int linhas, int colunas, int matriz[][colunas]) {
  
  int linha, coluna;
  
  printf("Digite a linha e coluna do assento a ser reservado: ");
  scanf("%d%d", &linha, &coluna);

  if (matriz[linha][coluna] == 0) 
  {
    matriz[linha][coluna] = 1;
    printf("Assento (%d,%d) reservado com sucesso.\n", linha, coluna);
  } else 
  {
    printf("Assento (%d,%d) já está ocupado.\n", linha, coluna);
  }
}

void exibir_assentos_disponiveis(int linhas, int coluna, char sala[15][20]) {
  int contador = 0;
  printf("Assentos disponíveis:\n");

  for (int linha = 0; linha < 10; linha++)
        {
            for (int coluna = 0; coluna < 10; coluna++)
            {
                sala[linha][coluna] = 0;
                printf("%d ", sala[linha][coluna]);
            }
            printf("\n");
        }
/*
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < 20; j++) {
      if (matriz[i][j] == 0) {
        printf("(%d,%d) ", i, j);
        printf("\n");
        contador++;
      }
    }
  }
  if (contador == 0) {
    printf("Nenhum assento disponível.\n");
  }
  */
}

int assento_ocupado(int linhas, int colunas, int linha, int coluna, int matriz[][colunas]) {
  if (matriz[linha][coluna] == 1) {
    return 1;
  }
  return 0;
}





int main()
{
    char dia_da_semana[56], sala[15][20];
    int id, quantidade_ingressos, reservas = 0, linha, colunas, matriz[15][20];
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
    /*Chama a função assentos e Printa a matriz com os valores*/
    
    return 0;
}
