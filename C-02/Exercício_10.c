/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int respostas[5];
    int i;
    int pontos=0;
    
    printf("Telefonou para a vitima?: ");
    scanf("%d", &respostas[0]);
    printf("Esteve no local do crime?: ");
    scanf("%d", &respostas[1]);
    printf("Mora perto da vitima?: ");
    scanf("%d", &respostas[2]);
    printf("Devia para a vítima?: ");
    scanf("%d", &respostas[3]);
    printf("Ja trabalhou com a vitima?: ");
    scanf("%d", &respostas[4]);
    
    for (i=0, i<5, i++){
        if(respostas[i] == 1){
            pontos++;
        }
    }
    if (pontos == 5) {
        printf("\nClassificacao: Assassino\n");
    } else if (pontos >= 3) {
        printf("\nClassificacao: Cumplice\n");
    } else if (pontos == 2) {
        printf("\nClassificacao: Suspeita\n");
    } else {
        printf("\nClassificacao: Inocente\n");
    }

    return 0;
}