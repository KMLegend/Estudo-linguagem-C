/*03 - Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equação do segundo grau ( Ax 2

+ Bx + C =0) e que calcule
suas raízes. O algoritmo deve mostrar, quando possível, o valor das raízes calculadas e a classificação das mesmas: “RAÍZES
IMAGINÁRIAS”, “RAIZ ÚNICA” ou “RAÍZES DISTINTAS”.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x,x1,delta;
    
    printf("Digite os coeficientes (A, B e C): \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    //processamento de dados

    printf("Os coeficientes escolhidos foram %.1f, %.1f e %.1f\n",a,b,c);

    //ax² + bx + c = 0
    delta = (b*b) - (4*a*c);

    x = ((-b) + sqrt(delta))/(2*a);
    x1 = ((-b) - sqrt(delta))/(2*a);


    if (delta == 0)
    {
        printf("A equacao do segundo grau com x' = %.1f e x''= %.1f de coeficientes (%.1f, %.1f e %.1f) possui a Raiz Unica com o delta = %.1f. \n",x,x1,a,b,c,delta);
        system("pause");
    }
    else if (delta < 0)
    {
        printf("A equacao do segundo grau com x' = %.1f e x''= %.1f de coeficientes (%.1f, %.1f e %.1f) possui a Raiz Imaginaria com o delta = %.1f.\n",x,x1,a,b,c,delta);
        system("pause");
    }
    else if(delta > 0)
    {
        printf("A equacao do segundo grau com x' = %.1f e x''= %.1f de coeficientes (%.1f, %.1f e %.1f) possui a Raiz Distintas com o delta = %.1f.\n",x,x1,a,b,c,delta);
        system("pause");
    }
    
    return 0;
}




  