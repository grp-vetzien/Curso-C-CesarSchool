/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    char nome[50];
    int idade;
    float peso, altura;

    printf("Nome: ");
    scanf("%s", nome); 
    //Vetor não usa &
    
    printf("Idade: ");
    scanf("%d", &idade);
    
    printf("Peso: ");
    scanf("%f", &peso);
    
    printf("Altura: ");
    scanf("%f", &altura);

    printf("%s tem %d anos, tendo massa corporal: %.2f e Altura: %.2f m.", nome, idade, peso, altura);
    return 0;
}