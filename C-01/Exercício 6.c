/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
     float peso, excesso = 0, multa = 0;
    const float LIMITE = 50.0;
    const float MULTA_POR_KG = 4.0;

    printf("Digite o peso de peixes trazido (em kg): ");
    scanf("%f", &peso);

    if (peso > LIMITE) {
        excesso = peso - LIMITE;
        multa = excesso * MULTA_POR_KG;
    }

    printf("\n--- RELATÓRIO DE PESCA ---\n");
    printf("Peso informado: %.2f kg\n", peso);
    printf("Excesso de peso: %.2f kg\n", excesso);
    printf("Multa a pagar: R$ %.2f\n", multa);

    return 0;
}

