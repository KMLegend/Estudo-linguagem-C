/*Faça um programa em C que peça ao usuário o nome e as notas N1 e N2 de 10 alunos e
depois mostre na tela o nome, as notas, a média final(N1 tem peso 1 e N2 tem peso 2) e diga
se o aluno está aprovado ou reprovado, sabendo que se a média for menor que 6,5 o aluno
estará reprovado.*/

#include <stdio.h>



typedef struct 
{
    float n1;
    float n2;
    float media;
} aluno;




int main()
{
    float n1,n2,n3, media, p1 = 1 , p2 = 2;


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

    media = ((n1*p1) + (n2*p2))/3;

    //saida de dados 
    if (media >= 6.5)
    {
        printf("A media entre as notas %.1f, %.1f tem o resultado de %.2f e o aluno foi aprovado",n1,n2,media);    
    }
    else
    {
        printf("A media entre as notas %.1f, %.1f tem o resultado de %.2f e o aluno foi reprovado",n1,n2,media);
    }
    
    return 0;
}