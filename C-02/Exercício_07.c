/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d eh par!", num); //& capta o valor
    }else{
        printf("%d eh impar", num);
    }
    

    return 0;
}