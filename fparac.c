//converter graus fahrenheit para celsius
//c=5/9*(f-32)
#include <stdio.h>
int main (void){
    float f = 0;
    float c = 0;
    printf("Graus Fahrenheit: ");
    scanf("%f", &f);
    printf("\n   Graus Celsius: ");
    c = c - 32; 
    c = c * 9; 
    c = 5 / c;
    printf("%.2f", c);
}