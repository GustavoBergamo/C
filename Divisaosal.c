#include <stdio.h>
#include <string.h>

 int main(void){
    float salario, soma, resto;
    //Entrada valores salário
    printf("\nBem vindo");
    printf("\nDigite valores ou 0 (zero) para finalizar\n");
    while (salario > 0){
            scanf("%f", &salario);
            soma = soma + salario;
    }
    printf("\n---------------------------------\n");
    printf("Quando você quer deixar na conta? \n");
    printf("R$ ");
    scanf("%f", &resto);
    soma = soma - resto;
    printf("\n---------------------------------");
    printf("\nSantander:  R$ %.2f ", resto);
    printf("\n---------------------------------");
    printf("\nRenda fixa: R$ %.2f ", soma * 0.3);
    printf("\nFiis:       R$ %.2f ", soma * 0.2);
    printf("\nAcoes:      R$ %.2f ", soma * 0.15);
    printf("\nReits:      R$ %.2f ", soma * 0.2);
    printf("\nEuro:       R$ %.2f ", soma * 0.15);
    printf("\n---------------------------------");
    printf("\nTOTAL:      R$ %.2f ", soma);

}