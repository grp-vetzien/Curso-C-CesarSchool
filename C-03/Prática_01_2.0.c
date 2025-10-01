#include <stdio.h>

int maior(int a, int b){
    if(a >b)
        return a;
    return b;
}
int main (){
    int a, b, c, d, maior;
    
    printf("Digite os 4 valores: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    maior = maior  (a, b);
    maior = maior (maior, c);
    maior = maior (maior, d);
    
    printf("%d\n", maior);
    return 0;
}