/*01 - Fazer um algoritmo que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média do aluno, uma
mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.*/

#include <stdio.h>

int main()
{
    float n1,n2,n3, media;
    printf("Digite as notas dos alunos: \n");
    scanf("%f", &n1);
    if (n1 > 10 || n1 < 0)
    {
        printf("Nota invalida.");
        system("pause");
        return 0;
    }
    scanf("%f", &n2);
    if (n2 > 10 || n2 < 0)
    {
        printf("Nota invalida.");
        system("pause");
        return 0;
    }
    scanf("%f", &n3);
    if (n3 > 10 || n3 < 0)
    {
        printf("Nota invalida.");
        system("pause");
        return 0;
    }
    
    //processamento de dados

    media = (n1 + n2 + n3)/3;

    //saida de dados 
    if (media >=6)
    {
        printf("A media entre as notas %.1f, %.1f, %.1f tem o resultado de %.2f e o aluno foi aprovado",n1,n2,n3,media);    
    }
    else
    {
        printf("A media entre as notas %.1f, %.1f, %.1f tem o resultado de %.2f e o aluno foi reprovado",n1,n2,n3,media);
    }
    
    return 0;
}