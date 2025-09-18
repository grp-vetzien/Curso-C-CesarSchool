#include <stdio.h>
#include <stdbool.h>
int main() {
    
    int num;       //&& = and e || = ou
    while(true){
        printf("Escolha um número entre 1000 e 10000: ");
        scanf("%d", &num);
        if(num > 1000 && num < 10000) {
            printf("Massa\n");
            break;
        }else{
            printf("Não!Estude mais\n");
        }
    }
    return 0;
}