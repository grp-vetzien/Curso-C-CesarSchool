/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[50];
    int x=1, y=2, z=3;
    
    printf("Entre com seu nome: ");
    scanf("%s", nome);
    
    printf("O nome informado foi: %s %d %d %d", nome, x, y, z);

    return 0;
}