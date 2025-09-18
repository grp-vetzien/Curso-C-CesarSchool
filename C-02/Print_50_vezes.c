#include <stdio.h>

int main() {
    int i=0
    
    while (i < 50) {
        printf("Hello World - %d\n", i+1);
        i=i+1;
        
    }
    
    for (i=0; i < 50; i=i+1) {
        printf("Hello World - %d\n", i+1);
    }
    
    i=0;
    do{
        printf("Hello World - %d\n", i+1);
        i++;
    }while(i<50);
    
    return 0;
}