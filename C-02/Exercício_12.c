#include <stdio.h>
#include <stdbool.h>
int main() {
    
    int num, i; 
    long int fatorial
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Fatorial inválido!");
    }else{
        i=1;
        while(i <= num){
            fatorial = fatorial * i;
            i++;
    }
    printf("O fatorial de %d é %ld\n", num, fatorial);
    
    return 0;
}