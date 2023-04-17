#include <stdio.h> 

int main(void)
{
    int j1=0; 
    int j2=0; 
    int j3=0; 
    int j4=0; 
    int j5=0; 
    int s;
    int contador;

    printf("\niniciando\n");
    for (contador=0; contador<15; contador++)
    {
        printf("digite o número:");
        scanf("%d", &s);
        if(s==1){
            j1++;
            j2++;
            j3++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
        }else if(s==2){
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==3){
            j1++;
            j3++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);   
         }else if(s==4){
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5); 
         }else if(s==5){
            j3++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==6){
            j3++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==7){
            j1++;
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==8){
            j3++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==9){
            j1++;
            j2++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
        }else if(s==10){
            j1++;
            j2++;
            j3++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==11){
            j1++;
            j2++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==12){
            j1++;
            j3++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
        }else if(s==13){
            j2++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==14){
            j1++;
            j2++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==15){
            j2++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5); 
         }else if(s==16){
            j2++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);             
         }else if(s==17){
            j1++;
            j3++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);       
         }else if(s==18){
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==19){
            j1++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);       
         }else if(s==20){
            j1++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==21){
            j1++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==22){
            j2++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==23){
            j1++;
            j3++;
            j4++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==24){
            j1++;
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if(s==25){
            j1++;
            j2++;
            j3++;
            j4++;
            j5++;
            printf("Jogo 1: %d\n", j1);
            printf("Jogo 2: %d\n", j2);
            printf("Jogo 3: %d\n", j3);
            printf("Jogo 4: %d\n", j4);
            printf("Jogo 5: %d\n", j5);
         }else if (s==99){
            break;
        }
    }
return 0;
}