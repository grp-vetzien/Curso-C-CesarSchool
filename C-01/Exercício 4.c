/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    float n1, n2, n3, n4, media;
    
    printf("Nota 1: ");
    scanf("%f", &n1);
    
    printf("Nota 2: ");
    scanf("%f", &n2);
    
    printf("Nota 3: ");
    scanf("%f", &n3);
    
    printf("Nota 4: ");
    scanf("%f", &n4);
    
    media = (n1 + n2 + n3 + n4)/4;
    printf("A média das nota é: %.2f", media);

    return 0;
}

