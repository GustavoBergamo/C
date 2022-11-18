#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *farq;
    int i;
    char tentrada[50];
    char tsaida[50], car;
gets (tentrada);
farq = fopen("arqtexto.txt","a+");
fprintf(farq, "\n%s", tentrada);

fclose(farq);

}