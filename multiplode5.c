//recebe valor e diz se é múltiplo de 5
#include <stdio.h>
#include <math.h>

int main (void){
    printf("digite um número para saber se é múltiplo de 5: ");
    int a = 0;
    scanf("%d", &a);
    if (a <= 0){
        printf("\nNão é múltiplo de 5");
    }else{
        if (a % 5 == 0){
            printf("\nNúmero múltiplo de 5");
        }else{
            printf("\nNão é multiplo de 5");
        }
    }
}