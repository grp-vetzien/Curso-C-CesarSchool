/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{

    int x, y, resultado;
    
    printf("Qual o valor de x? ");
    scanf("%d", &x);
    printf("Qual o valor de y? ");
    scanf("%d", &y);
    
    resultado = x + y;
    printf("O resultado da soma é %d + %d = %d\n", x, y, resultado);

    return 0;
}

