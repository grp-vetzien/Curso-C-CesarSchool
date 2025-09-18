/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota :");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    
    if (media == 10){
        printf("Aprovado com distinção");
    }else if(media >= 7.0){
        printf("Aprovado");
    }else if(media >= 3.0){
        printf("Boa sorte na final");
    }else if(media < 3.0){
        printf("A disciplina foi extendida em mais um semestre com sucesso");
    }

    return 0;
}