#include <stdio.h>
#define TAM_LINHA 3  
#define TAM_COLUNA 5
int main (){
    int matriz[TAM_LINHA][TAM_COLUNA];
    int i, j;
    
    //Escrever valores
    for(i=0; i < TAM_LINHA; i++){
        for(j=0; j < TAM_COLUNA;j++){
        printf("Digite o valor %d: ", i,j);
        scanf("%d", &matriz[i][j]);   
        }
    }
    //Ler valores
    printf("Os valores digitados são:\n ");
    for(i=0;i < TAM_LINHA;i++){
        for(j=0;j < TAM_COLUNA;j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    return 0;
    
}
