/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, maior;
    
    printf("Digite o número: ");
    scanf("%d", &n1);
    printf("Digite o outro: ");
    scanf("%d", &n2);
    
    if(n1 > n2){
        printf("%d é o maior", n1);
    }else if (n1 < n2){
        printf("%d é o maior", n2);
    }


    return 0;
}