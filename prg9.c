#include <stdio.h>

int main(){
    float horas, faltas, res;

    //printf("Coloque aqui a carga horaria total da matéria: \n");
    scanf("%f", &horas);

    //printf("Coloque aqui a quantidade de horas faltas acumuladas: \n");
    scanf("%f", &faltas);

    res= 100*(faltas/horas);

    printf("%.2f\n" ,res );

    return 0;

}