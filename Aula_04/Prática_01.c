/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[50];
    int i, len=0;
    printf("Your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is ");
    puts(name);
    
    for(i=0; name[i] != '\0'; i++){
        if(name[i] != '\0' && name[i] != '\n'){      //&& -> p/ não contar o '\n' no final
            len++;
        }
        
    }
    printf("%d\n", len);
    
    return 0;
}