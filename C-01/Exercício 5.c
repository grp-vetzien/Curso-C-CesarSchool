/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    float fah, cel;
    
    printf("Digite a temperatura em F: ");
    scanf("%f", &fah);
    
    cel = 5*((fah-32)/9);
    
    printf("A temperatura em Celsius é: %.2f graus", cel);

    return 0;
}

