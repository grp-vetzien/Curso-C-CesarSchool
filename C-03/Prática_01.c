/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void vejaai(int a, int b);
int main()
{
    int a, b, c, d;
    printf("Valor a: ");
    scanf("%d", &a);
    printf("Valor b: ");
    scanf("%d", &b);
    printf("Valor c: ");
    scanf("%d", &c);
    printf("Valor d: ");
    scanf("%d", &d);
    
    vejaai(a, b);
    
    if (a < b && a < c && a < d){
        printf("%d é o menor que %d, %d e %d", a, b, c, d);
    }else if(b < a && b < c && b < d){
        printf("%d é o menor que %d, %d e %d", b, a, c, d);
    }else if(c < a && c < b && c < d){
        printf("%d é o menor", c, a, b, d);
    }else{
        printf("%d é o menor que %d, %d e %d", d, a, b, c);
    }

    return 0;
}
void vejaai (int a, int b){
    if(a > b){
        printf("%d é maior que %d", a, b);
    }else if(a < b){
        printf("%d é maior que %d", b, a);
    }else{
        printf("Números Iguais");
    }
}