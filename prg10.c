#include<stdio.h>

int main(){
    int pec,sec,min,hor;

    printf("Coloque aqui o número de peças que voce desejaria que forem feitas: \n");
    scanf("%d", &pec);

    sec=(pec*17)%60;
    min=(pec*17/60)%60;
    hor=(pec*17/3600);

    printf("O numero de horas, minutos e segundos que vai demorar será de, respectivamente: %d %d %d \n", hor, min,sec);

    return 0;
}